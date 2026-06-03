#ifndef COMMON_H
#define COMMON_H

#define _CRT_SECURE_NO_WARNINGS

#include <windows.h>
#include <mmsystem.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <math.h>
#include <float.h>
#include <setjmp.h>
#include <io.h>
#include <direct.h>
#include <mmintrin.h>

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

typedef char int8;
typedef unsigned char uint8;
typedef short int16;
typedef unsigned short uint16;
typedef int int32;
typedef unsigned int uint32;
typedef unsigned __int64 uint64;

#define _BYTE uint8
#define _WORD uint16
#define _DWORD uint32
#define _QWORD uint64
#define _UNKNOWN char

// IDA decompiler attribute compatibility
#define __org_typedef(x) x
#ifdef _MSC_VER
#define __attribute__(x)
#endif

// IDA defs.h macros for partial accesses
#define BYTEn(x, n)   (*((_BYTE*)&(x)+n))
#define WORDn(x, n)   (*((_WORD*)&(x)+n))
#define DWORDn(x, n)  (*((_DWORD*)&(x)+n))

// Windows already defines LOBYTE, LOWORD, HIBYTE, HIWORD
// We add the 32-bit and extended versions
#define LODWORD(x) DWORDn(x,0)
#define HIDWORD(x) DWORDn(x,1)
#define BYTE1(x)   BYTEn(x,  1)
#define BYTE2(x)   BYTEn(x,  2)
#define BYTE3(x)   BYTEn(x,  3)
#define BYTE4(x)   BYTEn(x,  4)
#define BYTE5(x)   BYTEn(x,  5)
#define BYTE6(x)   BYTEn(x,  6)
#define BYTE7(x)   BYTEn(x,  7)
#define BYTE8(x)   BYTEn(x,  8)
#define BYTE9(x)   BYTEn(x,  9)
#define BYTE10(x)  BYTEn(x, 10)
#define BYTE11(x)  BYTEn(x, 11)
#define BYTE12(x)  BYTEn(x, 12)
#define BYTE13(x)  BYTEn(x, 13)
#define BYTE14(x)  BYTEn(x, 14)
#define BYTE15(x)  BYTEn(x, 15)
#define WORD1(x)   WORDn(x,  1)
#define WORD2(x)   WORDn(x,  2)
#define WORD3(x)   WORDn(x,  3)
#define WORD4(x)   WORDn(x,  4)
#define WORD5(x)   WORDn(x,  5)
#define WORD6(x)   WORDn(x,  6)
#define WORD7(x)   WORDn(x,  7)

// Signed partial accesses
#define SBYTEn(x, n)   (*((int8*)&(x)+n))
#define SWORDn(x, n)   (*((int16*)&(x)+n))
#define SDWORDn(x, n)  (*((int32*)&(x)+n))

#define SLOBYTE(x)  SBYTEn(x,0)
#define SLOWORD(x)  SWORDn(x,0)
#define SLODWORD(x) SDWORDn(x,0)
#define SHIBYTE(x)  SBYTEn(x,1)
#define SHIWORD(x)  SWORDn(x,1)
#define SHIDWORD(x) SDWORDn(x,1)
#define SBYTE1(x)   SBYTEn(x,  1)
#define SBYTE2(x)   SBYTEn(x,  2)
#define SBYTE3(x)   SBYTEn(x,  3)
#define SBYTE4(x)   SBYTEn(x,  4)
#define SBYTE5(x)   SBYTEn(x,  5)
#define SBYTE6(x)   SBYTEn(x,  6)
#define SBYTE7(x)   SBYTEn(x,  7)
#define SBYTE8(x)   SBYTEn(x,  8)
#define SBYTE9(x)   SBYTEn(x,  9)
#define SBYTE10(x)  SBYTEn(x, 10)
#define SBYTE11(x)  SBYTEn(x, 11)
#define SBYTE12(x)  SBYTEn(x, 12)
#define SBYTE13(x)  SBYTEn(x, 13)
#define SBYTE14(x)  SBYTEn(x, 14)
#define SBYTE15(x)  SBYTEn(x, 15)
#define SWORD1(x)   SWORDn(x,  1)
#define SWORD2(x)   SWORDn(x,  2)
#define SWORD3(x)   SWORDn(x,  3)
#define SWORD4(x)   SWORDn(x,  4)
#define SWORD5(x)   SWORDn(x,  5)
#define SWORD6(x)   SWORDn(x,  6)
#define SWORD7(x)   SWORDn(x,  7)

// COERCE macros for type punning
template <typename T, typename F>
static T __coerce(F f) { T t; memcpy(&t, &f, sizeof(T)); return t; }
#define COERCE_FLOAT(v) __coerce<float>(v)
#define COERCE_DOUBLE(v) __coerce<double>(v)
#define COERCE_UNSIGNED_INT(v) __coerce<unsigned int>(v)
#define COERCE_UNSIGNED_INT64(v) __coerce<uint64>(v)

// Pair macros
#define __PAIR32__(high, low)   (((uint32) (high) << 16) | (uint16)(low))
#define __PAIR64__(high, low)   (((uint64) (high) << 32) | (uint32)(low))

// memset32 - set 32-bit values
inline void* memset32(void* dest, int val, size_t count) {
    int* d = (int*)dest;
    for (size_t i = 0; i < count; i++) d[i] = val;
    return dest;
}

// sndfile stubs (libsndfile)
struct SNDFILE_tag { int dummy; };
typedef struct SNDFILE_tag SNDFILE;
typedef __int64 sf_count_t;
struct SF_INFO { int frames; int samplerate; int channels; int format; int sections; int seekable; };
typedef struct SF_INFO SF_INFO;
#define SFM_READ 0x10
static SNDFILE* sf_open_read(const char* path, SF_INFO* info, void* vio, void* user) { return NULL; }
static SNDFILE* sf_open(const char* path, int mode, SF_INFO* info) { return NULL; }
static sf_count_t sf_read_short(SNDFILE* sndfile, short* buf, sf_count_t frames) { return 0; }
static int sf_close(SNDFILE* sndfile) { return 0; }

// findfirst/findnext (already in io.h but declare if missing)
#ifndef _FINDDATA_T_DEFINED
#define _FINDDATA_T_DEFINED
#endif

// Nullsubs
#ifndef nullsub_2
#define nullsub_2() ((void)0)
#endif

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
#define aMousespeed "MouseSpeed"
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

// sub_434270 string constants
#define aLoadingLoading "Loading..."
#define aShowcrosshair "ShowCrosshair"
#define aIconsHealth1Tg "Icons\\health1.tga"
#define aIconsHealth2Tg "Icons\\health2.tga"
#define aIconsHealth3Tg "Icons\\health3.tga"
#define aIconsHealth4Tg "Icons\\health4.tga"
#define aIconsHealth5Tg "Icons\\health5.tga"
#define aIconsHealthsha "Icons\\healthshadow.tga"
#define aIconsHealthgod "Icons\\healthgod.tga"
#define aIconsInsignias "Icons\\insignias.tga"
#define aBinocularsTga "Binoculars.tga"
#define aIcons30calTga "Icons\\30cal.tga"
#define aIcons45calTga "Icons\\45cal.tga"
#define aIcons50calTga "Icons\\50cal.tga"
#define aIcons40mmTga "Icons\\40mm.tga"
#define aIcons105mmTga "Icons\\105mm.tga"
#define aIcons155mmTga "Icons\\155mm.tga"
#define aIcons203mmTga "Icons\\203mm.tga"
#define aIconsBazookaTg "Icons\\bazooka.tga"
#define aIconsSuperbazo "Icons\\superbazooka.tga"
#define aIconsGrenadesp "Icons\\grenadespickup.tga"
#define aIconsSpecialat "Icons\\specialattack.tga"
#define aIconsSpecialat_0 "Icons\\specialattack2.tga"
#define aIconsInsignias_0 "Icons\\insignias2.tga"
#define aHitarrowsmallT "hitarrowsmall.tga"
#define aFinishedLoadin_0 "Finished Loading..."
#define aQ "Q"
#define aW_0 "W"
#define aE "E"

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
extern LPVOID ppv;
extern char WindowName[];
extern char MultiByteStr[];
extern char Text[];
extern char Buf[];
extern char String[];
extern char Base[];
extern int NumOfElements;
extern int Mode;
extern int eh;
extern int Stream;
extern HKEY phkResult;
extern int TaskStack;
extern char String2[];
extern char aEffect[];
extern char aRange[];
extern char aSoundEffect[];
extern char aSound[];
extern char aControl[];
extern char aIpx[];
extern char aTcpip_0[];
extern char aCancelbutton[];
extern char aOkbutton[];
extern char aWindowed[];
extern char aFullscreen[];
extern char aPickvideomodeS[];
extern char aErrormsg[];
extern char aLevelselect[];
extern char aStaging[];
extern char aNameentry[];
extern char aMainmenu[];
extern char aNetnameentry[];
extern char aName_0[];
extern char aSettingupmorta[];
extern char aWalkingfastlef[];
extern char aWalkingfastrig[];
extern char aWalkingleft[];
extern char aWalkingright[];
extern char aAirplane[];
extern char aUnitvalue[];
extern char aCouldNotFindAn[];
extern char aMpDoneSettingS[];
extern float flt_4B1580;
extern char asc_4A1F30[];
extern char aDialogueIni[];
extern char aDialoguegroup[];
extern char aName[];
extern char aLoadingDialogu[];
extern char aLoadingDialogu_0[];
extern char aCouldnTLoadDia[];
extern char aDialogueGroupS[];
extern char aSoundFailedCre[];
extern char aSoundDuplicate[];
extern char aSoundDestroyin[];
extern char aSoundCreatedPr[];
extern char aSoundCanTSetDs[];
extern char aSoundCanTLoadS_3[];
extern char aCanTResetStrea[];
extern char aFailedHr0xXInP[];
extern char aFailedHr0xXInP_0[];
extern char aFailedHr0xXInP_1[];
extern char aFailedHr0xXInP_2[];
extern char aFailedHr0xXInP_3[];
extern char aFailedHr0xXInP_4[];
extern char aFailedHr0xXInP_5[];
extern char aFailedHr0xXInC[];
extern char aFailed08lxToFr[];
extern char aFailed08lxInRu[];
extern char aFailed08lxInPa[];
extern char aFailed08lxToSe[];
extern char aFailed0x08lxTo[];
extern char aFailed0x08lxIn[];
extern char ClassName[];

#define nullsub_1(x) ((void)0)
#define nullsub_4(x) 0
#define nullsub_8(x,y) 0

int sub_422BA0(char*, char*, int);
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
int sub_450BF0(_DWORD*, int, float);
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
int sub_422BA0(char*, char*, int);
int sub_46B970(int, int);
int sub_46B976(int, int, int);
int sub_46B97C(int, int, int);

#ifndef HEXRAYS_DEFS_H
inline void* qmemcpy(void* dst, const void* src, size_t cnt) {
    char* out = (char*)dst;
    const char* in = (const char*)src;
    while (cnt > 0) { *out++ = *in++; --cnt; }
    return dst;
}
#endif

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

extern char *aSessionIsFull;
extern char *aHostRejectedTh;
extern char *aPlayerNotReach;
extern char *aConnectionFail;
extern char *aHostNotFound;
extern float flt_4F5CB8;
extern float flt_4F5CBC;
extern float flt_4F5CC0;

struct CPPEH_RECORD {
    unsigned int old_esp;
    int exc_ptr;
    int registration;
};

#include "all_decls.h"
#include "global_decls.h"

#endif
