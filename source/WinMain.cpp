#include "defs.h"
#include <wchar.h>
#include <time.h>
#include <CommCtrl.h>
#define snwprintf _snwprintf
#define wtol _wtol
#define __usercall

//----- (004271D0) --------------------------------------------------------
int __stdcall WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
  int v4; // edi
  int v6; // esi
  INT v7; // eax
  HWND DesktopWindow; // eax
  int v9; // esi
  int v10; // esi
  DWORD Time; // edi
  LPVOID *v12; // eax
  char v13; // al
  DWORD v14; // esi
  int v15; // eax
  int v16; // esi
  int v17; // edx
  unsigned int v18; // eax
  int *v19; // ecx
  int v20; // edx
  int v21; // esi
  double v22; // [esp+10h] [ebp-1B0h]
  double v23; // [esp+18h] [ebp-1A8h]
  char *v24; // [esp+1Ch] [ebp-1A4h]
  HINSTANCE v25; // [esp+20h] [ebp-1A0h]
  int v26; // [esp+24h] [ebp-19Ch]
  char v27; // [esp+33h] [ebp-18Dh]
  float v28; // [esp+34h] [ebp-18Ch]
  float v29; // [esp+38h] [ebp-188h]
  float v30; // [esp+3Ch] [ebp-184h]
  int v31; // [esp+40h] [ebp-180h] BYREF
  int v32; // [esp+44h] [ebp-17Ch] BYREF
  int v33; // [esp+48h] [ebp-178h] BYREF
  int v34; // [esp+4Ch] [ebp-174h]
  int v35; // [esp+50h] [ebp-170h] BYREF
  int v36; // [esp+54h] [ebp-16Ch]
  unsigned int v37; // [esp+58h] [ebp-168h]
  int v38; // [esp+5Ch] [ebp-164h]
  __int64 v39; // [esp+60h] [ebp-160h]
  WNDCLASSEXA v40; // [esp+68h] [ebp-158h] BYREF
  LPVOID v41[2]; // [esp+98h] [ebp-128h] BYREF
  struct tagMSG Msg; // [esp+A0h] [ebp-120h] BYREF
  char Buffer[260]; // [esp+BCh] [ebp-104h] BYREF

  if ( !sub_422F40(aInstallOperati) )
  {
    MessageBoxA(0, Text, aOperationBlock, 0);
    return 0;
  }
  sub_422B60(1, aSoftwareInfogr);
  byte_520A10 = sub_422BA0(AppName, aLoadeverything, 0) != 0;
  if ( sub_422BA0(AppName, aRellog, 0) )
  {
    if ( !sub_422EF0(aLogs) )
      return 0;
    v6 = 1;
    do
    {
      v26 = v6++;
      sprintf(Buffer, "Logs\\Operation Blockade Log %04d.log", v26);
    }
    while ( sub_422AE0(Buffer) );
    sub_422950(Buffer);
  }
  GetCurrentDirectoryA(0x104u, ::Buffer);
  sub_4229D0("Working Directory: '%s'", ::Buffer);
  SetUnhandledExceptionFilter(TopLevelExceptionFilter);
  if ( sub_40EBA0() )
    sub_4281B0(aCouldnTInitial);
  sub_4229D0(aMeminitWorked);
  sub_422BA0(AppName, aMemorycheck, 0);
  wParam = sub_422BA0(AppName, aTexturescaledo, 0);
  v7 = sub_422BA0(AppName, aMaxparticles, 256);
  *(_DWORD *)&dword_520A44 = v7;
  if ( v7 >= 512 )
  {
    *(_DWORD *)&dword_520A44 = 512;
  }
  else if ( v7 < 32 )
  {
    *(_DWORD *)&dword_520A44 = 32;
  }
  byte_520974 = sub_422BA0(AppName, aAnimatedocean, 1) != 0;
  byte_520884 = sub_422BA0(AppName, aInvertmouse, 0) != 0;
  ::hInstance = hInstance;
  byte_520A70 = sub_422BA0(AppName, aShowcursor, 0) == 0;
  if ( CoInitializeEx(0, 0) )
    sub_4281B0(aCoinitializeex);
  sub_4229D0(aCoinitializeex_0);
  v40.cbSize = 48;
  v40.style = 64;
  v40.lpfnWndProc = sub_426E30;
  v40.cbClsExtra = 0;
  v40.cbWndExtra = 0;
  v40.hInstance = GetModuleHandleA(0);
  memset(&v40.hCursor, 0, 12);
  v40.lpszClassName = aBlockadeclass;
  v40.hIconSm = 0;
  v40.hIcon = LoadIconA(hInstance, (LPCSTR)0x77);
  RegisterClassExA(&v40);
  sub_4229D0(aRegisterclasse);
  v25 = ::hInstance;
  DesktopWindow = GetDesktopWindow();
  dword_5209E4 = CreateWindowExA(0, aBlockadeclass, WindowName, 0x90080000, -10, -10, 5, 5, DesktopWindow, 0, v25, 0);
  if ( !dword_5209E4 )
    sub_4281B0(aCanTCreateWind);
  sub_4229D0(aCreatewindowWo);
  GetClientRect(dword_5209E4, &Rect);
  GetWindowRect(dword_5209E4, &stru_5209C8);
  if ( !sub_4268C0() || (v27 = 1, sub_427950(v4, hInstance) < 0) )
    v27 = 0;
  sub_4229D0(aInitd3dAndInit);
  if ( v27 )
  {
    ShowWindow(dword_5209E4, 10);
    UpdateWindow(dword_5209E4);
    sub_427B80();
    v9 = 0;
    memset(&Msg, 0, sizeof(Msg));
    while ( Msg.message != 18 )
    {
      if ( PeekMessageA(&Msg, 0, 0, 0, 1u) )
      {
        TranslateMessage(&Msg);
        DispatchMessageA(&Msg);
      }
      else if ( !byte_520885 )
      {
        if ( byte_5209DC && byte_520A70 )
        {
          SetCursorPos((stru_5209C8.left + stru_5209C8.right) / 2, (stru_5209C8.top + stru_5209C8.bottom) / 2);
          ShowCursor(0);
        }
        v10 = v9 + 1;
        v36 = v10;
        Time = timeGetTime();
        if ( dword_5209F0 == 1 )
        {
          v12 = (LPVOID *)sub_450BF0((_DWORD *)dword_520970, 0, 0.0);
          sub_421110(v12, AppName);
          dword_5209F0 = 2;
        }
        else if ( dword_5209F0 == 2 )
        {
          sub_427EB0(*(int **)ArgList);
          dword_5209F0 = 0;
        }
        if ( v10 == 2 )
        {
          v13 = (*(int (__thiscall **)(int, char *))(*(_DWORD *)dword_520970 + 32))(dword_520970, aGameFailedToIn);
          sub_4282E0(v13, v24);
        }
        if ( dword_520A00 )
        {
          sub_40C2B0((_BYTE *)dword_520A00, v41);
          sub_488CEE(v41[1]);
        }
        if ( v10 > 1 && dword_520970 )
          (*(void (__thiscall **)(int))(*(_DWORD *)dword_520970 + 40))(dword_520970);
        if ( sub_427CB0() )
          sub_427CF0();
        v14 = timeGetTime();
        v15 = dword_520A98;
        v16 = v14 - Time;
        dword_520A9C[dword_520A98] = v16;
        v17 = (v15 + 1) % 10;
        v18 = 0;
        v19 = dword_520A9C;
        dword_520A98 = v17;
        do
        {
          v20 = *v19++;
          v18 += v20;
        }
        while ( (int)v19 < (int)dword_520AC4 );
        v37 = v18;
        v38 = 0;
        v28 = (double)v18 * 0.1;
        sub_422760(*(_DWORD **)(dword_520970 + 124), &v33, &v31, &v32, &v35);
        v39 = (unsigned int)v16;
        *(float *)dword_520A88 = (double)v32 + *(float *)dword_520A88;
        *(float *)dword_520850 = (double)v33 + *(float *)dword_520850;
        *(float *)dword_5209F8 = (double)v35 + *(float *)dword_5209F8;
        *(float *)dword_520858 = (double)v31 + *(float *)dword_520858;
        *(float *)&v34 = (double)v39 * 0.001;
        v21 = v34;
        sub_423060(&dword_520978, v34);
        sub_423060(&dword_520A58, v21);
        sub_423060(&dword_520A20, v21);
        sub_423060(&dword_520A88, v21);
        sub_423060(&dword_5209F8, v21);
        sub_423060(&dword_520850, v21);
        sub_423060(&dword_520858, v21);
        sub_423060(&dword_520A78, v21);
        sub_423060(dword_520A38, v21);
        sub_423060(&dword_5209C0, v21);
        sub_423060(&dword_520A08, v21);
        sub_423060(&dword_520A28, v21);
        sub_423060(&dword_520890, v21);
        if ( dword_52097C <= 0 )
          v29 = 0.0;
        else
          v29 = *(float *)(dword_520978 + 8);
        if ( v28 == 0.0 )
          v30 = 0.0;
        else
          v30 = 1000.0 / v28;
        v23 = sub_423120(&dword_520978);
        v22 = sub_4230F0(&dword_520978);
        sub_421190(
          dword_5209B8,
          "%.1f fps %d polys   (%.1f peak, %.1f kpolys/s avg)\n",
          v30,
          (unsigned int)(__int64)v29,
          v22,
          v23);
        v9 = v36;
      }
    }
  }
  sub_426D40();
  UnregisterClassA(aBlockadeclass, ::hInstance);
  CoUninitialize();
  sub_4229D0(aCouninitialize);
  sub_40EC30();
  sub_4229D0(aMemshutdownWor);
  return 0;
}
