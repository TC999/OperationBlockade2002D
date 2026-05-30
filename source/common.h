#ifndef COMMON_H
#define COMMON_H

#define _CRT_SECURE_NO_WARNINGS

#include <windows.h>
#include <mmsystem.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <float.h>

#ifndef __MSABI_LONG
#define __MSABI_LONG(x) x
#endif

#define WINBOOL BOOL
#include <d3d8.h>
#include <dsound.h>
#undef WINBOOL

#pragma comment(lib, "winmm.lib")
#pragma comment(lib, "d3d8.lib")
#pragma comment(lib, "dsound.lib")
#pragma comment(lib, "dxguid.lib")
#pragma comment(lib, "Comctl32.lib")

typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned int uint32;
typedef unsigned __int64 uint64;

#define _BYTE uint8
#define _WORD uint16
#define _DWORD uint32
#define _QWORD uint64
#define _UNKNOWN char

#define aInstallOperati "InstallDirectory"
#define aSoftwareInfogr "Software\\Infogrames\\Operation Blockade"
#define aLoadeverything "LoadEverythingAtStart"
#define aRellog "RelLog"
#define aLogs "Logs"
#define aMeminitWorked "MemInit worked"
#define aMemorycheck "MemoryCheck"
#define aTexturescaledo "TextureScaledown"
#define aMaxparticles "MaxParticles"
#define aAnimatedocean "AnimatedOcean"
#define aInvertmouse "InvertMouse"
#define aShowcursor "ShowCursor"
#define aCoinitializeex "CoInitializeEx failed"
#define aCoinitializeex_0 "CoInitializeEx worked"
#define aRegisterclasse "RegisterClassEx worked"
#define aCreatewindowWo "CreateWindow worked"
#define aCanTCreateWind "Can't create window"
#define aInitd3dAndInit "Initd3d and Init() both returned fine"
#define aGameFailedToIn "Game Failed to Init()"
#define aOperationBlock "Operation Blockade CD Missing"
#define aBlockadeclass "BlockadeClass"
#define aCouninitialize "CoUninitialize worked"
#define aMemshutdownWor "_MemShutdown worked"
#define aScreenwidth "ScreenWidth"
#define aScreenheight "ScreenHeight"
#define aScreendepth "ScreenDepth"
#define aFullscreen_0 "Fullscreen"
#define aWaitforvsync "WaitForVsync"
#define aZbuffertoggle "ZBufferToggle"
#define aHigh "High"
#define aMedium "Medium"
#define aLow "Low"
#define aDirect3dcreate "Direct3DCreate8 failed"
#define aCreatedD3d8Obj "Created D3D8 Object"
#define aPickvideomodeR "PickVideoMode returned failure"
#define aReturningSucce "Returning Success from Init()"
#define aPickedVideoMod "Picked Video Mode OK"
#define aCreatedeviceFa "CreateDevice failed - D3DERR_INVALIDCALL"
#define aCreatedeviceFa_0 "CreateDevice failed - D3DERR_NOTAVAILABLE"
#define aCreatedeviceFa_1 "CreateDevice failed - D3DERR_OUTOFVIDEOMEMORY"
#define aCreatedeviceFa_2 "CreateDevice failed - Unknown error"
#define aGetadapterdisp "GetAdapterDisplayMode failed"
#define aGetadapterdisp_0 "GetAdapterDisplayMode worked"
#define aSkiplogo "SkipLogo"
#define aUnknown "Unknown"
#define aJoin "join"
#define aHost "host"
#define aSkipvideomode "skipvideomode"
#define aCouldnTInitial "Couldn't Initialize Memory"

extern HWND hWnd;
extern HINSTANCE hInstance;
extern char AppName[];
extern char ArgList[];
extern char Buffer[];
extern WPARAM wParam;
extern int dword_520850;
extern int dword_520858;
extern int dword_520890;
extern int dword_520970;
extern int dword_520978;
extern int dword_52097C;
extern int dword_5209B8;
extern int dword_5209C0;
extern HWND dword_5209E4;
extern int dword_5209E0;
extern int dword_5209F0;
extern int dword_5209F4;
extern int dword_5209F8;
extern int dword_520A00;
extern int dword_520A08;
extern int dword_520A10;
extern int dword_520A14;
extern int dword_520A18;
extern int dword_520A20;
extern int dword_520A28;
extern int dword_520A30;
extern int dword_520A38[3];
extern BYTE dword_520A44;
extern int dword_520A50;
extern int dword_520A58;
extern char byte_520A60[];
extern char byte_520A70;
extern int dword_520A78;
extern int dword_520A88;
extern int dword_520A98;
extern int dword_520A9C[10];
extern int dword_520AC4[93];
extern int dword_5209DC;
extern char byte_520860;
extern char byte_520884;
extern char byte_520885;
extern char byte_520974;
extern char byte_5209DC;
extern char byte_520A10;
extern int dword_52233C;
extern int dword_522340;
extern int dword_5223BC;
extern int dword_520898;
extern int dword_520980;
extern int dword_520984;
extern int dword_520988;
extern int dword_52098C;
extern int dword_520994;
extern int dword_520998;
extern int dword_52099C;
extern int dword_5209A0;
extern int dword_5209A4;
extern int dword_5209AC;
extern int dword_5209B0;
extern int dword_5209D8;
extern int dword_5209EC;
extern _DWORD *off_4B296C;
extern RECT Rect;
extern RECT stru_5209C8;
extern LPCRITICAL_SECTION lpCriticalSection;
extern LPDIRECTSOUND ppDS;
extern char WindowName[];
extern char MultiByteStr[];
extern char Text[];

#define nullsub_1(x) ((void)0)
#define nullsub_4(x) 0
#define nullsub_8(x,y) 0

int sub_422BA0(const char*, const char*, int);
char sub_422AE0(const char*);
int sub_422B60(int, const char*);
bool sub_422EF0(const char*);
char sub_422F40(const char*);
unsigned int sub_422950(const char*);
FILE *sub_4229D0(char*, ...);
int sub_40EBA0();
__declspec(noreturn) void sub_4281B0(char*, ...);
int sub_426D40();
LRESULT __cdecl sub_426E30(HWND, UINT, WPARAM, LPARAM);
void sub_40EC30();
char sub_4268C0();
char sub_427CB0();
int sub_427CF0();
int sub_427B80();
int sub_427EA0();
bool sub_427EB0(int*);
char sub_4282E0(char, char*, ...);
int sub_41B030();
void sub_423060(void*, int);
double sub_4230F0(void*);
double sub_423120(void*);
void sub_421110(void*, const char*);
int sub_421190(int, char*, ...);
void sub_422760(void*, void*, void*, void*, void*);
void sub_40C2B0(int, void*);
void sub_488CEE(void*);
void sub_450BF0(int*, int, double);
int sub_426F50(int);
char sub_4263C0(int, int);
char sub_4263D0(int, int, int);
int sub_426580();
int sub_4265C0();
int sub_426600();
int sub_426640();
int sub_426680();
int sub_4266C0();
int sub_426700();
int sub_426740();
int sub_426780();
int sub_4267C0();
int sub_426800();
int sub_426840();
int sub_426880();
void *sub_4231A0();
void sub_4113D0(int);
char sub_408F60(int);
int sub_408F40(int);
int sub_427950(int, HINSTANCE);
int sub_428420();
int sub_426FE0();
void sub_4026C0(char*);
int sub_41A360(int);
int sub_41BB80(void*);
LONG WINAPI TopLevelExceptionFilter(struct _EXCEPTION_POINTERS*);

inline void* qmemcpy(void* dst, const void* src, size_t cnt) {
    char* out = (char*)dst;
    const char* in = (const char*)src;
    while (cnt > 0) { *out++ = *in++; --cnt; }
    return dst;
}

extern "C" {
int __cdecl __strgtold12(_LDBL12*, const char**, char, int, int, int, int);
void __cdecl _lock(int);
void __cdecl _unlock(int);
int __cdecl __sbh_find_block(void*, void*);
int __cdecl __sbh_alloc_block(void*, int, int);
int __cdecl __sbh_resize_block(void*, void*, int);
int __cdecl __sbh_heap_init(int);
int __cdecl _stbuf(FILE*);
int __cdecl _ftbuf(int, FILE*);
int __cdecl _output(FILE*, const char*, va_list);
int __cdecl flsall(int);
int __cdecl _convertTOStoQNaN(int);
void __cdecl _startOneArgErrorHandling(int, int, int);
void __cdecl _load_CW(int);
void* __cdecl memcpy_0(void*, const void*, size_t);
}

extern HANDLE hHeap;
extern char tbyte_4B2910[];
extern char tbyte_4B291A[];
extern const char* aAcos;
extern const char* aAsin;
extern void* lpMem;

struct CPPEH_RECORD {
    unsigned int old_esp;
    int exc_ptr;
    int registration;
};

#include "all_decls.h"
#include "global_decls.h"

#endif
