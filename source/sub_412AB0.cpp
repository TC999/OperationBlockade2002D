//----- (00412AB0) --------------------------------------------------------
_DWORD *__thiscall sub_412AB0(_DWORD *this)
{
  _DWORD *v2; // ebp
  _DWORD *v3; // edi
  int v4; // ecx
  int v5; // eax
  char *v7; // [esp+34h] [ebp-28h]
  _DWORD v8[5]; // [esp+48h] [ebp-14h] BYREF

  v8[1] = this;
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  *((_BYTE *)this + 16) = 1;
  v2 = this + 29;
  this[7] = 1132396544;
  this[8] = 1132396544;
  v3 = this + 30;
  this[12] = 1065353216;
  this[13] = 1065353216;
  this[5] = 0;
  this[18] = -1082130432;
  this[19] = -1082130432;
  this[6] = 0;
  this[9] = 0;
  this[10] = 0;
  this[11] = 0;
  this[17] = 0;
  this[20] = 255;
  this[21] = 255;
  this[22] = 255;
  this[23] = 255;
  this[24] = 255;
  this[25] = 255;
  *((_BYTE *)this + 104) = 0;
  *((_BYTE *)this + 105) = 0;
  this[27] = 0;
  *((_BYTE *)this + 112) = 1;
  this[29] = 0;
  this[30] = 0;
  *this = &off_4991D4;
  v7 = (char *)(this + 30);
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
  this[31] = 0;
  return this;
}
