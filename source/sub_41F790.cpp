//----- (0041F790) --------------------------------------------------------
int __thiscall sub_41F790(int this, int a2)
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
           *(float *)(this + 36),
           *(float *)(this + 40),
           *(float *)(this + 44),
           *(float *)(this + 48),
           *(float *)(this + 20),
           *(float *)(this + 24),
           *(float *)(this + 28),
           *(_DWORD *)(this + 32));
}
