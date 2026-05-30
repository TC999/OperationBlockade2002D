//----- (0041F790) --------------------------------------------------------
int __cdecl sub_41F790(int self, int a2)
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
  return sub_41F3D0(
           *(float *)(self + 36),
           *(float *)(self + 40),
           *(float *)(self + 44),
           *(float *)(self + 48),
           *(float *)(self + 20),
           *(float *)(self + 24),
           *(float *)(self + 28),
           *(_DWORD *)(self + 32));
}
