//----- (00401EC0) --------------------------------------------------------
int __thiscall sub_401EC0(int this)
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
  sub_41F3D0(*(float *)(this + 168), *(float *)(this + 172), *(_DWORD *)(this + 176), 0.050000001, 200, 200, 200, 255);
  sub_41F3D0(*(float *)(this + 180), *(float *)(this + 184), *(_DWORD *)(this + 188), 0.050000001, 200, 200, 200, 255);
  sub_41F3D0(*(float *)(this + 192), *(float *)(this + 196), *(_DWORD *)(this + 200), 0.050000001, 200, 200, 200, 255);
  sub_41F3D0(*(float *)(this + 204), *(float *)(this + 208), *(_DWORD *)(this + 212), 0.050000001, 200, 200, 200, 255);
  sub_41F3D0(*(float *)(this + 216), *(float *)(this + 220), *(_DWORD *)(this + 224), 500.0, 200, 200, 200, 255);
  sub_41F3D0(*(float *)(this + 228), *(float *)(this + 232), *(_DWORD *)(this + 236), 500.0, 200, 200, 200, 255);
  sub_41F3D0(*(float *)(this + 240), *(float *)(this + 244), *(_DWORD *)(this + 248), 500.0, 200, 200, 200, 255);
  return sub_41F3D0(*(float *)(this + 252), *(float *)(this + 256), *(_DWORD *)(this + 260), 500.0, 200, 200, 200, 255);
}
