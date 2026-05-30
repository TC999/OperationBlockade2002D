//----- (00401EC0) --------------------------------------------------------
int __cdecl sub_401EC0(int self)
{
  _DWORD v3[16]; // [esp+4h] [ebp-40h] BYREF

  memset(&v3[11], 0, 16);
  memset(&v3[6], 0, 16);
  memset(&v3[1], 0, 16);
  v3[15] = 1065353216;
  v3[10] = 1065353216;
  v3[5] = 1065353216;
  v3[0] = 1065353216;
  (*(void (__stdcall **)(_DWORD, int, _DWORD *))(**(_DWORD **)ArgList + 148))(*(_DWORD *)ArgList, 256, v3);
  sub_41F3D0(*(float *)(self + 168), *(float *)(self + 172), *(_DWORD *)(self + 176), 0.050000001, 200, 200, 200, 255);
  sub_41F3D0(*(float *)(self + 180), *(float *)(self + 184), *(_DWORD *)(self + 188), 0.050000001, 200, 200, 200, 255);
  sub_41F3D0(*(float *)(self + 192), *(float *)(self + 196), *(_DWORD *)(self + 200), 0.050000001, 200, 200, 200, 255);
  sub_41F3D0(*(float *)(self + 204), *(float *)(self + 208), *(_DWORD *)(self + 212), 0.050000001, 200, 200, 200, 255);
  sub_41F3D0(*(float *)(self + 216), *(float *)(self + 220), *(_DWORD *)(self + 224), 500.0, 200, 200, 200, 255);
  sub_41F3D0(*(float *)(self + 228), *(float *)(self + 232), *(_DWORD *)(self + 236), 500.0, 200, 200, 200, 255);
  sub_41F3D0(*(float *)(self + 240), *(float *)(self + 244), *(_DWORD *)(self + 248), 500.0, 200, 200, 200, 255);
  return sub_41F3D0(*(float *)(self + 252), *(float *)(self + 256), *(_DWORD *)(self + 260), 500.0, 200, 200, 200, 255);
}
