#pragma once
extern "C"{
//ffmpeg libraries
#include "libavutil/avstring.h"
#include "libavutil/channel_layout.h"
#include "libavutil/eval.h"
#include "libavutil/mathematics.h"
#include "libavutil/pixdesc.h"
#include "libavutil/dict.h"
#include <libavutil/fifo.h>
#include "libavutil/samplefmt.h"
//#include "libavutil/time.h"
#include "libavutil/bprint.h"
#include "libavformat/avformat.h"
#include "libavdevice/avdevice.h"
#include "libswscale/swscale.h"
#include "libavutil/opt.h"
#include "libavcodec/avfft.h"
#include "libswresample/swresample.h"
//SDL
#include <SDL2/SDL_thread.h>
#include <SDL2/SDL.h>
}
#include "macro_defs.h"

#ifndef STRUCTS_ENUMS_H
#define STRUCTS_ENUMS_H

//структури


//список пакетів
struct MyAVPacketList {
    AVPacket *pkt;  //пакет
    int serial;     //його номер у списку
};

//черга пакетів
struct PacketQueue {
    AVFifo *pkt_list;   //список пакетів
//    AVFifo *pkt_list;
    int nb_packets;     //кількість пакетів у черзі
    int size;           //розмір черги у байтах
    int64_t duration;
    int abort_request;
    int serial;
    SDL_mutex *mutex;
    SDL_cond *cond;
};

//аудіопараметри
struct AudioParams {
    int freq;                   //частота дискретизації
    AVChannelLayout ch_layout;  //конфігурація каналів, через які відтворюється аудіо
    enum AVSampleFormat fmt;    //формат
    int frame_size;
    int bytes_per_sec;
};

//"годинник", за яким відбуватиметься синхронізація
//аудіо та відео
struct Clock {
    double pts;           /* clock base */
    double pts_drift;     /* clock base minus time at which we updated the clock */
    double last_updated;
    double speed;
    int serial;           /* clock is based on a packet with this serial */
    int paused;
    int *queue_serial;    /* pointer to the current packet queue serial, used for obsolete clock detection */
};

/* Common struct for handling all types of decoded data and allocated render buffers. */    
struct Frame {
    AVFrame *frame;//декодований аудіо- або відеофрейм
    AVSubtitle sub;//декодований субтитр
    int serial;
    double pts;           /* presentation timestamp for the frame */
    double duration;      /* estimated duration of the frame */
    int64_t pos;          /* byte position of the frame in the input file */
    int width;
    int height;
    int format;
    AVRational sar;
    int uploaded;
    int flip_v;
};

//черга фреймів та її властивості
struct FrameQueue {
    Frame queue[FRAME_QUEUE_SIZE];  //безпосередньо черга
    int rindex;                     //індекс читання
    int windex;                     //індекс запису
    int size;                       //розмір черги
    int max_size;
    int keep_last;
    int rindex_shown;
    SDL_mutex *mutex;
    SDL_cond *cond;
    PacketQueue *pktq;              //відповідна черга пакетів
};

//види синхронізацій доріжок у медіафайлі
enum {
    AV_SYNC_AUDIO_MASTER, /* default choice */ //за аудіодоріжкою
    AV_SYNC_VIDEO_MASTER,   //за відеодоріжкою
    AV_SYNC_EXTERNAL_CLOCK, /* synchronize to an external clock */
};

enum {
    SHOW_MODE_NONE = -1,    //нічого
    SHOW_MODE_VIDEO = 0,    //відео
    SHOW_MODE_WAVES,        //хвилі
    SHOW_MODE_RDFT,
    SHOW_MODE_NB
};

//декодувальник
struct Decoder {
    AVPacket *pkt;      //Пакет, який на даний момент декодується у фрейм або субтитр
    PacketQueue *queue; //черга пакетів для цього декодера
    AVCodecContext *avctx; //кодек контекст декодера
    int pkt_serial;     //номер пакета
    int finished;
    int packet_pending;
    SDL_cond *empty_queue_cond;
    int64_t start_pts;
    AVRational start_pts_tb;
    int64_t next_pts;
    AVRational next_pts_tb;
    SDL_Thread *decoder_tid;    //тред декодування даних
};

//стан декодування та відтворення медіафайлу
struct VideoState {
    SDL_Thread *read_tid;       //зчитування пакетів із контейнера (файлу)
    const AVInputFormat *iformat; //примусово заданий формат файлу
    int abort_request;          //запит на припинення дії програми
    int force_refresh;
    int paused;                 //відтворення на паузі
    int last_paused;
    int queue_attachments_req;
    //дані для перемотки відео
    int seek_req;
    int seek_flags;
    int64_t seek_pos;
    int64_t seek_rel;
    
    int read_pause_return;
    AVFormatContext *ic;
    int realtime;

    Clock audclk;   //аудіогодинник, за яким синхронізуються доріжки
    Clock vidclk;   //відеогодинник
    Clock extclk;   //зовнішній годинник (комп'ютера)

    FrameQueue pictq;//черга ФРЕЙМІВ картинок
    FrameQueue subpq;//черга субтитрів
    FrameQueue sampq;//черга аудіо

    Decoder auddec;//аудіодекодер
    Decoder viddec;//відеодекодер
    Decoder subdec;//субтитродекодер

    int audio_stream;       //номер аудіопотоку

    int av_sync_type;       //тип синхронізації на даний момент

    double audio_clock;
    int audio_clock_serial;
    double audio_diff_cum; /* used for AV difference average computation */
    double audio_diff_avg_coef;
    double audio_diff_threshold;
    int audio_diff_avg_count;
    AVStream *audio_st;     //аудіопотік
    PacketQueue audioq;     //черга аудіопакетів
    //аудіобуфери, які будуть "перетворені на звук"
    int audio_hw_buf_size;
    uint8_t *audio_buf;
    uint8_t *audio_buf1;
    unsigned int audio_buf_size; /* in bytes */
    unsigned int audio_buf1_size;
    int audio_buf_index; /* in bytes */
    int audio_write_buf_size;
    
    int audio_volume; //гучність аудіовідтворення
    int muted;          //чи заглушене аудіо
    struct AudioParams audio_src; //параметри вхідного аудіо
#if CONFIG_AVFILTER
    struct AudioParams audio_filter_src;
#endif
    struct AudioParams audio_tgt; //параметри відтворюваного аудіо
    struct SwrContext *swr_ctx;     //перетворювач аудіо
    int frame_drops_early;
    int frame_drops_late;
    
    //що відображається на картинці
    int show_mode;
    int16_t sample_array[SAMPLE_ARRAY_SIZE];
    int sample_array_index;
    int last_i_start;
    RDFTContext *rdft;
    int rdft_bits;
    FFTSample *rdft_data;
    int xpos;
    double last_vis_time;
    SDL_Texture *vis_texture;
    SDL_Texture *sub_texture;   //текстура субтитрів
    SDL_Texture *vid_texture;   //текстура відео

    int subtitle_stream;        //номер субт. потоку
    AVStream *subtitle_st;      //потік
    PacketQueue subtitleq;      //черга пакетів із субами

    double frame_timer;
    double frame_last_returned_time;
    double frame_last_filter_delay;
    int video_stream;           //номер відеопотоку
    AVStream *video_st;
    PacketQueue videoq;
    double max_frame_duration;      // maximum duration of a frame - above this, we consider the jump a timestamp discontinuity
    struct SwsContext *img_convert_ctx;
    struct SwsContext *sub_convert_ctx;
    int eof;                        //Кінець файлу

    char *filename;
    int width, height, xleft, ytop;
    int step;

#if CONFIG_AVFILTER
    int vfilter_idx;
    AVFilterContext *in_video_filter;   // the first filter in the video chain
    AVFilterContext *out_video_filter;  // the last filter in the video chain
    AVFilterContext *in_audio_filter;   // the first filter in the audio chain
    AVFilterContext *out_audio_filter;  // the last filter in the audio chain
    AVFilterGraph *agraph;              // audio filter graph
#endif

    int last_video_stream, last_audio_stream, last_subtitle_stream;

    SDL_cond *continue_read_thread;
};

#endif // STRUCTS_ENUMS_H
