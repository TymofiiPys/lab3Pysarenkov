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
    QByteArrayData data[224];
    char stringdata0[2786];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 11), // "SendMessage"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 4), // "type"
QT_MOC_LITERAL(4, 29, 7), // "message"
QT_MOC_LITERAL(5, 37, 15), // "init_and_events"
QT_MOC_LITERAL(6, 53, 11), // "ShowMessage"
QT_MOC_LITERAL(7, 65, 24), // "on_action_exit_triggered"
QT_MOC_LITERAL(8, 90, 26), // "on_action_open_f_triggered"
QT_MOC_LITERAL(9, 117, 14), // "cmp_audio_fmts"
QT_MOC_LITERAL(10, 132, 14), // "AVSampleFormat"
QT_MOC_LITERAL(11, 147, 4), // "fmt1"
QT_MOC_LITERAL(12, 152, 7), // "int64_t"
QT_MOC_LITERAL(13, 160, 14), // "channel_count1"
QT_MOC_LITERAL(14, 175, 4), // "fmt2"
QT_MOC_LITERAL(15, 180, 14), // "channel_count2"
QT_MOC_LITERAL(16, 195, 24), // "get_valid_channel_layout"
QT_MOC_LITERAL(17, 220, 14), // "channel_layout"
QT_MOC_LITERAL(18, 235, 8), // "channels"
QT_MOC_LITERAL(19, 244, 24), // "packet_queue_put_private"
QT_MOC_LITERAL(20, 269, 12), // "PacketQueue*"
QT_MOC_LITERAL(21, 282, 1), // "q"
QT_MOC_LITERAL(22, 284, 9), // "AVPacket*"
QT_MOC_LITERAL(23, 294, 3), // "pkt"
QT_MOC_LITERAL(24, 298, 16), // "packet_queue_put"
QT_MOC_LITERAL(25, 315, 27), // "packet_queue_put_nullpacket"
QT_MOC_LITERAL(26, 343, 12), // "stream_index"
QT_MOC_LITERAL(27, 356, 17), // "packet_queue_init"
QT_MOC_LITERAL(28, 374, 18), // "packet_queue_flush"
QT_MOC_LITERAL(29, 393, 20), // "packet_queue_destroy"
QT_MOC_LITERAL(30, 414, 18), // "packet_queue_abort"
QT_MOC_LITERAL(31, 433, 18), // "packet_queue_start"
QT_MOC_LITERAL(32, 452, 16), // "packet_queue_get"
QT_MOC_LITERAL(33, 469, 5), // "block"
QT_MOC_LITERAL(34, 475, 4), // "int*"
QT_MOC_LITERAL(35, 480, 6), // "serial"
QT_MOC_LITERAL(36, 487, 12), // "decoder_init"
QT_MOC_LITERAL(37, 500, 8), // "Decoder*"
QT_MOC_LITERAL(38, 509, 1), // "d"
QT_MOC_LITERAL(39, 511, 15), // "AVCodecContext*"
QT_MOC_LITERAL(40, 527, 5), // "avctx"
QT_MOC_LITERAL(41, 533, 5), // "queue"
QT_MOC_LITERAL(42, 539, 9), // "SDL_cond*"
QT_MOC_LITERAL(43, 549, 16), // "empty_queue_cond"
QT_MOC_LITERAL(44, 566, 20), // "decoder_decode_frame"
QT_MOC_LITERAL(45, 587, 8), // "AVFrame*"
QT_MOC_LITERAL(46, 596, 5), // "frame"
QT_MOC_LITERAL(47, 602, 11), // "AVSubtitle*"
QT_MOC_LITERAL(48, 614, 3), // "sub"
QT_MOC_LITERAL(49, 618, 15), // "decoder_destroy"
QT_MOC_LITERAL(50, 634, 13), // "decoder_abort"
QT_MOC_LITERAL(51, 648, 11), // "FrameQueue*"
QT_MOC_LITERAL(52, 660, 2), // "fq"
QT_MOC_LITERAL(53, 663, 22), // "frame_queue_unref_item"
QT_MOC_LITERAL(54, 686, 6), // "Frame*"
QT_MOC_LITERAL(55, 693, 2), // "vp"
QT_MOC_LITERAL(56, 696, 16), // "frame_queue_init"
QT_MOC_LITERAL(57, 713, 1), // "f"
QT_MOC_LITERAL(58, 715, 4), // "pktq"
QT_MOC_LITERAL(59, 720, 8), // "max_size"
QT_MOC_LITERAL(60, 729, 9), // "keep_last"
QT_MOC_LITERAL(61, 739, 19), // "frame_queue_destroy"
QT_MOC_LITERAL(62, 759, 18), // "frame_queue_signal"
QT_MOC_LITERAL(63, 778, 16), // "frame_queue_peek"
QT_MOC_LITERAL(64, 795, 21), // "frame_queue_peek_next"
QT_MOC_LITERAL(65, 817, 21), // "frame_queue_peek_last"
QT_MOC_LITERAL(66, 839, 25), // "frame_queue_peek_writable"
QT_MOC_LITERAL(67, 865, 25), // "frame_queue_peek_readable"
QT_MOC_LITERAL(68, 891, 16), // "frame_queue_push"
QT_MOC_LITERAL(69, 908, 16), // "frame_queue_next"
QT_MOC_LITERAL(70, 925, 24), // "frame_queue_nb_remaining"
QT_MOC_LITERAL(71, 950, 20), // "frame_queue_last_pos"
QT_MOC_LITERAL(72, 971, 14), // "fill_rectangle"
QT_MOC_LITERAL(73, 986, 1), // "x"
QT_MOC_LITERAL(74, 988, 1), // "y"
QT_MOC_LITERAL(75, 990, 1), // "w"
QT_MOC_LITERAL(76, 992, 1), // "h"
QT_MOC_LITERAL(77, 994, 15), // "realloc_texture"
QT_MOC_LITERAL(78, 1010, 13), // "SDL_Texture**"
QT_MOC_LITERAL(79, 1024, 7), // "texture"
QT_MOC_LITERAL(80, 1032, 6), // "Uint32"
QT_MOC_LITERAL(81, 1039, 10), // "new_format"
QT_MOC_LITERAL(82, 1050, 9), // "new_width"
QT_MOC_LITERAL(83, 1060, 10), // "new_height"
QT_MOC_LITERAL(84, 1071, 13), // "SDL_BlendMode"
QT_MOC_LITERAL(85, 1085, 9), // "blendmode"
QT_MOC_LITERAL(86, 1095, 12), // "init_texture"
QT_MOC_LITERAL(87, 1108, 22), // "calculate_display_rect"
QT_MOC_LITERAL(88, 1131, 9), // "SDL_Rect*"
QT_MOC_LITERAL(89, 1141, 4), // "rect"
QT_MOC_LITERAL(90, 1146, 9), // "scr_xleft"
QT_MOC_LITERAL(91, 1156, 8), // "scr_ytop"
QT_MOC_LITERAL(92, 1165, 9), // "scr_width"
QT_MOC_LITERAL(93, 1175, 10), // "scr_height"
QT_MOC_LITERAL(94, 1186, 9), // "pic_width"
QT_MOC_LITERAL(95, 1196, 10), // "pic_height"
QT_MOC_LITERAL(96, 1207, 10), // "AVRational"
QT_MOC_LITERAL(97, 1218, 7), // "pic_sar"
QT_MOC_LITERAL(98, 1226, 29), // "get_sdl_pix_fmt_and_blendmode"
QT_MOC_LITERAL(99, 1256, 6), // "format"
QT_MOC_LITERAL(100, 1263, 7), // "Uint32*"
QT_MOC_LITERAL(101, 1271, 11), // "sdl_pix_fmt"
QT_MOC_LITERAL(102, 1283, 14), // "SDL_BlendMode*"
QT_MOC_LITERAL(103, 1298, 13), // "sdl_blendmode"
QT_MOC_LITERAL(104, 1312, 14), // "upload_texture"
QT_MOC_LITERAL(105, 1327, 3), // "tex"
QT_MOC_LITERAL(106, 1331, 12), // "SwsContext**"
QT_MOC_LITERAL(107, 1344, 15), // "img_convert_ctx"
QT_MOC_LITERAL(108, 1360, 27), // "set_sdl_yuv_conversion_mode"
QT_MOC_LITERAL(109, 1388, 19), // "video_image_display"
QT_MOC_LITERAL(110, 1408, 11), // "VideoState*"
QT_MOC_LITERAL(111, 1420, 2), // "is"
QT_MOC_LITERAL(112, 1423, 19), // "video_audio_display"
QT_MOC_LITERAL(113, 1443, 1), // "s"
QT_MOC_LITERAL(114, 1445, 22), // "stream_component_close"
QT_MOC_LITERAL(115, 1468, 12), // "stream_close"
QT_MOC_LITERAL(116, 1481, 7), // "do_exit"
QT_MOC_LITERAL(117, 1489, 23), // "set_default_window_size"
QT_MOC_LITERAL(118, 1513, 5), // "width"
QT_MOC_LITERAL(119, 1519, 6), // "height"
QT_MOC_LITERAL(120, 1526, 3), // "sar"
QT_MOC_LITERAL(121, 1530, 10), // "video_open"
QT_MOC_LITERAL(122, 1541, 13), // "video_display"
QT_MOC_LITERAL(123, 1555, 9), // "get_clock"
QT_MOC_LITERAL(124, 1565, 6), // "Clock*"
QT_MOC_LITERAL(125, 1572, 1), // "c"
QT_MOC_LITERAL(126, 1574, 12), // "set_clock_at"
QT_MOC_LITERAL(127, 1587, 3), // "pts"
QT_MOC_LITERAL(128, 1591, 4), // "time"
QT_MOC_LITERAL(129, 1596, 9), // "set_clock"
QT_MOC_LITERAL(130, 1606, 15), // "set_clock_speed"
QT_MOC_LITERAL(131, 1622, 5), // "speed"
QT_MOC_LITERAL(132, 1628, 10), // "init_clock"
QT_MOC_LITERAL(133, 1639, 12), // "queue_serial"
QT_MOC_LITERAL(134, 1652, 19), // "sync_clock_to_slave"
QT_MOC_LITERAL(135, 1672, 5), // "slave"
QT_MOC_LITERAL(136, 1678, 16), // "get_master_clock"
QT_MOC_LITERAL(137, 1695, 26), // "check_external_clock_speed"
QT_MOC_LITERAL(138, 1722, 20), // "get_master_sync_type"
QT_MOC_LITERAL(139, 1743, 11), // "stream_seek"
QT_MOC_LITERAL(140, 1755, 3), // "pos"
QT_MOC_LITERAL(141, 1759, 3), // "rel"
QT_MOC_LITERAL(142, 1763, 8), // "by_bytes"
QT_MOC_LITERAL(143, 1772, 19), // "stream_toggle_pause"
QT_MOC_LITERAL(144, 1792, 12), // "toggle_pause"
QT_MOC_LITERAL(145, 1805, 11), // "toggle_mute"
QT_MOC_LITERAL(146, 1817, 13), // "update_volume"
QT_MOC_LITERAL(147, 1831, 4), // "sign"
QT_MOC_LITERAL(148, 1836, 4), // "step"
QT_MOC_LITERAL(149, 1841, 18), // "step_to_next_frame"
QT_MOC_LITERAL(150, 1860, 20), // "compute_target_delay"
QT_MOC_LITERAL(151, 1881, 5), // "delay"
QT_MOC_LITERAL(152, 1887, 11), // "vp_duration"
QT_MOC_LITERAL(153, 1899, 6), // "nextvp"
QT_MOC_LITERAL(154, 1906, 16), // "update_video_pts"
QT_MOC_LITERAL(155, 1923, 13), // "video_refresh"
QT_MOC_LITERAL(156, 1937, 6), // "opaque"
QT_MOC_LITERAL(157, 1944, 7), // "double*"
QT_MOC_LITERAL(158, 1952, 14), // "remaining_time"
QT_MOC_LITERAL(159, 1967, 13), // "queue_picture"
QT_MOC_LITERAL(160, 1981, 9), // "src_frame"
QT_MOC_LITERAL(161, 1991, 8), // "duration"
QT_MOC_LITERAL(162, 2000, 15), // "get_video_frame"
QT_MOC_LITERAL(163, 2016, 13), // "decoder_start"
QT_MOC_LITERAL(164, 2030, 11), // "const char*"
QT_MOC_LITERAL(165, 2042, 11), // "thread_name"
QT_MOC_LITERAL(166, 2054, 3), // "arg"
QT_MOC_LITERAL(167, 2058, 12), // "audio_thread"
QT_MOC_LITERAL(168, 2071, 12), // "video_thread"
QT_MOC_LITERAL(169, 2084, 15), // "subtitle_thread"
QT_MOC_LITERAL(170, 2100, 21), // "update_sample_display"
QT_MOC_LITERAL(171, 2122, 6), // "short*"
QT_MOC_LITERAL(172, 2129, 7), // "samples"
QT_MOC_LITERAL(173, 2137, 12), // "samples_size"
QT_MOC_LITERAL(174, 2150, 17), // "synchronize_audio"
QT_MOC_LITERAL(175, 2168, 10), // "nb_samples"
QT_MOC_LITERAL(176, 2179, 18), // "audio_decode_frame"
QT_MOC_LITERAL(177, 2198, 18), // "sdl_audio_callback"
QT_MOC_LITERAL(178, 2217, 6), // "Uint8*"
QT_MOC_LITERAL(179, 2224, 6), // "stream"
QT_MOC_LITERAL(180, 2231, 3), // "len"
QT_MOC_LITERAL(181, 2235, 10), // "audio_open"
QT_MOC_LITERAL(182, 2246, 21), // "wanted_channel_layout"
QT_MOC_LITERAL(183, 2268, 18), // "wanted_nb_channels"
QT_MOC_LITERAL(184, 2287, 18), // "wanted_sample_rate"
QT_MOC_LITERAL(185, 2306, 12), // "AudioParams*"
QT_MOC_LITERAL(186, 2319, 15), // "audio_hw_params"
QT_MOC_LITERAL(187, 2335, 21), // "stream_component_open"
QT_MOC_LITERAL(188, 2357, 19), // "decode_interrupt_cb"
QT_MOC_LITERAL(189, 2377, 3), // "ctx"
QT_MOC_LITERAL(190, 2381, 25), // "stream_has_enough_packets"
QT_MOC_LITERAL(191, 2407, 9), // "AVStream*"
QT_MOC_LITERAL(192, 2417, 2), // "st"
QT_MOC_LITERAL(193, 2420, 9), // "stream_id"
QT_MOC_LITERAL(194, 2430, 11), // "is_realtime"
QT_MOC_LITERAL(195, 2442, 16), // "AVFormatContext*"
QT_MOC_LITERAL(196, 2459, 11), // "read_thread"
QT_MOC_LITERAL(197, 2471, 11), // "stream_open"
QT_MOC_LITERAL(198, 2483, 8), // "filename"
QT_MOC_LITERAL(199, 2492, 14), // "AVInputFormat*"
QT_MOC_LITERAL(200, 2507, 7), // "iformat"
QT_MOC_LITERAL(201, 2515, 20), // "stream_cycle_channel"
QT_MOC_LITERAL(202, 2536, 10), // "codec_type"
QT_MOC_LITERAL(203, 2547, 18), // "toggle_full_screen"
QT_MOC_LITERAL(204, 2566, 20), // "toggle_audio_display"
QT_MOC_LITERAL(205, 2587, 23), // "refresh_loop_wait_event"
QT_MOC_LITERAL(206, 2611, 10), // "SDL_Event*"
QT_MOC_LITERAL(207, 2622, 5), // "event"
QT_MOC_LITERAL(208, 2628, 12), // "seek_chapter"
QT_MOC_LITERAL(209, 2641, 4), // "incr"
QT_MOC_LITERAL(210, 2646, 10), // "event_loop"
QT_MOC_LITERAL(211, 2657, 10), // "cur_stream"
QT_MOC_LITERAL(212, 2668, 9), // "opt_width"
QT_MOC_LITERAL(213, 2678, 6), // "optctx"
QT_MOC_LITERAL(214, 2685, 3), // "opt"
QT_MOC_LITERAL(215, 2689, 10), // "opt_height"
QT_MOC_LITERAL(216, 2700, 10), // "opt_format"
QT_MOC_LITERAL(217, 2711, 8), // "opt_sync"
QT_MOC_LITERAL(218, 2720, 8), // "opt_seek"
QT_MOC_LITERAL(219, 2729, 12), // "opt_duration"
QT_MOC_LITERAL(220, 2742, 13), // "opt_show_mode"
QT_MOC_LITERAL(221, 2756, 14), // "opt_input_file"
QT_MOC_LITERAL(222, 2771, 9), // "opt_codec"
QT_MOC_LITERAL(223, 2781, 4) // "init"

    },
    "MainWindow\0SendMessage\0\0type\0message\0"
    "init_and_events\0ShowMessage\0"
    "on_action_exit_triggered\0"
    "on_action_open_f_triggered\0cmp_audio_fmts\0"
    "AVSampleFormat\0fmt1\0int64_t\0channel_count1\0"
    "fmt2\0channel_count2\0get_valid_channel_layout\0"
    "channel_layout\0channels\0"
    "packet_queue_put_private\0PacketQueue*\0"
    "q\0AVPacket*\0pkt\0packet_queue_put\0"
    "packet_queue_put_nullpacket\0stream_index\0"
    "packet_queue_init\0packet_queue_flush\0"
    "packet_queue_destroy\0packet_queue_abort\0"
    "packet_queue_start\0packet_queue_get\0"
    "block\0int*\0serial\0decoder_init\0Decoder*\0"
    "d\0AVCodecContext*\0avctx\0queue\0SDL_cond*\0"
    "empty_queue_cond\0decoder_decode_frame\0"
    "AVFrame*\0frame\0AVSubtitle*\0sub\0"
    "decoder_destroy\0decoder_abort\0FrameQueue*\0"
    "fq\0frame_queue_unref_item\0Frame*\0vp\0"
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
    "wanted_channel_layout\0wanted_nb_channels\0"
    "wanted_sample_rate\0AudioParams*\0"
    "audio_hw_params\0stream_component_open\0"
    "decode_interrupt_cb\0ctx\0"
    "stream_has_enough_packets\0AVStream*\0"
    "st\0stream_id\0is_realtime\0AVFormatContext*\0"
    "read_thread\0stream_open\0filename\0"
    "AVInputFormat*\0iformat\0stream_cycle_channel\0"
    "codec_type\0toggle_full_screen\0"
    "toggle_audio_display\0refresh_loop_wait_event\0"
    "SDL_Event*\0event\0seek_chapter\0incr\0"
    "event_loop\0cur_stream\0opt_width\0optctx\0"
    "opt\0opt_height\0opt_format\0opt_sync\0"
    "opt_seek\0opt_duration\0opt_show_mode\0"
    "opt_input_file\0opt_codec\0init"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      99,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  509,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,  514,    2, 0x0a /* Public */,
       6,    2,  515,    2, 0x0a /* Public */,
       7,    0,  520,    2, 0x08 /* Private */,
       8,    0,  521,    2, 0x08 /* Private */,
       9,    4,  522,    2, 0x08 /* Private */,
      16,    2,  531,    2, 0x08 /* Private */,
      19,    2,  536,    2, 0x08 /* Private */,
      24,    2,  541,    2, 0x08 /* Private */,
      25,    3,  546,    2, 0x08 /* Private */,
      27,    1,  553,    2, 0x08 /* Private */,
      28,    1,  556,    2, 0x08 /* Private */,
      29,    1,  559,    2, 0x08 /* Private */,
      30,    1,  562,    2, 0x08 /* Private */,
      31,    1,  565,    2, 0x08 /* Private */,
      32,    4,  568,    2, 0x08 /* Private */,
      36,    4,  577,    2, 0x08 /* Private */,
      44,    3,  586,    2, 0x08 /* Private */,
      49,    1,  593,    2, 0x08 /* Private */,
      50,    2,  596,    2, 0x08 /* Private */,
      53,    1,  601,    2, 0x08 /* Private */,
      56,    4,  604,    2, 0x08 /* Private */,
      61,    1,  613,    2, 0x08 /* Private */,
      62,    1,  616,    2, 0x08 /* Private */,
      63,    1,  619,    2, 0x08 /* Private */,
      64,    1,  622,    2, 0x08 /* Private */,
      65,    1,  625,    2, 0x08 /* Private */,
      66,    1,  628,    2, 0x08 /* Private */,
      67,    1,  631,    2, 0x08 /* Private */,
      68,    1,  634,    2, 0x08 /* Private */,
      69,    1,  637,    2, 0x08 /* Private */,
      70,    1,  640,    2, 0x08 /* Private */,
      71,    1,  643,    2, 0x08 /* Private */,
      72,    4,  646,    2, 0x08 /* Private */,
      77,    6,  655,    2, 0x08 /* Private */,
      87,    8,  668,    2, 0x08 /* Private */,
      98,    3,  685,    2, 0x08 /* Private */,
     104,    3,  692,    2, 0x08 /* Private */,
     108,    1,  699,    2, 0x08 /* Private */,
     109,    1,  702,    2, 0x08 /* Private */,
     112,    1,  705,    2, 0x08 /* Private */,
     114,    2,  708,    2, 0x08 /* Private */,
     115,    1,  713,    2, 0x08 /* Private */,
     116,    1,  716,    2, 0x08 /* Private */,
     117,    3,  719,    2, 0x08 /* Private */,
     121,    1,  726,    2, 0x08 /* Private */,
     122,    1,  729,    2, 0x08 /* Private */,
     123,    1,  732,    2, 0x08 /* Private */,
     126,    4,  735,    2, 0x08 /* Private */,
     129,    3,  744,    2, 0x08 /* Private */,
     130,    2,  751,    2, 0x08 /* Private */,
     132,    2,  756,    2, 0x08 /* Private */,
     134,    2,  761,    2, 0x08 /* Private */,
     136,    1,  766,    2, 0x08 /* Private */,
     137,    1,  769,    2, 0x08 /* Private */,
     138,    1,  772,    2, 0x08 /* Private */,
     139,    4,  775,    2, 0x08 /* Private */,
     143,    1,  784,    2, 0x08 /* Private */,
     144,    1,  787,    2, 0x08 /* Private */,
     145,    1,  790,    2, 0x08 /* Private */,
     146,    3,  793,    2, 0x08 /* Private */,
     149,    1,  800,    2, 0x08 /* Private */,
     150,    2,  803,    2, 0x08 /* Private */,
     152,    3,  808,    2, 0x08 /* Private */,
     154,    4,  815,    2, 0x08 /* Private */,
     155,    2,  824,    2, 0x08 /* Private */,
     159,    6,  829,    2, 0x08 /* Private */,
     162,    2,  842,    2, 0x08 /* Private */,
     163,    4,  847,    2, 0x08 /* Private */,
     167,    1,  856,    2, 0x08 /* Private */,
     168,    1,  859,    2, 0x08 /* Private */,
     169,    1,  862,    2, 0x08 /* Private */,
     170,    3,  865,    2, 0x08 /* Private */,
     174,    2,  872,    2, 0x08 /* Private */,
     176,    1,  877,    2, 0x08 /* Private */,
     177,    3,  880,    2, 0x08 /* Private */,
     181,    5,  887,    2, 0x08 /* Private */,
     187,    2,  898,    2, 0x08 /* Private */,
     188,    1,  903,    2, 0x08 /* Private */,
     190,    3,  906,    2, 0x08 /* Private */,
     194,    1,  913,    2, 0x08 /* Private */,
     196,    1,  916,    2, 0x08 /* Private */,
     197,    2,  919,    2, 0x08 /* Private */,
     201,    2,  924,    2, 0x08 /* Private */,
     203,    1,  929,    2, 0x08 /* Private */,
     204,    1,  932,    2, 0x08 /* Private */,
     205,    2,  935,    2, 0x08 /* Private */,
     208,    2,  940,    2, 0x08 /* Private */,
     210,    1,  945,    2, 0x08 /* Private */,
     212,    3,  948,    2, 0x08 /* Private */,
     215,    3,  955,    2, 0x08 /* Private */,
     216,    3,  962,    2, 0x08 /* Private */,
     217,    3,  969,    2, 0x08 /* Private */,
     218,    3,  976,    2, 0x08 /* Private */,
     219,    3,  983,    2, 0x08 /* Private */,
     220,    3,  990,    2, 0x08 /* Private */,
     221,    2,  997,    2, 0x08 /* Private */,
     222,    3, 1002,    2, 0x08 /* Private */,
     223,    0, 1009,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int, 0x80000000 | 10, 0x80000000 | 12, 0x80000000 | 10, 0x80000000 | 12,   11,   13,   14,   15,
    0x80000000 | 12, 0x80000000 | 12, QMetaType::Int,   17,   18,
    QMetaType::Int, 0x80000000 | 20, 0x80000000 | 22,   21,   23,
    QMetaType::Int, 0x80000000 | 20, 0x80000000 | 22,   21,   23,
    QMetaType::Int, 0x80000000 | 20, 0x80000000 | 22, QMetaType::Int,   21,   23,   26,
    QMetaType::Int, 0x80000000 | 20,   21,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Int, 0x80000000 | 20, 0x80000000 | 22, QMetaType::Int, 0x80000000 | 34,   21,   23,   33,   35,
    QMetaType::Int, 0x80000000 | 37, 0x80000000 | 39, 0x80000000 | 20, 0x80000000 | 42,   38,   40,   41,   43,
    QMetaType::Int, 0x80000000 | 37, 0x80000000 | 45, 0x80000000 | 47,   38,   46,   48,
    QMetaType::Void, 0x80000000 | 37,   38,
    QMetaType::Void, 0x80000000 | 37, 0x80000000 | 51,   38,   52,
    QMetaType::Void, 0x80000000 | 54,   55,
    QMetaType::Int, 0x80000000 | 51, 0x80000000 | 20, QMetaType::Int, QMetaType::Int,   57,   58,   59,   60,
    QMetaType::Void, 0x80000000 | 51,   57,
    QMetaType::Void, 0x80000000 | 51,   57,
    0x80000000 | 54, 0x80000000 | 51,   57,
    0x80000000 | 54, 0x80000000 | 51,   57,
    0x80000000 | 54, 0x80000000 | 51,   57,
    0x80000000 | 54, 0x80000000 | 51,   57,
    0x80000000 | 54, 0x80000000 | 51,   57,
    QMetaType::Void, 0x80000000 | 51,   57,
    QMetaType::Void, 0x80000000 | 51,   57,
    QMetaType::Int, 0x80000000 | 51,   57,
    0x80000000 | 12, 0x80000000 | 51,   57,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   73,   74,   75,   76,
    QMetaType::Int, 0x80000000 | 78, 0x80000000 | 80, QMetaType::Int, QMetaType::Int, 0x80000000 | 84, QMetaType::Int,   79,   81,   82,   83,   85,   86,
    QMetaType::Void, 0x80000000 | 88, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, 0x80000000 | 96,   89,   90,   91,   92,   93,   94,   95,   97,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 100, 0x80000000 | 102,   99,  101,  103,
    QMetaType::Int, 0x80000000 | 78, 0x80000000 | 45, 0x80000000 | 106,  105,   46,  107,
    QMetaType::Void, 0x80000000 | 45,   46,
    QMetaType::Void, 0x80000000 | 110,  111,
    QMetaType::Void, 0x80000000 | 110,  113,
    QMetaType::Void, 0x80000000 | 110, QMetaType::Int,  111,   26,
    QMetaType::Void, 0x80000000 | 110,  111,
    QMetaType::Void, 0x80000000 | 110,  111,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 96,  118,  119,  120,
    QMetaType::Int, 0x80000000 | 110,  111,
    QMetaType::Void, 0x80000000 | 110,  111,
    QMetaType::Double, 0x80000000 | 124,  125,
    QMetaType::Void, 0x80000000 | 124, QMetaType::Double, QMetaType::Int, QMetaType::Double,  125,  127,   35,  128,
    QMetaType::Void, 0x80000000 | 124, QMetaType::Double, QMetaType::Int,  125,  127,   35,
    QMetaType::Void, 0x80000000 | 124, QMetaType::Double,  125,  131,
    QMetaType::Void, 0x80000000 | 124, 0x80000000 | 34,  125,  133,
    QMetaType::Void, 0x80000000 | 124, 0x80000000 | 124,  125,  135,
    QMetaType::Double, 0x80000000 | 110,  111,
    QMetaType::Void, 0x80000000 | 110,  111,
    QMetaType::Int, 0x80000000 | 110,  111,
    QMetaType::Void, 0x80000000 | 110, 0x80000000 | 12, 0x80000000 | 12, QMetaType::Int,  111,  140,  141,  142,
    QMetaType::Void, 0x80000000 | 110,  111,
    QMetaType::Void, 0x80000000 | 110,  111,
    QMetaType::Void, 0x80000000 | 110,  111,
    QMetaType::Void, 0x80000000 | 110, QMetaType::Int, QMetaType::Double,  111,  147,  148,
    QMetaType::Void, 0x80000000 | 110,  111,
    QMetaType::Double, QMetaType::Double, 0x80000000 | 110,  151,  111,
    QMetaType::Double, 0x80000000 | 110, 0x80000000 | 54, 0x80000000 | 54,  111,   55,  153,
    QMetaType::Void, 0x80000000 | 110, QMetaType::Double, 0x80000000 | 12, QMetaType::Int,  111,  127,  140,   35,
    QMetaType::Void, QMetaType::VoidStar, 0x80000000 | 157,  156,  158,
    QMetaType::Int, 0x80000000 | 110, 0x80000000 | 45, QMetaType::Double, QMetaType::Double, 0x80000000 | 12, QMetaType::Int,  111,  160,  127,  161,  140,   35,
    QMetaType::Int, 0x80000000 | 110, 0x80000000 | 45,  111,   46,
    QMetaType::Int, 0x80000000 | 37, QMetaType::Int, 0x80000000 | 164, QMetaType::VoidStar,   38,    2,  165,  166,
    QMetaType::Int, QMetaType::VoidStar,  166,
    QMetaType::Int, QMetaType::VoidStar,  166,
    QMetaType::Int, QMetaType::VoidStar,  166,
    QMetaType::Void, 0x80000000 | 110, 0x80000000 | 171, QMetaType::Int,  111,  172,  173,
    QMetaType::Int, 0x80000000 | 110, QMetaType::Int,  111,  175,
    QMetaType::Int, 0x80000000 | 110,  111,
    QMetaType::Void, QMetaType::VoidStar, 0x80000000 | 178, QMetaType::Int,  156,  179,  180,
    QMetaType::Int, QMetaType::VoidStar, 0x80000000 | 12, QMetaType::Int, QMetaType::Int, 0x80000000 | 185,  156,  182,  183,  184,  186,
    QMetaType::Int, 0x80000000 | 110, QMetaType::Int,  111,   26,
    QMetaType::Int, QMetaType::VoidStar,  189,
    QMetaType::Int, 0x80000000 | 191, QMetaType::Int, 0x80000000 | 20,  192,  193,   41,
    QMetaType::Int, 0x80000000 | 195,  113,
    QMetaType::Int, QMetaType::VoidStar,  166,
    0x80000000 | 110, 0x80000000 | 164, 0x80000000 | 199,  198,  200,
    QMetaType::Void, 0x80000000 | 110, QMetaType::Int,  111,  202,
    QMetaType::Void, 0x80000000 | 110,  111,
    QMetaType::Void, 0x80000000 | 110,  111,
    QMetaType::Void, 0x80000000 | 110, 0x80000000 | 206,  111,  207,
    QMetaType::Void, 0x80000000 | 110, QMetaType::Int,  111,  209,
    QMetaType::Void, 0x80000000 | 110,  211,
    QMetaType::Int, QMetaType::VoidStar, 0x80000000 | 164, 0x80000000 | 164,  213,  214,  166,
    QMetaType::Int, QMetaType::VoidStar, 0x80000000 | 164, 0x80000000 | 164,  213,  214,  166,
    QMetaType::Int, QMetaType::VoidStar, 0x80000000 | 164, 0x80000000 | 164,  213,  214,  166,
    QMetaType::Int, QMetaType::VoidStar, 0x80000000 | 164, 0x80000000 | 164,  213,  214,  166,
    QMetaType::Int, QMetaType::VoidStar, 0x80000000 | 164, 0x80000000 | 164,  213,  214,  166,
    QMetaType::Int, QMetaType::VoidStar, 0x80000000 | 164, 0x80000000 | 164,  213,  214,  166,
    QMetaType::Int, QMetaType::VoidStar, 0x80000000 | 164, 0x80000000 | 164,  213,  214,  166,
    QMetaType::Void, QMetaType::VoidStar, 0x80000000 | 164,  213,  198,
    QMetaType::Int, QMetaType::VoidStar, 0x80000000 | 164, 0x80000000 | 164,  213,  214,  166,
    QMetaType::Int,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SendMessage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->init_and_events(); break;
        case 2: _t->ShowMessage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->on_action_exit_triggered(); break;
        case 4: _t->on_action_open_f_triggered(); break;
        case 5: { int _r = _t->cmp_audio_fmts((*reinterpret_cast< AVSampleFormat(*)>(_a[1])),(*reinterpret_cast< int64_t(*)>(_a[2])),(*reinterpret_cast< AVSampleFormat(*)>(_a[3])),(*reinterpret_cast< int64_t(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 6: { int64_t _r = _t->get_valid_channel_layout((*reinterpret_cast< int64_t(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int64_t*>(_a[0]) = std::move(_r); }  break;
        case 7: { int _r = _t->packet_queue_put_private((*reinterpret_cast< PacketQueue*(*)>(_a[1])),(*reinterpret_cast< AVPacket*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 8: { int _r = _t->packet_queue_put((*reinterpret_cast< PacketQueue*(*)>(_a[1])),(*reinterpret_cast< AVPacket*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 9: { int _r = _t->packet_queue_put_nullpacket((*reinterpret_cast< PacketQueue*(*)>(_a[1])),(*reinterpret_cast< AVPacket*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 10: { int _r = _t->packet_queue_init((*reinterpret_cast< PacketQueue*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->packet_queue_flush((*reinterpret_cast< PacketQueue*(*)>(_a[1]))); break;
        case 12: _t->packet_queue_destroy((*reinterpret_cast< PacketQueue*(*)>(_a[1]))); break;
        case 13: _t->packet_queue_abort((*reinterpret_cast< PacketQueue*(*)>(_a[1]))); break;
        case 14: _t->packet_queue_start((*reinterpret_cast< PacketQueue*(*)>(_a[1]))); break;
        case 15: { int _r = _t->packet_queue_get((*reinterpret_cast< PacketQueue*(*)>(_a[1])),(*reinterpret_cast< AVPacket*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 16: { int _r = _t->decoder_init((*reinterpret_cast< Decoder*(*)>(_a[1])),(*reinterpret_cast< AVCodecContext*(*)>(_a[2])),(*reinterpret_cast< PacketQueue*(*)>(_a[3])),(*reinterpret_cast< SDL_cond*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 17: { int _r = _t->decoder_decode_frame((*reinterpret_cast< Decoder*(*)>(_a[1])),(*reinterpret_cast< AVFrame*(*)>(_a[2])),(*reinterpret_cast< AVSubtitle*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 18: _t->decoder_destroy((*reinterpret_cast< Decoder*(*)>(_a[1]))); break;
        case 19: _t->decoder_abort((*reinterpret_cast< Decoder*(*)>(_a[1])),(*reinterpret_cast< FrameQueue*(*)>(_a[2]))); break;
        case 20: _t->frame_queue_unref_item((*reinterpret_cast< Frame*(*)>(_a[1]))); break;
        case 21: { int _r = _t->frame_queue_init((*reinterpret_cast< FrameQueue*(*)>(_a[1])),(*reinterpret_cast< PacketQueue*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 22: _t->frame_queue_destroy((*reinterpret_cast< FrameQueue*(*)>(_a[1]))); break;
        case 23: _t->frame_queue_signal((*reinterpret_cast< FrameQueue*(*)>(_a[1]))); break;
        case 24: { Frame* _r = _t->frame_queue_peek((*reinterpret_cast< FrameQueue*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Frame**>(_a[0]) = std::move(_r); }  break;
        case 25: { Frame* _r = _t->frame_queue_peek_next((*reinterpret_cast< FrameQueue*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Frame**>(_a[0]) = std::move(_r); }  break;
        case 26: { Frame* _r = _t->frame_queue_peek_last((*reinterpret_cast< FrameQueue*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Frame**>(_a[0]) = std::move(_r); }  break;
        case 27: { Frame* _r = _t->frame_queue_peek_writable((*reinterpret_cast< FrameQueue*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Frame**>(_a[0]) = std::move(_r); }  break;
        case 28: { Frame* _r = _t->frame_queue_peek_readable((*reinterpret_cast< FrameQueue*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Frame**>(_a[0]) = std::move(_r); }  break;
        case 29: _t->frame_queue_push((*reinterpret_cast< FrameQueue*(*)>(_a[1]))); break;
        case 30: _t->frame_queue_next((*reinterpret_cast< FrameQueue*(*)>(_a[1]))); break;
        case 31: { int _r = _t->frame_queue_nb_remaining((*reinterpret_cast< FrameQueue*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 32: { int64_t _r = _t->frame_queue_last_pos((*reinterpret_cast< FrameQueue*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int64_t*>(_a[0]) = std::move(_r); }  break;
        case 33: _t->fill_rectangle((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 34: { int _r = _t->realloc_texture((*reinterpret_cast< SDL_Texture**(*)>(_a[1])),(*reinterpret_cast< Uint32(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< SDL_BlendMode(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 35: _t->calculate_display_rect((*reinterpret_cast< SDL_Rect*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7])),(*reinterpret_cast< AVRational(*)>(_a[8]))); break;
        case 36: _t->get_sdl_pix_fmt_and_blendmode((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Uint32*(*)>(_a[2])),(*reinterpret_cast< SDL_BlendMode*(*)>(_a[3]))); break;
        case 37: { int _r = _t->upload_texture((*reinterpret_cast< SDL_Texture**(*)>(_a[1])),(*reinterpret_cast< AVFrame*(*)>(_a[2])),(*reinterpret_cast< SwsContext**(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 38: _t->set_sdl_yuv_conversion_mode((*reinterpret_cast< AVFrame*(*)>(_a[1]))); break;
        case 39: _t->video_image_display((*reinterpret_cast< VideoState*(*)>(_a[1]))); break;
        case 40: _t->video_audio_display((*reinterpret_cast< VideoState*(*)>(_a[1]))); break;
        case 41: _t->stream_component_close((*reinterpret_cast< VideoState*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 42: _t->stream_close((*reinterpret_cast< VideoState*(*)>(_a[1]))); break;
        case 43: _t->do_exit((*reinterpret_cast< VideoState*(*)>(_a[1]))); break;
        case 44: _t->set_default_window_size((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< AVRational(*)>(_a[3]))); break;
        case 45: { int _r = _t->video_open((*reinterpret_cast< VideoState*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 46: _t->video_display((*reinterpret_cast< VideoState*(*)>(_a[1]))); break;
        case 47: { double _r = _t->get_clock((*reinterpret_cast< Clock*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 48: _t->set_clock_at((*reinterpret_cast< Clock*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 49: _t->set_clock((*reinterpret_cast< Clock*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 50: _t->set_clock_speed((*reinterpret_cast< Clock*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 51: _t->init_clock((*reinterpret_cast< Clock*(*)>(_a[1])),(*reinterpret_cast< int*(*)>(_a[2]))); break;
        case 52: _t->sync_clock_to_slave((*reinterpret_cast< Clock*(*)>(_a[1])),(*reinterpret_cast< Clock*(*)>(_a[2]))); break;
        case 53: { double _r = _t->get_master_clock((*reinterpret_cast< VideoState*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 54: _t->check_external_clock_speed((*reinterpret_cast< VideoState*(*)>(_a[1]))); break;
        case 55: { int _r = _t->get_master_sync_type((*reinterpret_cast< VideoState*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 56: _t->stream_seek((*reinterpret_cast< VideoState*(*)>(_a[1])),(*reinterpret_cast< int64_t(*)>(_a[2])),(*reinterpret_cast< int64_t(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 57: _t->stream_toggle_pause((*reinterpret_cast< VideoState*(*)>(_a[1]))); break;
        case 58: _t->toggle_pause((*reinterpret_cast< VideoState*(*)>(_a[1]))); break;
        case 59: _t->toggle_mute((*reinterpret_cast< VideoState*(*)>(_a[1]))); break;
        case 60: _t->update_volume((*reinterpret_cast< VideoState*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 61: _t->step_to_next_frame((*reinterpret_cast< VideoState*(*)>(_a[1]))); break;
        case 62: { double _r = _t->compute_target_delay((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< VideoState*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 63: { double _r = _t->vp_duration((*reinterpret_cast< VideoState*(*)>(_a[1])),(*reinterpret_cast< Frame*(*)>(_a[2])),(*reinterpret_cast< Frame*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 64: _t->update_video_pts((*reinterpret_cast< VideoState*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< int64_t(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 65: _t->video_refresh((*reinterpret_cast< void*(*)>(_a[1])),(*reinterpret_cast< double*(*)>(_a[2]))); break;
        case 66: { int _r = _t->queue_picture((*reinterpret_cast< VideoState*(*)>(_a[1])),(*reinterpret_cast< AVFrame*(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int64_t(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 67: { int _r = _t->get_video_frame((*reinterpret_cast< VideoState*(*)>(_a[1])),(*reinterpret_cast< AVFrame*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 68: { int _r = _t->decoder_start((*reinterpret_cast< Decoder*(*)>(_a[1])),(*reinterpret_cast< int(*)(void*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 69: { int _r = _t->audio_thread((*reinterpret_cast< void*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 70: { int _r = _t->video_thread((*reinterpret_cast< void*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 71: { int _r = _t->subtitle_thread((*reinterpret_cast< void*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 72: _t->update_sample_display((*reinterpret_cast< VideoState*(*)>(_a[1])),(*reinterpret_cast< short*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 73: { int _r = _t->synchronize_audio((*reinterpret_cast< VideoState*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 74: { int _r = _t->audio_decode_frame((*reinterpret_cast< VideoState*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 75: _t->sdl_audio_callback((*reinterpret_cast< void*(*)>(_a[1])),(*reinterpret_cast< Uint8*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 76: { int _r = _t->audio_open((*reinterpret_cast< void*(*)>(_a[1])),(*reinterpret_cast< int64_t(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< AudioParams*(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 77: { int _r = _t->stream_component_open((*reinterpret_cast< VideoState*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 78: { int _r = _t->decode_interrupt_cb((*reinterpret_cast< void*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 79: { int _r = _t->stream_has_enough_packets((*reinterpret_cast< AVStream*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< PacketQueue*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 80: { int _r = _t->is_realtime((*reinterpret_cast< AVFormatContext*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 81: { int _r = _t->read_thread((*reinterpret_cast< void*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 82: { VideoState* _r = _t->stream_open((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< AVInputFormat*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< VideoState**>(_a[0]) = std::move(_r); }  break;
        case 83: _t->stream_cycle_channel((*reinterpret_cast< VideoState*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 84: _t->toggle_full_screen((*reinterpret_cast< VideoState*(*)>(_a[1]))); break;
        case 85: _t->toggle_audio_display((*reinterpret_cast< VideoState*(*)>(_a[1]))); break;
        case 86: _t->refresh_loop_wait_event((*reinterpret_cast< VideoState*(*)>(_a[1])),(*reinterpret_cast< SDL_Event*(*)>(_a[2]))); break;
        case 87: _t->seek_chapter((*reinterpret_cast< VideoState*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 88: _t->event_loop((*reinterpret_cast< VideoState*(*)>(_a[1]))); break;
        case 89: { int _r = _t->opt_width((*reinterpret_cast< void*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 90: { int _r = _t->opt_height((*reinterpret_cast< void*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 91: { int _r = _t->opt_format((*reinterpret_cast< void*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 92: { int _r = _t->opt_sync((*reinterpret_cast< void*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 93: { int _r = _t->opt_seek((*reinterpret_cast< void*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 94: { int _r = _t->opt_duration((*reinterpret_cast< void*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 95: { int _r = _t->opt_show_mode((*reinterpret_cast< void*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 96: _t->opt_input_file((*reinterpret_cast< void*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2]))); break;
        case 97: { int _r = _t->opt_codec((*reinterpret_cast< void*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 98: { int _r = _t->init();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        Q_UNUSED(result);
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
        if (_id < 99)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 99;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 99)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 99;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::SendMessage(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
