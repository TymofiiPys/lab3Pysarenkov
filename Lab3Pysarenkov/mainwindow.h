#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
//#include "cmdutils.h"
#include "structs_enums.h"
extern "C"{
//ffmpeg libraries
#include <libavutil/avstring.h>
#include <libavutil/eval.h>
#include <libavutil/mathematics.h>
#include <libavutil/pixdesc.h>
#include <libavutil/imgutils.h>
#include <libavutil/dict.h>
#include <libavutil/fifo.h>
#include <libavutil/parseutils.h>
#include <libavutil/samplefmt.h>
#include <libavutil/avassert.h>
#include <libavutil/time.h>
#include <libavutil/bprint.h>
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
    
    void ShowMessage(int type, QString message);
signals:
    static void SendMessage(int type, QString message);
private slots:
    void on_action_exit_triggered();
    
    void on_action_open_f_triggered();
    
    static int cmp_audio_fmts(enum AVSampleFormat fmt1, int64_t channel_count1,
                       enum AVSampleFormat fmt2, int64_t channel_count2); //порівнювання двох аудіоформатів
    int64_t get_valid_channel_layout(int64_t channel_layout, int channels);
    //робота з чергами пакетів
    static int packet_queue_put_private(PacketQueue *q, AVPacket *pkt); //запис пакету у чергу
    static int packet_queue_put(PacketQueue *q, AVPacket *pkt); //відправлення пакета на запис у функцію вище
    static int packet_queue_put_nullpacket(PacketQueue *q, AVPacket *pkt, int stream_index);
    static int packet_queue_init(PacketQueue *q);//ініціалізація черги
    static void packet_queue_flush(PacketQueue *q);//обнулення черги
    static void packet_queue_destroy(PacketQueue *q);//деструкція черги, mutex і cond
    static void packet_queue_abort(PacketQueue *q);
    static void packet_queue_start(PacketQueue *q);
    static int packet_queue_get(PacketQueue *q, AVPacket *pkt, int block, int *serial);//отримання пакету із черги
    
    //декодування
    static int decoder_init(Decoder *d, AVCodecContext *avctx, PacketQueue *queue, SDL_cond *empty_queue_cond); //ініціалізація декодувальника
    static int decoder_decode_frame(Decoder *d, AVFrame *frame, AVSubtitle *sub); //декодування фрейму або субтритра і запис у чергу фреймів
    static void decoder_destroy(Decoder *d);//деструкція декодувальника
    static void decoder_abort(Decoder *d, FrameQueue *fq);
    
    //робота із чергами фреймів
    static void frame_queue_unref_item(Frame *vp);
    static int frame_queue_init(FrameQueue *f, PacketQueue *pktq, int max_size, int keep_last);//ініціалізація черги
    static void frame_queue_destroy(FrameQueue *f);//деструкція
    static void frame_queue_signal(FrameQueue *f);
    static Frame *frame_queue_peek(FrameQueue *f);
    static Frame *frame_queue_peek_next(FrameQueue *f);
    static Frame *frame_queue_peek_last(FrameQueue *f);
    static Frame *frame_queue_peek_writable(FrameQueue *f);
    static Frame *frame_queue_peek_readable(FrameQueue *f);
    static void frame_queue_push(FrameQueue *f);//відправлення фрейма у чергу
    static void frame_queue_next(FrameQueue *f);
    static int frame_queue_nb_remaining(FrameQueue *f);/* return the number of undisplayed frames in the queue */
    static int64_t frame_queue_last_pos(FrameQueue *f);/* return last shown position */
    
    //керування відображенням відео засобами SDL
    static void fill_rectangle(int x, int y, int w, int h);//задання прямокутника, у який вписується зображення
    static int realloc_texture(SDL_Texture **texture, Uint32 new_format, int new_width, int new_height, SDL_BlendMode blendmode, int init_texture);//перезадання текстури, що відображається у рендерері
    static void calculate_display_rect(SDL_Rect *rect,
                                       int scr_xleft, int scr_ytop, int scr_width, int scr_height,
                                       int pic_width, int pic_height, AVRational pic_sar);//обчислення розмірів та позиції прямокутника, у який вписується зображення,
    //відповідно до властивостей відео та розміру екрана
    static void get_sdl_pix_fmt_and_blendmode(int format, Uint32 *sdl_pix_fmt, SDL_BlendMode *sdl_blendmode);
    static int upload_texture(SDL_Texture **tex, AVFrame *frame, struct SwsContext **img_convert_ctx);//завантаження фрейма у текстуру
    static void set_sdl_yuv_conversion_mode(AVFrame *frame);
    
    
    static void video_image_display(VideoState *is); //відображення відео при SHOW_MODE_VIDEO
    static void video_audio_display(VideoState *s);  //при інших видах showmode
    
    static void stream_component_close(VideoState *is, int stream_index);//закриття потоку із індексом stream_index
    static void stream_close(VideoState *is);//закриття усіх потоків, деструкція усіх черг і т.д.
    static void do_exit(VideoState *is);//вихід із програми //переробити
    
    static void set_default_window_size(int width, int height, AVRational sar);
    
    static int video_open(VideoState *is);
    
    static void video_display(VideoState *is);/* display the current picture, if any */
    
    //годинники
    static double get_clock(Clock *c);
    static void set_clock_at(Clock *c, double pts, int serial, double time);
    static void set_clock(Clock *c, double pts, int serial);
    static void set_clock_speed(Clock *c, double speed);
    static void init_clock(Clock *c, int *queue_serial);
    static void sync_clock_to_slave(Clock *c, Clock *slave);
    static double get_master_clock(VideoState *is);
    static void check_external_clock_speed(VideoState *is);
    
    static int get_master_sync_type(VideoState *is);
    
    static void stream_seek(VideoState *is, int64_t pos, int64_t rel, int by_bytes);/* seek in the stream */
    static void stream_toggle_pause(VideoState *is);/* pause or resume the video */    
    static void toggle_pause(VideoState *is);
    static void toggle_mute(VideoState *is);
    static void update_volume(VideoState *is, int sign, double step);
    static void step_to_next_frame(VideoState *is);
    
    static double compute_target_delay(double delay, VideoState *is);
    static double vp_duration(VideoState *is, Frame *vp, Frame *nextvp);
    static void update_video_pts(VideoState *is, double pts, int64_t pos, int serial);/* update current video pts */
    
    static void video_refresh(void *opaque, double *remaining_time);/* called to display each frame */
    
    static int queue_picture(VideoState *is, AVFrame *src_frame, double pts, double duration, int64_t pos, int serial);//запис фрейма у чергу (включаючи присвоєння йому властивостей)
    
    static int get_video_frame(VideoState *is, AVFrame *frame);
    
    static int decoder_start(Decoder *d, int (*fn)(void *)/*std::function<int()>fn*/, const char *thread_name, void* arg);//запуск треду із декодуванням аудіо/відео
    
    static int audio_thread(void *arg);
    static int video_thread(void *arg);
    static int subtitle_thread(void *arg);
    
    static void update_sample_display(VideoState *is, short *samples, int samples_size);/* copy samples for viewing in editor window */
    static int synchronize_audio(VideoState *is, int nb_samples);/* return the wanted number of samples to get better sync if sync_type is video
 * or external master clock */
    static int audio_decode_frame(VideoState *is);
    
    static void sdl_audio_callback(void *opaque, Uint8 *stream, int len);
    static int audio_open(void *opaque, int64_t wanted_channel_layout, int wanted_nb_channels, int wanted_sample_rate, struct AudioParams *audio_hw_params);
    
    static int stream_component_open(VideoState *is, int stream_index);/* open a given stream. Return 0 if OK */
    
    static int decode_interrupt_cb(void *ctx);
    static int stream_has_enough_packets(AVStream *st, int stream_id, PacketQueue *queue);
    static int is_realtime(AVFormatContext *s);
    
    static int read_thread(void *arg);/* this thread gets the stream from the disk or the network */
    
    static VideoState *stream_open(const char *filename,
                                   AVInputFormat *iformat);//створення Videostate
    
    //переробити:
    static void stream_cycle_channel(VideoState *is, int codec_type);//перемикання потоку
    
    static void toggle_full_screen(VideoState *is);
    static void toggle_audio_display(VideoState *is);
    
    static void refresh_loop_wait_event(VideoState *is, SDL_Event *event);
    
    static void seek_chapter(VideoState *is, int incr);//для контейнерів, що дозволяють ділення файлу на розділи
    
    static void event_loop(VideoState *cur_stream);/* handle an event sent by the GUI */
    
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
    static AVInputFormat *file_iformat;
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
//    static const char* wanted_stream_spec[AVMEDIA_TYPE_NB];
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
    static double rdftspeed;
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
    
};
#endif // MAINWINDOW_H
