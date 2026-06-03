#include "common.h"

//----- (00402710) --------------------------------------------------------
BOOL __cdecl sub_402710(const char *a1)
{
  WNDCLASSA WndClass; // [esp+4h] [ebp-12Ch] BYREF
  CHAR WindowName[260]; // [esp+2Ch] [ebp-104h] BYREF

  memset(&WndClass, 0, sizeof(WndClass));
  WndClass.lpfnWndProc = sub_4027C0;
  WndClass.hInstance = hInstance;
  WndClass.lpszClassName = ClassName;
  if ( !RegisterClassA(&WndClass) )
    return 0;
  wsprintfA(WindowName, "%s: %s", ClassName, a1);
  hWnd = CreateWindowExA(0, ClassName, WindowName, 0, 0, 0, 0, 0, 0, 0, hInstance, 0);
  return hWnd != 0;
}
