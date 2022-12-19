#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
//#include "cmdutils.h"
#include "structs_enums.h"
extern "C"{
//ffmpeg libraries
#include <libavutil/avstring.h>
#include <libavutil/channel_layout.h>
#include <libavutil/eval.h>
#include <libavutil/mathematics.h>
#include <libavutil/pixdesc.h>
#include <libavutil/dict.h>
#include <libavutil/fifo.h>
#include <libavutil/samplefmt.h>
//#include "libavutil/time.h"
#include <libavformat/avformat.h>
#include <libavdevice/avdevice.h>
#include <libswscale/swscale.h>
#include <libavutil/opt.h>
#include <libavcodec/avfft.h>
#include <libswresample/swresample.h>
//SDL
#include <SDL2/SDL_thread.h>
#include <SDL2/SDL.h>
}


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public slots:
    void init_and_events();
private slots:
    void on_action_exit_triggered();
    
    void on_action_open_f_triggered();
    
    int cmp_audio_fmts(enum AVSampleFormat fmt1, int64_t channel_count1,
                       enum AVSampleFormat fmt2, int64_t channel_count2); //порівнювання двох аудіоформатів
    
    //робота з чергами пакетів
    int packet_queue_put_private(PacketQueue *q, AVPacket *pkt); //запис пакету у чергу
    int packet_queue_put(PacketQueue *q, AVPacket *pkt); //відправлення пакета на запис у функцію вище
    int packet_queue_put_nullpacket(PacketQueue *q, AVPacket *pkt, int stream_index);
    int packet_queue_init(PacketQueue *q);//ініціалізація черги
    void packet_queue_flush(PacketQueue *q);//обнулення черги
    void packet_queue_destroy(PacketQueue *q);//деструкція черги, mutex і cond
    void packet_queue_abort(PacketQueue *q);
    void packet_queue_start(PacketQueue *q);
    int packet_queue_get(PacketQueue *q, AVPacket *pkt, int block, int *serial);//отримання пакету із черги
    
    //декодування
    int decoder_init(Decoder *d, AVCodecContext *avctx, PacketQueue *queue, SDL_cond *empty_queue_cond); //ініціалізація декодувальника
    int decoder_decode_frame(Decoder *d, AVFrame *frame, AVSubtitle *sub); //декодування фрейму або субтритра і запис у чергу фреймів
    void decoder_destroy(Decoder *d);//деструкція декодувальника
    void decoder_abort(Decoder *d, FrameQueue *fq);
    
    //робота із чергами фреймів
    void frame_queue_unref_item(Frame *vp);
    int frame_queue_init(FrameQueue *f, PacketQueue *pktq, int max_size, int keep_last);//ініціалізація черги
    void frame_queue_destroy(FrameQueue *f);//деструкція
    void frame_queue_signal(FrameQueue *f);
    Frame *frame_queue_peek(FrameQueue *f);
    Frame *frame_queue_peek_next(FrameQueue *f);
    Frame *frame_queue_peek_last(FrameQueue *f);
    Frame *frame_queue_peek_writable(FrameQueue *f);
    Frame *frame_queue_peek_readable(FrameQueue *f);
    void frame_queue_push(FrameQueue *f);//відправлення фрейма у чергу
    void frame_queue_next(FrameQueue *f);
    int frame_queue_nb_remaining(FrameQueue *f);/* return the number of undisplayed frames in the queue */
    int64_t frame_queue_last_pos(FrameQueue *f);/* return last shown position */
    
    //керування відображенням відео засобами SDL
    void fill_rectangle(int x, int y, int w, int h);//задання прямокутника, у який вписується зображення
    int realloc_texture(SDL_Texture **texture, Uint32 new_format, int new_width, int new_height, SDL_BlendMode blendmode, int init_texture);//перезадання текстури, що відображається у рендерері
    void calculate_display_rect(SDL_Rect *rect,
                                       int scr_xleft, int scr_ytop, int scr_width, int scr_height,
                                       int pic_width, int pic_height, AVRational pic_sar);//обчислення розмірів та позиції прямокутника, у який вписується зображення,
    //відповідно до властивостей відео та розміру екрана
    void get_sdl_pix_fmt_and_blendmode(int format, Uint32 *sdl_pix_fmt, SDL_BlendMode *sdl_blendmode);
    int upload_texture(SDL_Texture **tex, AVFrame *frame, struct SwsContext **img_convert_ctx);//завантаження фрейма у текстуру
    void set_sdl_yuv_conversion_mode(AVFrame *frame);
    
    
    void video_image_display(VideoState *is); //відображення відео при SHOW_MODE_VIDEO
    void video_audio_display(VideoState *s);  //при інших видах showmode
    
    void stream_component_close(VideoState *is, int stream_index);//закриття потоку із індексом stream_index
    void stream_close(VideoState *is);//закриття усіх потоків, деструкція усіх черг і т.д.
    void do_exit(VideoState *is);//вихід із програми //переробити
    
    void set_default_window_size(int width, int height, AVRational sar);
    
    int video_open(VideoState *is);
    
    void video_display(VideoState *is);/* display the current picture, if any */
    
    //годинники
    double get_clock(Clock *c);
    void set_clock_at(Clock *c, double pts, int serial, double time);
    void set_clock(Clock *c, double pts, int serial);
    void set_clock_speed(Clock *c, double speed);
    void init_clock(Clock *c, int *queue_serial);
    void sync_clock_to_slave(Clock *c, Clock *slave);
    double get_master_clock(VideoState *is);
    void check_external_clock_speed(VideoState *is);
    
    int get_master_sync_type(VideoState *is);
    
    void stream_seek(VideoState *is, int64_t pos, int64_t rel, int by_bytes);/* seek in the stream */
    void stream_toggle_pause(VideoState *is);/* pause or resume the video */    
    void toggle_pause(VideoState *is);
    void toggle_mute(VideoState *is);
    void update_volume(VideoState *is, int sign, double step);
    void step_to_next_frame(VideoState *is);
    
    double compute_target_delay(double delay, VideoState *is);
    double vp_duration(VideoState *is, Frame *vp, Frame *nextvp);
    void update_video_pts(VideoState *is, double pts, int64_t pos, int serial);/* update current video pts */
    
    void video_refresh(void *opaque, double *remaining_time);/* called to display each frame */
    
    int queue_picture(VideoState *is, AVFrame *src_frame, double pts, double duration, int64_t pos, int serial);//запис фрейма у чергу (включаючи присвоєння йому властивостей)
    
    int get_video_frame(VideoState *is, AVFrame *frame);
    
    int decoder_start(Decoder *d, int (*fn)(void *), const char *thread_name, void* arg);//запуск треду із декодуванням аудіо/відео
    
    int audio_thread(void *arg);
    int video_thread(void *arg);
    int subtitle_thread(void *arg);
    
    void update_sample_display(VideoState *is, short *samples, int samples_size);/* copy samples for viewing in editor window */
    int synchronize_audio(VideoState *is, int nb_samples);/* return the wanted number of samples to get better sync if sync_type is video
 * or external master clock */
    int audio_decode_frame(VideoState *is);
    
    void sdl_audio_callback(void *opaque, Uint8 *stream, int len);
    int audio_open(void *opaque, AVChannelLayout *wanted_channel_layout, int wanted_sample_rate, struct AudioParams *audio_hw_params);
    
    int stream_component_open(VideoState *is, int stream_index);/* open a given stream. Return 0 if OK */
    
    int decode_interrupt_cb(void *ctx);
    int stream_has_enough_packets(AVStream *st, int stream_id, PacketQueue *queue);
    int is_realtime(AVFormatContext *s);
    
    int read_thread(void *arg);/* this thread gets the stream from the disk or the network */
    
    VideoState *stream_open(const char *filename,
                                   const AVInputFormat *iformat);//створення Videostate
    
    //переробити:
    void stream_cycle_channel(VideoState *is, int codec_type);//перемикання потоку
    
    void toggle_full_screen(VideoState *is);
    void toggle_audio_display(VideoState *is);
    
    void refresh_loop_wait_event(VideoState *is, SDL_Event *event);
    
    void seek_chapter(VideoState *is, int incr);//для контейнерів, що дозволяють ділення файлу на розділи
    
    void event_loop(VideoState *cur_stream);/* handle an event sent by the GUI */
    
    //опції (задаються командним рядком, але якщо зробити настройки у GUI, то можна залишити)
    int opt_width(void *optctx, const char *opt, const char *arg);
    int opt_height(void *optctx, const char *opt, const char *arg);
    int opt_format(void *optctx, const char *opt, const char *arg);
    int opt_sync(void *optctx, const char *opt, const char *arg);
    int opt_seek(void *optctx, const char *opt, const char *arg);
    int opt_duration(void *optctx, const char *opt, const char *arg);
    int opt_show_mode(void *optctx, const char *opt, const char *arg);
    void opt_input_file(void *optctx, const char *filename);
    int opt_codec(void *optctx, const char *opt, const char *arg);
//    static const OptionDef options[]    
    //void show_usage(void)
    //void show_help_default(const char *opt, const char *arg)
    int init();
private:
    Ui::MainWindow *ui;
    
    //Поля
    /* options specified by the user */
    static const AVInputFormat *file_iformat;
    static const char *input_filename;          //файл який ми програємо
    static const char *window_title;
    static int default_width;            //ширина дефолтні
    static int default_height;            //висота деф
    static int screen_width;               
    static int screen_height;
    static int screen_left;  //позиція
    static int screen_top;
    static int audio_disable;
    static int video_disable;
    static int subtitle_disable;
    static const char* wanted_stream_spec[AVMEDIA_TYPE_NB];
    static int seek_by_bytes;
    static float seek_interval;
    static int display_disable;
    static int borderless;
    static int alwaysontop;
    static int startup_volume;  //початкова гучність
    static int show_status;
    static int av_sync_type;
    static int64_t start_time;
    static int64_t duration;
    static int fast;
    static int genpts;
    static int lowres;
    static int decoder_reorder_pts;
    static int autoexit;
    static int exit_on_keydown;
    static int exit_on_mousedown;
    static int loop;
    static int framedrop;
    static int infinite_buffer;
    static int show_mode;
    static const char *audio_codec_name;
    static const char *subtitle_codec_name;
    static const char *video_codec_name;
    double rdftspeed;
    static int64_t cursor_last_shown;
    static int cursor_hidden;
//    #if CONFIG_AVFILTER
//    static const char **vfilters_list = NULL;
//    static int nb_vfilters = 0;
//    static char *afilters = NULL;
//    #endif
    static int autorotate;
    static int find_stream_info;
    static int filter_nbthreads;
    
    /* current context */
    static int is_full_screen;          //прапорець (чи в повному екрані)
    static int64_t audio_callback_time;
    
    //відображення
    static SDL_Window *window;
    static SDL_Renderer *renderer;
    static SDL_RendererInfo renderer_info;
    //аудіодевайс, куди передається аудіо
    static SDL_AudioDeviceID audio_dev;
    
    //Формати відображення текстур (палітри)
    static const struct TextureFormatEntry {
        enum AVPixelFormat format;
        int texture_fmt;
    } sdl_texture_format_map[];
};
#endif // MAINWINDOW_H
