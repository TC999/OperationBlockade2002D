//----- (004204C0) --------------------------------------------------------
int sub_4204C0()
{
  _DWORD v1[16]; // [esp+0h] [ebp-40h] BYREF

  memset(&v1[11], 0, 16);
  memset(&v1[6], 0, 16);
  memset(&v1[1], 0, 16);
  v1[15] = 1065353216;
  v1[10] = 1065353216;
  v1[5] = 1065353216;
  v1[0] = 1065353216;
  (*(void (__stdcall **)(_DWORD, int, _DWORD *))(**(_DWORD **)ArgList + 148))(*(_DWORD *)ArgList, 256, v1);
  (*(void (__stdcall **)(_DWORD, int, int))(**(_DWORD **)ArgList + 200))(*(_DWORD *)ArgList, 47, 2);
  if ( byte_5200FC )
    (*(void (__stdcall **)(_DWORD, int, int))(**(_DWORD **)ArgList + 200))(*(_DWORD *)ArgList, 22, 1);
  (*(void (__stdcall **)(_DWORD, int, _DWORD, int, _DWORD, int))(**(_DWORD **)ArgList + 284))(
    *(_DWORD *)ArgList,
    4,
    0,
    4 * dword_520100,
    0,
    2 * dword_520100);
  (*(void (__stdcall **)(_DWORD, int, _DWORD))(**(_DWORD **)ArgList + 200))(*(_DWORD *)ArgList, 47, 0);
  if ( byte_5200FC )
  {
    (*(void (__stdcall **)(_DWORD, int, int))(**(_DWORD **)ArgList + 200))(*(_DWORD *)ArgList, 22, 3);
    byte_5200FC = 0;
  }
  *(float *)dword_520A20 = *(float *)dword_520A20 + 1.0;
  return 2 * dword_520100;
}
