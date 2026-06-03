//----- (0041A390) --------------------------------------------------------
extern char aDXD[];
LRESULT sub_41A390()
{
  LRESULT (__stdcall *v0)(HWND, UINT, WPARAM, LPARAM); // ebp
  LRESULT v1; // eax
  int *v2; // ebx
  int *v3; // ebx
  int v4; // eax
  int v5; // ebp
  int v6; // edi
  int v7; // esi
  LRESULT v8; // eax
  WPARAM v9; // eax
  int *v11; // edi
  int v12; // ebx
  int v13; // esi
  LRESULT v14; // eax
  WPARAM v15; // eax
  bool v16; // [esp+13h] [ebp-111h]
  signed int wParam; // [esp+14h] [ebp-110h]
  WPARAM wParama; // [esp+14h] [ebp-110h]
  WPARAM v19; // [esp+18h] [ebp-10Ch]
  signed int v20; // [esp+18h] [ebp-10Ch]
  unsigned int v21; // [esp+1Ch] [ebp-108h]
  int *v22; // [esp+20h] [ebp-104h]
  char lParam[256]; // [esp+24h] [ebp-100h] BYREF

  v0 = SendMessageA;
  SendMessageA((HWND)dword_5200C4, 0x14Bu, 0, 0);
  if ( (_BYTE)dword_5200AC )
  {
    v1 = SendMessageA((HWND)dword_5200C0, 0x147u, 0, 0);
    v16 = 0;
    v21 = 0;
    v2 = &((int*)&dword_4F6160)[4323 * SendMessageA((HWND)dword_5200C0, 0x150u, v1, 0)];
    wParam = -1;
    v19 = -1;
    v22 = v2;
    if ( !v2[56] )
      goto LABEL_17;
    v3 = v2 + 59;
    do
    {
      v4 = *v3;
      v5 = 16;
      if ( *v3 == 22 || v4 == 21 || v4 == 20 )
        v5 = 32;
      v6 = *(v3 - 1);
      v7 = *(v3 - 2);
      sprintf(lParam, "%d x %d - %d bit", v7, v6, v5);
      v8 = SendMessageA((HWND)dword_5200C4, 0x143u, 0, (LPARAM)lParam);
      if ( v7 == *(_DWORD *)dword_4F5CD4 && v6 == *(_DWORD *)&dword_5200BC && !v16 )
      {
        wParam = v8;
        v16 = v5 == *(_DWORD *)&dword_520098;
      }
      if ( v7 == 640 && v6 == 480 )
        v19 = v8;
      v3 += 5;
      ++v21;
    }
    while ( v21 < v22[56] );
    v9 = wParam;
    v0 = SendMessageA;
    if ( wParam <= -1 )
LABEL_17:
      v9 = v19;
    return v0((HWND)dword_5200C4, 0x14Eu, v9, 0);
  }
  else
  {
    v11 = &dword_4A2994;
    v20 = -1;
    wParama = -1;
    do
    {
      v12 = *v11;
      v13 = *(v11 - 1);
      sprintf(lParam, "%d x %d", v13, *v11);
      v14 = SendMessageA((HWND)dword_5200C4, 0x143u, 0, (LPARAM)lParam);
      if ( v13 == *(_DWORD *)dword_4F5CD4 && v12 == *(_DWORD *)&dword_5200BC )
        v20 = v14;
      if ( v13 == 640 && v12 == 480 )
        wParama = v14;
      v11 += 2;
    }
    while ( (int)v11 < (int)&aDXD[4] );
    v15 = v20;
    if ( v20 <= -1 )
      v15 = wParama;
    return SendMessageA((HWND)dword_5200C4, 0x14Eu, v15, 0);
  }
}
