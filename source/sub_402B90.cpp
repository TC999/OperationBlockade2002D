//----- (00402B90) --------------------------------------------------------
int sub_402B90()
{
  int v1; // eax
  int v2; // esi
  int v3; // eax
  int v4; // esi
  int v5; // eax
  int v6; // esi
  int v7; // eax
  int v8; // [esp+18h] [ebp-4h] BYREF

  if ( !dword_4B5A98 )
    return 1;
  v1 = (*(int (__stdcall **)(int, int *))(*(_DWORD *)dword_4B5A98 + 140))(dword_4B5A98, &v8);
  v2 = v1;
  if ( v1 < 0 )
  {
    sub_4229D0(aFailedHr0xXInP_2, v1);
    return v2;
  }
  if ( !v8 )
  {
    v3 = (*(int (__stdcall **)(int, void *))(*(_DWORD *)dword_4B5A98 + 128))(dword_4B5A98, &unk_4B5AAC);
    v4 = v3;
    if ( v3 < 0 )
    {
      sub_4229D0(aFailedHr0xXInP_3, v3);
      return v4;
    }
    v5 = (*(int (__stdcall **)(int, HWND))(*(_DWORD *)dword_4B5A98 + 124))(dword_4B5A98, hWnd);
    v6 = v5;
    if ( v5 < 0 )
    {
      sub_4229D0(aFailedHr0xXInP_4, v5);
      return v6;
    }
    v8 = -1;
    v7 = (*(int (__stdcall **)(int, int))(*(_DWORD *)dword_4B5A98 + 144))(dword_4B5A98, -1);
    v2 = v7;
    if ( v7 < 0 )
      sub_4229D0(aFailedHr0xXInP_5, v7);
  }
  return v2;
}
