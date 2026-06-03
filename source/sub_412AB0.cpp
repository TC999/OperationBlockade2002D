//----- (00412AB0) --------------------------------------------------------
_DWORD *__cdecl sub_412AB0(_DWORD *self)
{
  _DWORD *v2; // ebp
  _DWORD *v3; // edi
  int v4; // ecx
  int v5; // eax
  char *v7; // [esp+34h] [ebp-28h]
  _DWORD v8[5]; // [esp+48h] [ebp-14h] BYREF

  v8[1] = (int)self;
  self[1] = 0;
  self[2] = 0;
  self[3] = 0;
  *((_BYTE *)self + 16) = 1;
  v2 = self + 29;
  self[7] = 1132396544;
  self[8] = 1132396544;
  v3 = self + 30;
  self[12] = 1065353216;
  self[13] = 1065353216;
  self[5] = 0;
  self[18] = -1082130432;
  self[19] = -1082130432;
  self[6] = 0;
  self[9] = 0;
  self[10] = 0;
  self[11] = 0;
  self[17] = 0;
  self[20] = 255;
  self[21] = 255;
  self[22] = 255;
  self[23] = 255;
  self[24] = 255;
  self[25] = 255;
  *((_BYTE *)self + 104) = 0;
  *((_BYTE *)self + 105) = 0;
  self[27] = 0;
  *((_BYTE *)self + 112) = 1;
  self[29] = 0;
  self[30] = 0;
  *self = (uint32)&off_4991D4;
  v7 = (char *)(self + 30);
  v4 = **(_DWORD **)ArgList;
  v8[4] = 0;
  if ( (*(int (__stdcall **)(_DWORD, int, int, int, int, char *))(v4 + 96))(*(_DWORD *)ArgList, 12, 8, 101, 1, v7) )
    *v3 = 0;
  if ( (*(int (__stdcall **)(_DWORD, int, int, int, int, _DWORD *))(**(_DWORD **)ArgList + 92))(
         *(_DWORD *)ArgList,
         112,
         8,
         324,
         1,
         v2) )
  {
    v5 = *v3;
    *v2 = 0;
    if ( v5 )
    {
      (*(void (__stdcall **)(int))(*(_DWORD *)v5 + 8))(v5);
      *v3 = 0;
    }
  }
  if ( *v3 )
  {
    (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, _DWORD *, _DWORD))(*(_DWORD *)*v3 + 44))(*v3, 0, 0, v8, 0);
    *(_WORD *)v8[0] = 0;
    *(_WORD *)(v8[0] + 2) = 1;
    *(_WORD *)(v8[0] + 4) = 2;
    *(_WORD *)(v8[0] + 6) = 1;
    *(_WORD *)(v8[0] + 8) = 3;
    *(_WORD *)(v8[0] + 10) = 2;
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*v3 + 48))(*v3);
  }
  self[31] = 0;
  return self;
}
