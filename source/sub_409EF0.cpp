//----- (00409EF0) --------------------------------------------------------
int __thiscall sub_409EF0(_DWORD *this, int a2)
{
  _DWORD v4[16]; // [esp+4h] [ebp-40h] BYREF

  memset(&v4[11], 0, 16);
  memset(&v4[6], 0, 16);
  memset(&v4[1], 0, 16);
  v4[15] = 1065353216;
  v4[10] = 1065353216;
  v4[5] = 1065353216;
  v4[0] = 1065353216;
  (*(void (__stdcall **)(_DWORD, int, _DWORD *))(**(_DWORD **)ArgList + 148))(*(_DWORD *)ArgList, 256, v4);
  sub_41BC00(1, 0, 1, 0, 1, 1, 1);
  sub_41BEF0(0, 0, -1, -1);
  sub_41BEF0(1, 0, -1, -1);
  (*(void (__stdcall **)(_DWORD, int))(**(_DWORD **)ArgList + 304))(*(_DWORD *)ArgList, 66);
  (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, int))(**(_DWORD **)ArgList + 332))(*(_DWORD *)ArgList, 0, this[12], 16);
  (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)ArgList + 340))(*(_DWORD *)ArgList, this[13], 0);
  (*(void (__stdcall **)(_DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD))(**(_DWORD **)ArgList + 284))(
    *(_DWORD *)ArgList,
    2,
    0,
    this[14],
    0,
    this[15] >> 1);
  *(float *)dword_520A20 = *(float *)dword_520A20 + 1.0;
  return this[10] + this[11];
}
