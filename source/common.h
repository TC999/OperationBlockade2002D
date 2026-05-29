#ifndef COMMON_H
#define COMMON_H

#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#pragma comment(lib, "winmm.lib")

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
extern int dword_5209F0;
extern int dword_5209F8;
extern int dword_520A00;
extern int dword_520A08;
extern int dword_520A20;
extern int dword_520A28;
extern int dword_520A38[3];
extern BYTE dword_520A44;
extern int dword_520A58;
extern char byte_520A70;
extern int dword_520A78;
extern int dword_520A88;
extern int dword_520A98;
extern int dword_520A9C[10];
extern int dword_520AC4[93];
extern int dword_5209F0;
extern int dword_5209DC;
extern char byte_520885;
extern char byte_520974;
extern char byte_5209DC;
extern char byte_520A10;
extern int dword_5223BC;
extern _DWORD *off_4B296C;
extern RECT Rect;
extern RECT stru_5209C8;
extern LPCRITICAL_SECTION lpCriticalSection;
extern LPDIRECTSOUND ppDS;
extern char WindowName[];

#define nullsub_1(x) ((void)0)
#define nullsub_4(x) 0
#define nullsub_8(x,y) 0

int sub_422BA0(const char*, const char*, int);
char sub_422AE0(const char*);
int sub_422B60(int, const char*);
int sub_422EF0(const char*);
char sub_422F40(const char*);
int sub_4229D0(char*, ...);
int sub_422950(const char*);
int sub_40EBA0();
void sub_4281B0(char*, ...);
void sub_426D40();
LRESULT sub_426E30(HWND, UINT, WPARAM, LPARAM);
void sub_40EC30();
char sub_4268C0();
char sub_427CB0();
int sub_427CF0();
int sub_427B80();
int sub_427EA0();
bool sub_427EB0(int*);
char sub_4282E0(char, char*, ...);
int sub_41B030(int);
void sub_423060(void*, int);
void sub_4230F0(void*);
void sub_423120(void*);
void sub_421110(void*, const char*);
int sub_421190(int, char*, ...);
void sub_422760(void*, void*, void*, void*, void*);
void sub_40C2B0(int, void*);
void sub_488CEE(void*);
void sub_427EB0(int*);
void sub_427CB0();
void sub_427CF0();
void sub_450BF0(int*, int, double);
int sub_426F50(int);
int sub_422AE0(const char*);
int sub_426F50(int a1);
char sub_4263C0(int a1, int a2);
char sub_4263D0(int a1, int a2, int a3);
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
void sub_4231A0();
void sub_4113D0(int);
char sub_4263C0(int, int);
char sub_4263D0(int, int, int);
char sub_408F60(int);
int sub_408F40(int);
int sub_408F40(int a1);
char sub_408F60(int a1);
int sub_422AE0(const char* lpFileName);
int sub_426F50(int a1);
int sub_427950(int a1, HINSTANCE hInstance);
int sub_428420();
void sub_422760(void* a1, void* a2, void* a3, void* a4, void* a5);
void sub_423060(void* a1, int a2);
double sub_4230F0(void* a1);
double sub_423120(void* a1);
int sub_421190(int a1, char* a2, ...);
int sub_41B030(int a1);
void sub_40C2B0(int a1, void* a2);
void sub_488CEE(void* a1);
void sub_427EB0(int* a1);
char sub_427CB0();
int sub_427CF0();
void sub_450BF0(int* a1, int a2, double a3);
void sub_422760(void*, void*, void*, void*, void*);
void sub_423060(void*, int);
void sub_4230F0(void*);
void sub_423120(void*);
void sub_421190(void*, const char*, ...);
int sub_41B030(int);
void sub_40C2B0(int, void*);
void sub_488CEE(void*);
void sub_427EB0(int*);

#endif