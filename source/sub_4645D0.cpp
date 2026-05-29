//----- (004645D0) --------------------------------------------------------
int __thiscall sub_4645D0(int *self, int a2)
{
  int v2; // edi
  int v4; // ecx
  _DWORD v6[16]; // [esp+8h] [ebp-40h] BYREF

  v2 = *(_DWORD *)(a2 + 40);
  v4 = 0;
  if ( v2 < 0 || v2 >= self[29] / 2 )
    return 0;
  if ( self[27] )
  {
    if ( self[25] )
    {
      memset(&v6[11], 0, 16);
      memset(&v6[6], 0, 16);
      memset(&v6[1], 0, 16);
      v6[15] = 1065353216;
      v6[10] = 1065353216;
      v6[5] = 1065353216;
      v6[0] = 1065353216;
      (*(void (__stdcall **)(_DWORD, int, _DWORD *))(**(_DWORD **)ArgList + 148))(*(_DWORD *)ArgList, 256, v6);
      sub_41BEF0((_DWORD *)dword_520A50, 0, self[5], 1, 0);
      sub_41BC00((_DWORD *)dword_520A50, 1, 1, 1, 1, 2, -1, 0);
      (*(void (__stdcall **)(_DWORD, int))(**(_DWORD **)ArgList + 304))(*(_DWORD *)ArgList, 322);
      (*(void (__stdcall **)(_DWORD, _DWORD, int, int))(**(_DWORD **)ArgList + 332))(
        *(_DWORD *)ArgList,
        0,
        self[25],
        24);
      (*(void (__stdcall **)(_DWORD, int, _DWORD))(**(_DWORD **)ArgList + 340))(*(_DWORD *)ArgList, self[27], 0);
      (*(void (__stdcall **)(_DWORD, int, int, int, int, int))(**(_DWORD **)ArgList + 284))(
        *(_DWORD *)ArgList,
        4,
        2 * v2,
        4,
        6 * v2,
        2);
      v4 = 2;
      *(float *)dword_520A20 = *(float *)dword_520A20 + 1.0;
    }
  }
  return v4;
}
