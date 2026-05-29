//----- (0041EFE0) --------------------------------------------------------
int __thiscall sub_41EFE0(float *self, int a2)
{
  int v2; // eax
  _DWORD v4[16]; // [esp+0h] [ebp-40h] BYREF

  if ( self[26] == 0.0 )
    return 0;
  memset(&v4[11], 0, 16);
  memset(&v4[6], 0, 16);
  memset(&v4[1], 0, 16);
  v4[15] = 1065353216;
  v4[10] = 1065353216;
  v4[5] = 1065353216;
  v4[0] = 1065353216;
  (*(void (__stdcall **)(_DWORD, int, _DWORD *))(**(_DWORD **)ArgList + 148))(*(_DWORD *)ArgList, 256, v4);
  v2 = *(_DWORD *)(a2 + 40);
  if ( !*(_DWORD *)(v2 + 8) )
    return 0;
  if ( *(_DWORD *)(v2 + 12) )
    return sub_41F3D0(*(float *)(v2 + 28), *(float *)(v2 + 32), *(_DWORD *)(v2 + 36), 300.0, 128, 0, 0, 255);
  return sub_41F3D0(*(float *)(v2 + 28), *(float *)(v2 + 32), *(_DWORD *)(v2 + 36), 300.0, 0, 64, 0, 255);
}
