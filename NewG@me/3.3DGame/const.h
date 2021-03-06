#ifndef CONST_H_INCLUDED
#define CONST_H_INCLUDED

#if defined(WIN32)
#define OS_WIN32
#elif defined(MAC)
#define OS_MAC
#elif defined(LINUX)
#define OS_LINUX
#elif defined(ANDROID_NDK)
#define OS_ANDROID
#else
#define OS_IPHONE
#endif

#define GFX_OPENGL
#define SND_OPENAL

#ifdef OS_WIN32
#define HAVE_STBIMAGE
#endif

#endif // CONST_H_INCLUDED
