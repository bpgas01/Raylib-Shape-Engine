// config.h.in

// core.c
// Camera module is included (camera.h) and multiple predefined cameras are available: free, 1st/3rd person, orbital
#define SUPPORT_CAMERA_SYSTEM 1
// Gestures module is included (gestures.h) to support gestures detection: tap, hold, swipe, drag
#define SUPPORT_GESTURES_SYSTEM 1
// Mouse gestures are directly mapped like touches and processed by gestures system.
#define SUPPORT_MOUSE_GESTURES 1
// Reconfigure standard input to receive key inputs, works with SSH connection.
/* #undef SUPPORT_SSH_KEYBOARD_RPI */
// Use busy wait loop for timing sync, if not defined, a high-resolution timer is setup and used
/* #undef SUPPORT_BUSY_WAIT_LOOP */
// Wait for events passively (sleeping while no events) instead of polling them actively every frame
/* #undef SUPPORT_EVENTS_WAITING */
// Allow automatic screen capture of current screen pressing F12, defined in KeyCallback()
#define SUPPORT_SCREEN_CAPTURE 1
// Allow automatic gif recording of current screen pressing CTRL+F12, defined in KeyCallback()
#define SUPPORT_GIF_RECORDING 1
// Support high DPI displays
/* #undef SUPPORT_HIGH_DPI */
// Support CompressData() and DecompressData() functions
/* #undef SUPPORT_COMPRESSION_API */
// Support for persistent data storage
#define SUPPORT_DATA_STORAGE 1

// rlgl.h
// Support VR simulation functionality (stereo rendering)
#define SUPPORT_VR_SIMULATOR 1

// shapes.c
// Draw rectangle shapes using font texture white character instead of default white texture
#define SUPPORT_FONT_TEXTURE 1
// Use QUADS instead of TRIANGLES for drawing when possible
// Some lines-based shapes could still use lines
#define SUPPORT_QUADS_DRAW_MODE 1

// textures.c
// Selecte desired fileformats to be supported for image data loading.
#define SUPPORT_FILEFORMAT_PNG 1
#define SUPPORT_FILEFORMAT_DDS 1
#define SUPPORT_FILEFORMAT_HDR 1
#define SUPPORT_FILEFORMAT_KTX 1
#define SUPPORT_FILEFORMAT_ASTC 1
/* #undef SUPPORT_FILEFORMAT_BMP */
/* #undef SUPPORT_FILEFORMAT_TGA */
/* #undef SUPPORT_FILEFORMAT_JPG */
/* #undef SUPPORT_FILEFORMAT_GIF */
/* #undef SUPPORT_FILEFORMAT_PSD */
/* #undef SUPPORT_FILEFORMAT_PKM */
/* #undef SUPPORT_FILEFORMAT_PVR */
// Support image export functionality (.png, .bmp, .tga, .jpg)
#define SUPPORT_IMAGE_EXPORT 1
// Support multiple image editing functions to scale, adjust colors, flip, draw on images, crop... If not defined only three image editing functions supported: ImageFormat(), ImageAlphaMask(), ImageToPOT()
#define SUPPORT_IMAGE_MANIPULATION 1
// Support procedural image generation functionality (gradient, spot, perlin-noise, cellular)
#define SUPPORT_IMAGE_GENERATION 1

// text.c
// Default font is loaded on window initialization to be available for the user to render simple text. NOTE: If enabled, uses external module functions to load default raylib font (module: text)
#define SUPPORT_DEFAULT_FONT 1
// Selected desired fileformats to be supported for loading. 
#define SUPPORT_FILEFORMAT_FNT 1
#define SUPPORT_FILEFORMAT_TTF 1
// Support text management functions
// If not defined, still some functions are supported: TextLength(), TextFormat()
#define SUPPORT_TEXT_MANIPULATION 1

// models.c
// Selected desired fileformats to be supported for loading.
#define SUPPORT_FILEFORMAT_OBJ 1
#define SUPPORT_FILEFORMAT_MTL 1
#define SUPPORT_FILEFORMAT_IQM 1
#define SUPPORT_FILEFORMAT_GLTF 1
// Support procedural mesh generation functions, uses external par_shapes.h library
// NOTE: Some generated meshes DO NOT include generated texture coordinates
#define SUPPORT_MESH_GENERATION 1

// raudio.c
// Desired fileformats to be supported for loading.
#define SUPPORT_FILEFORMAT_WAV 1
#define SUPPORT_FILEFORMAT_OGG 1
#define SUPPORT_FILEFORMAT_XM 1
#define SUPPORT_FILEFORMAT_MOD 1
/* #undef SUPPORT_FILEFORMAT_FLAC */
#define SUPPORT_FILEFORMAT_MP3 1

// utils.c
// Show TraceLog() output messages. NOTE: By default LOG_DEBUG traces not shown
#define SUPPORT_TRACELOG 1

