//----- (00401550) --------------------------------------------------------
int __thiscall sub_401550(float *self)
{
  double v2; // st7
  float v4; // [esp+8h] [ebp-8h]

  v2 = (double)(unsigned int)dword_5209D8;
  if ( v2 == 0.0 )
    v4 = 1.0;
  else
    v4 = (double)(unsigned int)dword_5209F4 / v2;
  sub_46C1FD((int)(self + 66), self[7], v4, self[5], self[6]);
  (*(void (__stdcall **)(_DWORD, int, float *))(**(_DWORD **)ArgList + 148))(*(_DWORD *)ArgList, 3, self + 66);
  sub_46C6DE(self + 82, self + 8, self + 11, self + 14);
  return (*(int (__stdcall **)(_DWORD, int, float *))(**(_DWORD **)ArgList + 148))(*(_DWORD *)ArgList, 2, self + 82);
}
