/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Lab3Pysarenkov/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[217];
    char stringdata0[2704];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 15), // "init_and_events"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 24), // "on_action_exit_triggered"
QT_MOC_LITERAL(4, 53, 26), // "on_action_open_f_triggered"
QT_MOC_LITERAL(5, 80, 14), // "cmp_audio_fmts"
QT_MOC_LITERAL(6, 95, 14), // "AVSampleFormat"
QT_MOC_LITERAL(7, 110, 4), // "fmt1"
QT_MOC_LITERAL(8, 115, 7), // "int64_t"
QT_MOC_LITERAL(9, 123, 14), // "channel_count1"
QT_MOC_LITERAL(10, 138, 4), // "fmt2"
QT_MOC_LITERAL(11, 143, 14), // "channel_count2"
QT_MOC_LITERAL(12, 158, 24), // "packet_queue_put_private"
QT_MOC_LITERAL(13, 183, 12), // "PacketQueue*"
QT_MOC_LITERAL(14, 196, 1), // "q"
QT_MOC_LITERAL(15, 198, 9), // "AVPacket*"
QT_MOC_LITERAL(16, 208, 3), // "pkt"
QT_MOC_LITERAL(17, 212, 16), // "packet_queue_put"
QT_MOC_LITERAL(18, 229, 27), // "packet_queue_put_nullpacket"
QT_MOC_LITERAL(19, 257, 12), // "stream_index"
QT_MOC_LITERAL(20, 270, 17), // "packet_queue_init"
QT_MOC_LITERAL(21, 288, 18), // "packet_queue_flush"
QT_MOC_LITERAL(22, 307, 20), // "packet_queue_destroy"
QT_MOC_LITERAL(23, 328, 18), // "packet_queue_abort"
QT_MOC_LITERAL(24, 347, 18), // "packet_queue_start"
QT_MOC_LITERAL(25, 366, 16), // "packet_queue_get"
QT_MOC_LITERAL(26, 383, 5), // "block"
QT_MOC_LITERAL(27, 389, 4), // "int*"
QT_MOC_LITERAL(28, 394, 6), // "serial"
QT_MOC_LITERAL(29, 401, 12), // "decoder_init"
QT_MOC_LITERAL(30, 414, 8), // "Decoder*"
QT_MOC_LITERAL(31, 423, 1), // "d"
QT_MOC_LITERAL(32, 425, 15), // "AVCodecContext*"
QT_MOC_LITERAL(33, 441, 5), // "avctx"
QT_MOC_LITERAL(34, 447, 5), // "queue"
QT_MOC_LITERAL(35, 453, 9), // "SDL_cond*"
QT_MOC_LITERAL(36, 463, 16), // "empty_queue_cond"
QT_MOC_LITERAL(37, 480, 20), // "decoder_decode_frame"
QT_MOC_LITERAL(38, 501, 8), // "AVFrame*"
QT_MOC_LITERAL(39, 510, 5), // "frame"
QT_MOC_LITERAL(40, 516, 11), // "AVSubtitle*"
QT_MOC_LITERAL(41, 528, 3), // "sub"
QT_MOC_LITERAL(42, 532, 15), // "decoder_destroy"
QT_MOC_LITERAL(43, 548, 13), // "decoder_abort"
QT_MOC_LITERAL(44, 562, 11), // "FrameQueue*"
QT_MOC_LITERAL(45, 574, 2), // "fq"
QT_MOC_LITERAL(46, 577, 22), // "frame_queue_unref_item"
QT_MOC_LITERAL(47, 600, 6), // "Frame*"
QT_MOC_LITERAL(48, 607, 2), // "vp"
QT_MOC_LITERAL(49, 610, 16), // "frame_queue_init"
QT_MOC_LITERAL(50, 627, 1), // "f"
QT_MOC_LITERAL(51, 629, 4), // "pktq"
QT_MOC_LITERAL(52, 634, 8), // "max_size"
QT_MOC_LITERAL(53, 643, 9), // "keep_last"
QT_MOC_LITERAL(54, 653, 19), // "frame_queue_destroy"
QT_MOC_LITERAL(55, 673, 18), // "frame_queue_signal"
QT_MOC_LITERAL(56, 692, 16), // "frame_queue_peek"
QT_MOC_LITERAL(57, 709, 21), // "frame_queue_peek_next"
QT_MOC_LITERAL(58, 731, 21), // "frame_queue_peek_last"
QT_MOC_LITERAL(59, 753, 25), // "frame_queue_peek_writable"
QT_MOC_LITERAL(60, 779, 25), // "frame_queue_peek_readable"
QT_MOC_LITERAL(61, 805, 16), // "frame_queue_push"
QT_MOC_LITERAL(62, 822, 16), // "frame_queue_next"
QT_MOC_LITERAL(63, 839, 24), // "frame_queue_nb_remaining"
QT_MOC_LITERAL(64, 864, 20), // "frame_queue_last_pos"
QT_MOC_LITERAL(65, 885, 14), // "fill_rectangle"
QT_MOC_LITERAL(66, 900, 1), // "x"
QT_MOC_LITERAL(67, 902, 1), // "y"
QT_MOC_LITERAL(68, 904, 1), // "w"
QT_MOC_LITERAL(69, 906, 1), // "h"
QT_MOC_LITERAL(70, 908, 15), // "realloc_texture"
QT_MOC_LITERAL(71, 924, 13), // "SDL_Texture**"
QT_MOC_LITERAL(72, 938, 7), // "texture"
QT_MOC_LITERAL(73, 946, 6), // "Uint32"
QT_MOC_LITERAL(74, 953, 10), // "new_format"
QT_MOC_LITERAL(75, 964, 9), // "new_width"
QT_MOC_LITERAL(76, 974, 10), // "new_height"
QT_MOC_LITERAL(77, 985, 13), // "SDL_BlendMode"
QT_MOC_LITERAL(78, 999, 9), // "blendmode"
QT_MOC_LITERAL(79, 1009, 12), // "init_texture"
QT_MOC_LITERAL(80, 1022, 22), // "calculate_display_rect"
QT_MOC_LITERAL(81, 1045, 9), // "SDL_Rect*"
QT_MOC_LITERAL(82, 1055, 4), // "rect"
QT_MOC_LITERAL(83, 1060, 9), // "scr_xleft"
QT_MOC_LITERAL(84, 1070, 8), // "scr_ytop"
QT_MOC_LITERAL(85, 1079, 9), // "scr_width"
QT_MOC_LITERAL(86, 1089, 10), // "scr_height"
QT_MOC_LITERAL(87, 1100, 9), // "pic_width"
QT_MOC_LITERAL(88, 1110, 10), // "pic_height"
QT_MOC_LITERAL(89, 1121, 10), // "AVRational"
QT_MOC_LITERAL(90, 1132, 7), // "pic_sar"
QT_MOC_LITERAL(91, 1140, 29), // "get_sdl_pix_fmt_and_blendmode"
QT_MOC_LITERAL(92, 1170, 6), // "format"
QT_MOC_LITERAL(93, 1177, 7), // "Uint32*"
QT_MOC_LITERAL(94, 1185, 11), // "sdl_pix_fmt"
QT_MOC_LITERAL(95, 1197, 14), // "SDL_BlendMode*"
QT_MOC_LITERAL(96, 1212, 13), // "sdl_blendmode"
QT_MOC_LITERAL(97, 1226, 14), // "upload_texture"
QT_MOC_LITERAL(98, 1241, 3), // "tex"
QT_MOC_LITERAL(99, 1245, 12), // "SwsContext**"
QT_MOC_LITERAL(100, 1258, 15), // "img_convert_ctx"
QT_MOC_LITERAL(101, 1274, 27), // "set_sdl_yuv_conversion_mode"
QT_MOC_LITERAL(102, 1302, 19), // "video_image_display"
QT_MOC_LITERAL(103, 1322, 11), // "VideoState*"
QT_MOC_LITERAL(104, 1334, 2), // "is"
QT_MOC_LITERAL(105, 1337, 19), // "video_audio_display"
QT_MOC_LITERAL(106, 1357, 1), // "s"
QT_MOC_LITERAL(107, 1359, 22), // "stream_component_close"
QT_MOC_LITERAL(108, 1382, 12), // "stream_close"
QT_MOC_LITERAL(109, 1395, 7), // "do_exit"
QT_MOC_LITERAL(110, 1403, 23), // "set_default_window_size"
QT_MOC_LITERAL(111, 1427, 5), // "width"
QT_MOC_LITERAL(112, 1433, 6), // "height"
QT_MOC_LITERAL(113, 1440, 3), // "sar"
QT_MOC_LITERAL(114, 1444, 10), // "video_open"
QT_MOC_LITERAL(115, 1455, 13), // "video_display"
QT_MOC_LITERAL(116, 1469, 9), // "get_clock"
QT_MOC_LITERAL(117, 1479, 6), // "Clock*"
QT_MOC_LITERAL(118, 1486, 1), // "c"
QT_MOC_LITERAL(119, 1488, 12), // "set_clock_at"
QT_MOC_LITERAL(120, 1501, 3), // "pts"
QT_MOC_LITERAL(121, 1505, 4), // "time"
QT_MOC_LITERAL(122, 1510, 9), // "set_clock"
QT_MOC_LITERAL(123, 1520, 15), // "set_clock_speed"
QT_MOC_LITERAL(124, 1536, 5), // "speed"
QT_MOC_LITERAL(125, 1542, 10), // "init_clock"
QT_MOC_LITERAL(126, 1553, 12), // "queue_serial"
QT_MOC_LITERAL(127, 1566, 19), // "sync_clock_to_slave"
QT_MOC_LITERAL(128, 1586, 5), // "slave"
QT_MOC_LITERAL(129, 1592, 16), // "get_master_clock"
QT_MOC_LITERAL(130, 1609, 26), // "check_external_clock_speed"
QT_MOC_LITERAL(131, 1636, 20), // "get_master_sync_type"
QT_MOC_LITERAL(132, 1657, 11), // "stream_seek"
QT_MOC_LITERAL(133, 1669, 3), // "pos"
QT_MOC_LITERAL(134, 1673, 3), // "rel"
QT_MOC_LITERAL(135, 1677, 8), // "by_bytes"
QT_MOC_LITERAL(136, 1686, 19), // "stream_toggle_pause"
QT_MOC_LITERAL(137, 1706, 12), // "toggle_pause"
QT_MOC_LITERAL(138, 1719, 11), // "toggle_mute"
QT_MOC_LITERAL(139, 1731, 13), // "update_volume"
QT_MOC_LITERAL(140, 1745, 4), // "sign"
QT_MOC_LITERAL(141, 1750, 4), // "step"
QT_MOC_LITERAL(142, 1755, 18), // "step_to_next_frame"
QT_MOC_LITERAL(143, 1774, 20), // "compute_target_delay"
QT_MOC_LITERAL(144, 1795, 5), // "delay"
QT_MOC_LITERAL(145, 1801, 11), // "vp_duration"
QT_MOC_LITERAL(146, 1813, 6), // "nextvp"
QT_MOC_LITERAL(147, 1820, 16), // "update_video_pts"
QT_MOC_LITERAL(148, 1837, 13), // "video_refresh"
QT_MOC_LITERAL(149, 1851, 6), // "opaque"
QT_MOC_LITERAL(150, 1858, 7), // "double*"
QT_MOC_LITERAL(151, 1866, 14), // "remaining_time"
QT_MOC_LITERAL(152, 1881, 13), // "queue_picture"
QT_MOC_LITERAL(153, 1895, 9), // "src_frame"
QT_MOC_LITERAL(154, 1905, 8), // "duration"
QT_MOC_LITERAL(155, 1914, 15), // "get_video_frame"
QT_MOC_LITERAL(156, 1930, 13), // "decoder_start"
QT_MOC_LITERAL(157, 1944, 11), // "const char*"
QT_MOC_LITERAL(158, 1956, 11), // "thread_name"
QT_MOC_LITERAL(159, 1968, 3), // "arg"
QT_MOC_LITERAL(160, 1972, 12), // "audio_thread"
QT_MOC_LITERAL(161, 1985, 12), // "video_thread"
QT_MOC_LITERAL(162, 1998, 15), // "subtitle_thread"
QT_MOC_LITERAL(163, 2014, 21), // "update_sample_display"
QT_MOC_LITERAL(164, 2036, 6), // "short*"
QT_MOC_LITERAL(165, 2043, 7), // "samples"
QT_MOC_LITERAL(166, 2051, 12), // "samples_size"
QT_MOC_LITERAL(167, 2064, 17), // "synchronize_audio"
QT_MOC_LITERAL(168, 2082, 10), // "nb_samples"
QT_MOC_LITERAL(169, 2093, 18), // "audio_decode_frame"
QT_MOC_LITERAL(170, 2112, 18), // "sdl_audio_callback"
QT_MOC_LITERAL(171, 2131, 6), // "Uint8*"
QT_MOC_LITERAL(172, 2138, 6), // "stream"
QT_MOC_LITERAL(173, 2145, 3), // "len"
QT_MOC_LITERAL(174, 2149, 10), // "audio_open"
QT_MOC_LITERAL(175, 2160, 16), // "AVChannelLayout*"
QT_MOC_LITERAL(176, 2177, 21), // "wanted_channel_layout"
QT_MOC_LITERAL(177, 2199, 18), // "wanted_sample_rate"
QT_MOC_LITERAL(178, 2218, 12), // "AudioParams*"
QT_MOC_LITERAL(179, 2231, 15), // "audio_hw_params"
QT_MOC_LITERAL(180, 2247, 21), // "stream_component_open"
QT_MOC_LITERAL(181, 2269, 19), // "decode_interrupt_cb"
QT_MOC_LITERAL(182, 2289, 3), // "ctx"
QT_MOC_LITERAL(183, 2293, 25), // "stream_has_enough_packets"
QT_MOC_LITERAL(184, 2319, 9), // "AVStream*"
QT_MOC_LITERAL(185, 2329, 2), // "st"
QT_MOC_LITERAL(186, 2332, 9), // "stream_id"
QT_MOC_LITERAL(187, 2342, 11), // "is_realtime"
QT_MOC_LITERAL(188, 2354, 16), // "AVFormatContext*"
QT_MOC_LITERAL(189, 2371, 11), // "read_thread"
QT_MOC_LITERAL(190, 2383, 11), // "stream_open"
QT_MOC_LITERAL(191, 2395, 8), // "filename"
QT_MOC_LITERAL(192, 2404, 20), // "const AVInputFormat*"
QT_MOC_LITERAL(193, 2425, 7), // "iformat"
QT_MOC_LITERAL(194, 2433, 20), // "stream_cycle_channel"
QT_MOC_LITERAL(195, 2454, 10), // "codec_type"
QT_MOC_LITERAL(196, 2465, 18), // "toggle_full_screen"
QT_MOC_LITERAL(197, 2484, 20), // "toggle_audio_display"
QT_MOC_LITERAL(198, 2505, 23), // "refresh_loop_wait_event"
QT_MOC_LITERAL(199, 2529, 10), // "SDL_Event*"
QT_MOC_LITERAL(200, 2540, 5), // "event"
QT_MOC_LITERAL(201, 2546, 12), // "seek_chapter"
QT_MOC_LITERAL(202, 2559, 4), // "incr"
QT_MOC_LITERAL(203, 2564, 10), // "event_loop"
QT_MOC_LITERAL(204, 2575, 10), // "cur_stream"
QT_MOC_LITERAL(205, 2586, 9), // "opt_width"
QT_MOC_LITERAL(206, 2596, 6), // "optctx"
QT_MOC_LITERAL(207, 2603, 3), // "opt"
QT_MOC_LITERAL(208, 2607, 10), // "opt_height"
QT_MOC_LITERAL(209, 2618, 10), // "opt_format"
QT_MOC_LITERAL(210, 2629, 8), // "opt_sync"
QT_MOC_LITERAL(211, 2638, 8), // "opt_seek"
QT_MOC_LITERAL(212, 2647, 12), // "opt_duration"
QT_MOC_LITERAL(213, 2660, 13), // "opt_show_mode"
QT_MOC_LITERAL(214, 2674, 14), // "opt_input_file"
QT_MOC_LITERAL(215, 2689, 9), // "opt_codec"
QT_MOC_LITERAL(216, 2699, 4) // "init"

    },
    "MainWindow\0init_and_events\0\0"
    "on_action_exit_triggered\0"
    "on_action_open_f_triggered\0cmp_audio_fmts\0"
    "AVSampleFormat\0fmt1\0int64_t\0channel_count1\0"
    "fmt2\0channel_count2\0packet_queue_put_private\0"
    "PacketQueue*\0q\0AVPacket*\0pkt\0"
    "packet_queue_put\0packet_queue_put_nullpacket\0"
    "stream_index\0packet_queue_init\0"
    "packet_queue_flush\0packet_queue_destroy\0"
    "packet_queue_abort\0packet_queue_start\0"
    "packet_queue_get\0block\0int*\0serial\0"
    "decoder_init\0Decoder*\0d\0AVCodecContext*\0"
    "avctx\0queue\0SDL_cond*\0empty_queue_cond\0"
    "decoder_decode_frame\0AVFrame*\0frame\0"
    "AVSubtitle*\0sub\0decoder_destroy\0"
    "decoder_abort\0FrameQueue*\0fq\0"
    "frame_queue_unref_item\0Frame*\0vp\0"
    "frame_queue_init\0f\0pktq\0max_size\0"
    "keep_last\0frame_queue_destroy\0"
    "frame_queue_signal\0frame_queue_peek\0"
    "frame_queue_peek_next\0frame_queue_peek_last\0"
    "frame_queue_peek_writable\0"
    "frame_queue_peek_readable\0frame_queue_push\0"
    "frame_queue_next\0frame_queue_nb_remaining\0"
    "frame_queue_last_pos\0fill_rectangle\0"
    "x\0y\0w\0h\0realloc_texture\0SDL_Texture**\0"
    "texture\0Uint32\0new_format\0new_width\0"
    "new_height\0SDL_BlendMode\0blendmode\0"
    "init_texture\0calculate_display_rect\0"
    "SDL_Rect*\0rect\0scr_xleft\0scr_ytop\0"
    "scr_width\0scr_height\0pic_width\0"
    "pic_height\0AVRational\0pic_sar\0"
    "get_sdl_pix_fmt_and_blendmode\0format\0"
    "Uint32*\0sdl_pix_fmt\0SDL_BlendMode*\0"
    "sdl_blendmode\0upload_texture\0tex\0"
    "SwsContext**\0img_convert_ctx\0"
    "set_sdl_yuv_conversion_mode\0"
    "video_image_display\0VideoState*\0is\0"
    "video_audio_display\0s\0stream_component_close\0"
    "stream_close\0do_exit\0set_default_window_size\0"
    "width\0height\0sar\0video_open\0video_display\0"
    "get_clock\0Clock*\0c\0set_clock_at\0pts\0"
    "time\0set_clock\0set_clock_speed\0speed\0"
    "init_clock\0queue_serial\0sync_clock_to_slave\0"
    "slave\0get_master_clock\0"
    "check_external_clock_speed\0"
    "get_master_sync_type\0stream_seek\0pos\0"
    "rel\0by_bytes\0stream_toggle_pause\0"
    "toggle_pause\0toggle_mute\0update_volume\0"
    "sign\0step\0step_to_next_frame\0"
    "compute_target_delay\0delay\0vp_duration\0"
    "nextvp\0update_video_pts\0video_refresh\0"
    "opaque\0double*\0remaining_time\0"
    "queue_picture\0src_frame\0duration\0"
    "get_video_frame\0decoder_start\0const char*\0"
    "thread_name\0arg\0audio_thread\0video_thread\0"
    "subtitle_thread\0update_sample_display\0"
    "short*\0samples\0samples_size\0"
    "synchronize_audio\0nb_samples\0"
    "audio_decode_frame\0sdl_audio_callback\0"
    "Uint8*\0stream\0len\0audio_open\0"
    "AVChannelLayout*\0wanted_channel_layout\0"
    "wanted_sample_rate\0AudioParams*\0"
    "audio_hw_params\0stream_component_open\0"
    "decode_interrupt_cb\0ctx\0"
    "stream_has_enough_packets\0AVStream*\0"
    "st\0stream_id\0is_realtime\0AVFormatContext*\0"
    "read_thread\0stream_open\0filename\0"
    "const AVInputFormat*\0iformat\0"
    "stream_cycle_channel\0codec_type\0"
    "toggle_full_screen\0toggle_audio_display\0"
    "refresh_loop_wait_event\0SDL_Event*\0"
    "event\0seek_chapter\0incr\0event_loop\0"
    "cur_stream\0opt_width\0optctx\0opt\0"
    "opt_height\0opt_format\0opt_sync\0opt_seek\0"
    "opt_duration\0opt_show_mode\0opt_input_file\0"
    "opt_codec\0init"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      96,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  494,    2, 0x0a /* Public */,
       3,    0,  495,    2, 0x08 /* Private */,
       4,    0,  496,    2, 0x08 /* Private */,
       5,    4,  497,    2, 0x08 /* Private */,
      12,    2,  506,    2, 0x08 /* Private */,
      17,    2,  511,    2, 0x08 /* Private */,
      18,    3,  516,    2, 0x08 /* Private */,
      20,    1,  523,    2, 0x08 /* Private */,
      21,    1,  526,    2, 0x08 /* Private */,
      22,    1,  529,    2, 0x08 /* Private */,
      23,    1,  532,    2, 0x08 /* Private */,
      24,    1,  535,    2, 0x08 /* Private */,
      25,    4,  538,    2, 0x08 /* Private */,
      29,    4,  547,    2, 0x08 /* Private */,
      37,    3,  556,    2, 0x08 /* Private */,
      42,    1,  563,    2, 0x08 /* Private */,
      43,    2,  566,    2, 0x08 /* Private */,
      46,    1,  571,    2, 0x08 /* Private */,
      49,    4,  574,    2, 0x08 /* Private */,
      54,    1,  583,    2, 0x08 /* Private */,
      55,    1,  586,    2, 0x08 /* Private */,
      56,    1,  589,    2, 0x08 /* Private */,
      57,    1,  592,    2, 0x08 /* Private */,
      58,    1,  595,    2, 0x08 /* Private */,
      59,    1,  598,    2, 0x08 /* Private */,
      60,    1,  601,    2, 0x08 /* Private */,
      61,    1,  604,    2, 0x08 /* Private */,
      62,    1,  607,    2, 0x08 /* Private */,
      63,    1,  610,    2, 0x08 /* Private */,
      64,    1,  613,    2, 0x08 /* Private */,
      65,    4,  616,    2, 0x08 /* Private */,
      70,    6,  625,    2, 0x08 /* Private */,
      80,    8,  638,    2, 0x08 /* Private */,
      91,    3,  655,    2, 0x08 /* Private */,
      97,    3,  662,    2, 0x08 /* Private */,
     101,    1,  669,    2, 0x08 /* Private */,
     102,    1,  672,    2, 0x08 /* Private */,
     105,    1,  675,    2, 0x08 /* Private */,
     107,    2,  678,    2, 0x08 /* Private */,
     108,    1,  683,    2, 0x08 /* Private */,
     109,    1,  686,    2, 0x08 /* Private */,
     110,    3,  689,    2, 0x08 /* Private */,
     114,    1,  696,    2, 0x08 /* Private */,
     115,    1,  699,    2, 0x08 /* Private */,
     116,    1,  702,    2, 0x08 /* Private */,
     119,    4,  705,    2, 0x08 /* Private */,
     122,    3,  714,    2, 0x08 /* Private */,
     123,    2,  721,    2, 0x08 /* Private */,
     125,    2,  726,    2, 0x08 /* Private */,
     127,    2,  731,    2, 0x08 /* Private */,
     129,    1,  736,    2, 0x08 /* Private */,
     130,    1,  739,    2, 0x08 /* Private */,
     131,    1,  742,    2, 0x08 /* Private */,
     132,    4,  745,    2, 0x08 /* Private */,
     136,    1,  754,    2, 0x08 /* Private */,
     137,    1,  757,    2, 0x08 /* Private */,
     138,    1,  760,    2, 0x08 /* Private */,
     139,    3,  763,    2, 0x08 /* Private */,
     142,    1,  770,    2, 0x08 /* Private */,
     143,    2,  773,    2, 0x08 /* Private */,
     145,    3,  778,    2, 0x08 /* Private */,
     147,    4,  785,    2, 0x08 /* Private */,
     148,    2,  794,    2, 0x08 /* Private */,
     152,    6,  799,    2, 0x08 /* Private */,
     155,    2,  812,    2, 0x08 /* Private */,
     156,    4,  817,    2, 0x08 /* Private */,
     160,    1,  826,    2, 0x08 /* Private */,
     161,    1,  829,    2, 0x08 /* Private */,
     162,    1,  832,    2, 0x08 /* Private */,
     163,    3,  835,    2, 0x08 /* Private */,
     167,    2,  842,    2, 0x08 /* Private */,
     169,    1,  847,    2, 0x08 /* Private */,
     170,    3,  850,    2, 0x08 /* Private */,
     174,    4,  857,    2, 0x08 /* Private */,
     180,    2,  866,    2, 0x08 /* Private */,
     181,    1,  871,    2, 0x08 /* Private */,
     183,    3,  874,    2, 0x08 /* Private */,
     187,    1,  881,    2, 0x08 /* Private */,
     189,    1,  884,    2, 0x08 /* Private */,
     190,    2,  887,    2, 0x08 /* Private */,
     194,    2,  892,    2, 0x08 /* Private */,
     196,    1,  897,    2, 0x08 /* Private */,
     197,    1,  900,    2, 0x08 /* Private */,
     198,    2,  903,    2, 0x08 /* Private */,
     201,    2,  908,    2, 0x08 /* Private */,
     203,    1,  913,    2, 0x08 /* Private */,
     205,    3,  916,    2, 0x08 /* Private */,
     208,    3,  923,    2, 0x08 /* Private */,
     209,    3,  930,    2, 0x08 /* Private */,
     210,    3,  937,    2, 0x08 /* Private */,
     211,    3,  944,    2, 0x08 /* Private */,
     212,    3,  951,    2, 0x08 /* Private */,
     213,    3,  958,    2, 0x08 /* Private */,
     214,    2,  965,    2, 0x08 /* Private */,
     215,    3,  970,    2, 0x08 /* Private */,
     216,    0,  977,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int, 0x80000000 | 6, 0x80000000 | 8, 0x80000000 | 6, 0x80000000 | 8,    7,    9,   10,   11,
    QMetaType::Int, 0x80000000 | 13, 0x80000000 | 15,   14,   16,
    QMetaType::Int, 0x80000000 | 13, 0x80000000 | 15,   14,   16,
    QMetaType::Int, 0x80000000 | 13, 0x80000000 | 15, QMetaType::Int,   14,   16,   19,
    QMetaType::Int, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Int, 0x80000000 | 13, 0x80000000 | 15, QMetaType::Int, 0x80000000 | 27,   14,   16,   26,   28,
    QMetaType::Int, 0x80000000 | 30, 0x80000000 | 32, 0x80000000 | 13, 0x80000000 | 35,   31,   33,   34,   36,
    QMetaType::Int, 0x80000000 | 30, 0x80000000 | 38, 0x80000000 | 40,   31,   39,   41,
    QMetaType::Void, 0x80000000 | 30,   31,
    QMetaType::Void, 0x80000000 | 30, 0x80000000 | 44,   31,   45,
    QMetaType::Void, 0x80000000 | 47,   48,
    QMetaType::Int, 0x80000000 | 44, 0x80000000 | 13, QMetaType::Int, QMetaType::Int,   50,   51,   52,   53,
    QMetaType::Void, 0x80000000 | 44,   50,
    QMetaType::Void, 0x80000000 | 44,   50,
    0x80000000 | 47, 0x80000000 | 44,   50,
    0x80000000 | 47, 0x80000000 | 44,   50,
    0x80000000 | 47, 0x80000000 | 44,   50,
    0x80000000 | 47, 0x80000000 | 44,   50,
    0x80000000 | 47, 0x80000000 | 44,   50,
    QMetaType::Void, 0x80000000 | 44,   50,
    QMetaType::Void, 0x80000000 | 44,   50,
    QMetaType::Int, 0x80000000 | 44,   50,
    0x80000000 | 8, 0x80000000 | 44,   50,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   66,   67,   68,   69,
    QMetaType::Int, 0x80000000 | 71, 0x80000000 | 73, QMetaType::Int, QMetaType::Int, 0x80000000 | 77, QMetaType::Int,   72,   74,   75,   76,   78,   79,
    QMetaType::Void, 0x80000000 | 81, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, 0x80000000 | 89,   82,   83,   84,   85,   86,   87,   88,   90,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 93, 0x80000000 | 95,   92,   94,   96,
    QMetaType::Int, 0x80000000 | 71, 0x80000000 | 38, 0x80000000 | 99,   98,   39,  100,
    QMetaType::Void, 0x80000000 | 38,   39,
    QMetaType::Void, 0x80000000 | 103,  104,
    QMetaType::Void, 0x80000000 | 103,  106,
    QMetaType::Void, 0x80000000 | 103, QMetaType::Int,  104,   19,
    QMetaType::Void, 0x80000000 | 103,  104,
    QMetaType::Void, 0x80000000 | 103,  104,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 89,  111,  112,  113,
    QMetaType::Int, 0x80000000 | 103,  104,
    QMetaType::Void, 0x80000000 | 103,  104,
    QMetaType::Double, 0x80000000 | 117,  118,
    QMetaType::Void, 0x80000000 | 117, QMetaType::Double, QMetaType::Int, QMetaType::Double,  118,  120,   28,  121,
    QMetaType::Void, 0x80000000 | 117, QMetaType::Double, QMetaType::Int,  118,  120,   28,
    QMetaType::Void, 0x80000000 | 117, QMetaType::Double,  118,  124,
    QMetaType::Void, 0x80000000 | 117, 0x80000000 | 27,  118,  126,
    QMetaType::Void, 0x80000000 | 117, 0x80000000 | 117,  118,  128,
    QMetaType::Double, 0x80000000 | 103,  104,
    QMetaType::Void, 0x80000000 | 103,  104,
    QMetaType::Int, 0x80000000 | 103,  104,
    QMetaType::Void, 0x80000000 | 103, 0x80000000 | 8, 0x80000000 | 8, QMetaType::Int,  104,  133,  134,  135,
    QMetaType::Void, 0x80000000 | 103,  104,
    QMetaType::Void, 0x80000000 | 103,  104,
    QMetaType::Void, 0x80000000 | 103,  104,
    QMetaType::Void, 0x80000000 | 103, QMetaType::Int, QMetaType::Double,  104,  140,  141,
    QMetaType::Void, 0x80000000 | 103,  104,
    QMetaType::Double, QMetaType::Double, 0x80000000 | 103,  144,  104,
    QMetaType::Double, 0x80000000 | 103, 0x80000000 | 47, 0x80000000 | 47,  104,   48,  146,
    QMetaType::Void, 0x80000000 | 103, QMetaType::Double, 0x80000000 | 8, QMetaType::Int,  104,  120,  133,   28,
    QMetaType::Void, QMetaType::VoidStar, 0x80000000 | 150,  149,  151,
    QMetaType::Int, 0x80000000 | 103, 0x80000000 | 38, QMetaType::Double, QMetaType::Double, 0x80000000 | 8, QMetaType::Int,  104,  153,  120,  154,  133,   28,
    QMetaType::Int, 0x80000000 | 103, 0x80000000 | 38,  104,   39,
    QMetaType::Int, 0x80000000 | 30, QMetaType::Int, 0x80000000 | 157, QMetaType::VoidStar,   31,    2,  158,  159,
    QMetaType::Int, QMetaType::VoidStar,  159,
    QMetaType::Int, QMetaType::VoidStar,  159,
    QMetaType::Int, QMetaType::VoidStar,  159,
    QMetaType::Void, 0x80000000 | 103, 0x80000000 | 164, QMetaType::Int,  104,  165,  166,
    QMetaType::Int, 0x80000000 | 103, QMetaType::Int,  104,  168,
    QMetaType::Int, 0x80000000 | 103,  104,
    QMetaType::Void, QMetaType::VoidStar, 0x80000000 | 171, QMetaType::Int,  149,  172,  173,
    QMetaType::Int, QMetaType::VoidStar, 0x80000000 | 175, QMetaType::Int, 0x80000000 | 178,  149,  176,  177,  179,
    QMetaType::Int, 0x80000000 | 103, QMetaType::Int,  104,   19,
    QMetaType::Int, QMetaType::VoidStar,  182,
    QMetaType::Int, 0x80000000 | 184, QMetaType::Int, 0x80000000 | 13,  185,  186,   34,
    QMetaType::Int, 0x80000000 | 188,  106,
    QMetaType::Int, QMetaType::VoidStar,  159,
    0x80000000 | 103, 0x80000000 | 157, 0x80000000 | 192,  191,  193,
    QMetaType::Void, 0x80000000 | 103, QMetaType::Int,  104,  195,
    QMetaType::Void, 0x80000000 | 103,  104,
    QMetaType::Void, 0x80000000 | 103,  104,
    QMetaType::Void, 0x80000000 | 103, 0x80000000 | 199,  104,  200,
    QMetaType::Void, 0x80000000 | 103, QMetaType::Int,  104,  202,
    QMetaType::Void, 0x80000000 | 103,  204,
    QMetaType::Int, QMetaType::VoidStar, 0x80000000 | 157, 0x80000000 | 157,  206,  207,  159,
    QMetaType::Int, QMetaType::VoidStar, 0x80000000 | 157, 0x80000000 | 157,  206,  207,  159,
    QMetaType::Int, QMetaType::VoidStar, 0x80000000 | 157, 0x80000000 | 157,  206,  207,  159,
    QMetaType::Int, QMetaType::VoidStar, 0x80000000 | 157, 0x80000000 | 157,  206,  207,  159,
    QMetaType::Int, QMetaType::VoidStar, 0x80000000 | 157, 0x80000000 | 157,  206,  207,  159,
    QMetaType::Int, QMetaType::VoidStar, 0x80000000 | 157, 0x80000000 | 157,  206,  207,  159,
    QMetaType::Int, QMetaType::VoidStar, 0x80000000 | 157, 0x80000000 | 157,  206,  207,  159,
    QMetaType::Void, QMetaType::VoidStar, 0x80000000 | 157,  206,  191,
    QMetaType::Int, QMetaType::VoidStar, 0x80000000 | 157, 0x80000000 | 157,  206,  207,  159,
    QMetaType::Int,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->init_and_events(); break;
        case 1: _t->on_action_exit_triggered(); break;
        case 2: _t->on_action_open_f_triggered(); break;
        case 3: { int _r = _t->cmp_audio_fmts((*reinterpret_cast< AVSampleFormat(*)>(_a[1])),(*reinterpret_cast< int64_t(*)>(_a[2])),(*reinterpret_cast< AVSampleFormat(*)>(_a[3])),(*reinterpret_cast< int64_t(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 4: { int _r = _t->packet_queue_put_private((*reinterpret_cast< PacketQueue*(*)>(_a[1])),(*reinterpret_cast< AVPacket*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 5: { int _r = _t->packet_queue_put((*reinterpret_cast< PacketQueue*(*)>(_a[1])),(*reinterpret_cast< AVPacket*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 6: { int _r = _t->packet_queue_put_nullpacket((*reinterpret_cast< PacketQueue*(*)>(_a[1])),(*reinterpret_cast< AVPacket*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 7: { int _r = _t->packet_queue_init((*reinterpret_cast< PacketQueue*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->packet_queue_flush((*reinterpret_cast< PacketQueue*(*)>(_a[1]))); break;
        case 9: _t->packet_queue_destroy((*reinterpret_cast< PacketQueue*(*)>(_a[1]))); break;
        case 10: _t->packet_queue_abort((*reinterpret_cast< PacketQueue*(*)>(_a[1]))); break;
        case 11: _t->packet_queue_start((*reinterpret_cast< PacketQueue*(*)>(_a[1]))); break;
        case 12: { int _r = _t->packet_queue_get((*reinterpret_cast< PacketQueue*(*)>(_a[1])),(*reinterpret_cast< AVPacket*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 13: { int _r = _t->decoder_init((*reinterpret_cast< Decoder*(*)>(_a[1])),(*reinterpret_cast< AVCodecContext*(*)>(_a[2])),(*reinterpret_cast< PacketQueue*(*)>(_a[3])),(*reinterpret_cast< SDL_cond*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 14: { int _r = _t->decoder_decode_frame((*reinterpret_cast< Decoder*(*)>(_a[1])),(*reinterpret_cast< AVFrame*(*)>(_a[2])),(*reinterpret_cast< AVSubtitle*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 15: _t->decoder_destroy((*reinterpret_cast< Decoder*(*)>(_a[1]))); break;
        case 16: _t->decoder_abort((*reinterpret_cast< Decoder*(*)>(_a[1])),(*reinterpret_cast< FrameQueue*(*)>(_a[2]))); break;
        case 17: _t->frame_queue_unref_item((*reinterpret_cast< Frame*(*)>(_a[1]))); break;
        case 18: { int _r = _t->frame_queue_init((*reinterpret_cast< FrameQueue*(*)>(_a[1])),(*reinterpret_cast< PacketQueue*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 19: _t->frame_queue_destroy((*reinterpret_cast< FrameQueue*(*)>(_a[1]))); break;
        case 20: _t->frame_queue_signal((*reinterpret_cast< FrameQueue*(*)>(_a[1]))); break;
        case 21: { Frame* _r = _t->frame_queue_peek((*reinterpret_cast< FrameQueue*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Frame**>(_a[0]) = std::move(_r); }  break;
        case 22: { Frame* _r = _t->frame_queue_peek_next((*reinterpret_cast< FrameQueue*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Frame**>(_a[0]) = std::move(_r); }  break;
        case 23: { Frame* _r = _t->frame_queue_peek_last((*reinterpret_cast< FrameQueue*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Frame**>(_a[0]) = std::move(_r); }  break;
        case 24: { Frame* _r = _t->frame_queue_peek_writable((*reinterpret_cast< FrameQueue*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Frame**>(_a[0]) = std::move(_r); }  break;
        case 25: { Frame* _r = _t->frame_queue_peek_readable((*reinterpret_cast< FrameQueue*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Frame**>(_a[0]) = std::move(_r); }  break;
        case 26: _t->frame_queue_push((*reinterpret_cast< FrameQueue*(*)>(_a[1]))); break;
        case 27: _t->frame_queue_next((*reinterpret_cast< FrameQueue*(*)>(_a[1]))); break;
        case 28: { int _r = _t->frame_queue_nb_remaining((*reinterpret_cast< FrameQueue*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 29: { int64_t _r = _t->frame_queue_last_pos((*reinterpret_cast< FrameQueue*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int64_t*>(_a[0]) = std::move(_r); }  break;
        case 30: _t->fill_rectangle((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 31: { int _r = _t->realloc_texture((*reinterpret_cast< SDL_Texture**(*)>(_a[1])),(*reinterpret_cast< Uint32(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< SDL_BlendMode(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 32: _t->calculate_display_rect((*reinterpret_cast< SDL_Rect*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7])),(*reinterpret_cast< AVRational(*)>(_a[8]))); break;
        case 33: _t->get_sdl_pix_fmt_and_blendmode((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Uint32*(*)>(_a[2])),(*reinterpret_cast< SDL_BlendMode*(*)>(_a[3]))); break;
        case 34: { int _r = _t->upload_texture((*reinterpret_cast< SDL_Texture**(*)>(_a[1])),(*reinterpret_cast< AVFrame*(*)>(_a[2])),(*reinterpret_cast< SwsContext**(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 35: _t->set_sdl_yuv_conversion_mode((*reinterpret_cast< AVFrame*(*)>(_a[1]))); break;
        case 36: _t->video_image_display((*reinterpret_cast< VideoState*(*)>(_a[1]))); break;
        case 37: _t->video_audio_display((*reinterpret_cast< VideoState*(*)>(_a[1]))); break;
        case 38: _t->stream_component_close((*reinterpret_cast< VideoState*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 39: _t->stream_close((*reinterpret_cast< VideoState*(*)>(_a[1]))); break;
        case 40: _t->do_exit((*reinterpret_cast< VideoState*(*)>(_a[1]))); break;
        case 41: _t->set_default_window_size((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< AVRational(*)>(_a[3]))); break;
        case 42: { int _r = _t->video_open((*reinterpret_cast< VideoState*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 43: _t->video_display((*reinterpret_cast< VideoState*(*)>(_a[1]))); break;
        case 44: { double _r = _t->get_clock((*reinterpret_cast< Clock*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 45: _t->set_clock_at((*reinterpret_cast< Clock*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 46: _t->set_clock((*reinterpret_cast< Clock*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 47: _t->set_clock_speed((*reinterpret_cast< Clock*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 48: _t->init_clock((*reinterpret_cast< Clock*(*)>(_a[1])),(*reinterpret_cast< int*(*)>(_a[2]))); break;
        case 49: _t->sync_clock_to_slave((*reinterpret_cast< Clock*(*)>(_a[1])),(*reinterpret_cast< Clock*(*)>(_a[2]))); break;
        case 50: { double _r = _t->get_master_clock((*reinterpret_cast< VideoState*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 51: _t->check_external_clock_speed((*reinterpret_cast< VideoState*(*)>(_a[1]))); break;
        case 52: { int _r = _t->get_master_sync_type((*reinterpret_cast< VideoState*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 53: _t->stream_seek((*reinterpret_cast< VideoState*(*)>(_a[1])),(*reinterpret_cast< int64_t(*)>(_a[2])),(*reinterpret_cast< int64_t(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 54: _t->stream_toggle_pause((*reinterpret_cast< VideoState*(*)>(_a[1]))); break;
        case 55: _t->toggle_pause((*reinterpret_cast< VideoState*(*)>(_a[1]))); break;
        case 56: _t->toggle_mute((*reinterpret_cast< VideoState*(*)>(_a[1]))); break;
        case 57: _t->update_volume((*reinterpret_cast< VideoState*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 58: _t->step_to_next_frame((*reinterpret_cast< VideoState*(*)>(_a[1]))); break;
        case 59: { double _r = _t->compute_target_delay((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< VideoState*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 60: { double _r = _t->vp_duration((*reinterpret_cast< VideoState*(*)>(_a[1])),(*reinterpret_cast< Frame*(*)>(_a[2])),(*reinterpret_cast< Frame*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 61: _t->update_video_pts((*reinterpret_cast< VideoState*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< int64_t(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 62: _t->video_refresh((*reinterpret_cast< void*(*)>(_a[1])),(*reinterpret_cast< double*(*)>(_a[2]))); break;
        case 63: { int _r = _t->queue_picture((*reinterpret_cast< VideoState*(*)>(_a[1])),(*reinterpret_cast< AVFrame*(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int64_t(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 64: { int _r = _t->get_video_frame((*reinterpret_cast< VideoState*(*)>(_a[1])),(*reinterpret_cast< AVFrame*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 65: { int _r = _t->decoder_start((*reinterpret_cast< Decoder*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 66: { int _r = _t->audio_thread((*reinterpret_cast< void*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 67: { int _r = _t->video_thread((*reinterpret_cast< void*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 68: { int _r = _t->subtitle_thread((*reinterpret_cast< void*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 69: _t->update_sample_display((*reinterpret_cast< VideoState*(*)>(_a[1])),(*reinterpret_cast< short*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 70: { int _r = _t->synchronize_audio((*reinterpret_cast< VideoState*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 71: { int _r = _t->audio_decode_frame((*reinterpret_cast< VideoState*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 72: _t->sdl_audio_callback((*reinterpret_cast< void*(*)>(_a[1])),(*reinterpret_cast< Uint8*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 73: { int _r = _t->audio_open((*reinterpret_cast< void*(*)>(_a[1])),(*reinterpret_cast< AVChannelLayout*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< AudioParams*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 74: { int _r = _t->stream_component_open((*reinterpret_cast< VideoState*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 75: { int _r = _t->decode_interrupt_cb((*reinterpret_cast< void*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 76: { int _r = _t->stream_has_enough_packets((*reinterpret_cast< AVStream*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< PacketQueue*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 77: { int _r = _t->is_realtime((*reinterpret_cast< AVFormatContext*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 78: { int _r = _t->read_thread((*reinterpret_cast< void*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 79: { VideoState* _r = _t->stream_open((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< const AVInputFormat*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< VideoState**>(_a[0]) = std::move(_r); }  break;
        case 80: _t->stream_cycle_channel((*reinterpret_cast< VideoState*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 81: _t->toggle_full_screen((*reinterpret_cast< VideoState*(*)>(_a[1]))); break;
        case 82: _t->toggle_audio_display((*reinterpret_cast< VideoState*(*)>(_a[1]))); break;
        case 83: _t->refresh_loop_wait_event((*reinterpret_cast< VideoState*(*)>(_a[1])),(*reinterpret_cast< SDL_Event*(*)>(_a[2]))); break;
        case 84: _t->seek_chapter((*reinterpret_cast< VideoState*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 85: _t->event_loop((*reinterpret_cast< VideoState*(*)>(_a[1]))); break;
        case 86: { int _r = _t->opt_width((*reinterpret_cast< void*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 87: { int _r = _t->opt_height((*reinterpret_cast< void*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 88: { int _r = _t->opt_format((*reinterpret_cast< void*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 89: { int _r = _t->opt_sync((*reinterpret_cast< void*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 90: { int _r = _t->opt_seek((*reinterpret_cast< void*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 91: { int _r = _t->opt_duration((*reinterpret_cast< void*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 92: { int _r = _t->opt_show_mode((*reinterpret_cast< void*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 93: _t->opt_input_file((*reinterpret_cast< void*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2]))); break;
        case 94: { int _r = _t->opt_codec((*reinterpret_cast< void*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 95: { int _r = _t->init();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 96)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 96;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 96)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 96;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
