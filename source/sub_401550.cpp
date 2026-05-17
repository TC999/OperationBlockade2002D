//----- (00401550) --------------------------------------------------------
int __thiscall sub_401550(float *this)
{
  double v2; // st7
  float v4; // [esp+8h] [ebp-8h]

  v2 = (double)(unsigned int)dword_5209D8;
  if ( v2 == 0.0 )
    v4 = 1.0;
  else
    v4 = (double)(unsigned int)dword_5209F4 / v2;
  sub_46C1FD((int)(this + 66), this[7], v4, this[5], this[6]);
  (*(void (__stdcall **)(_DWORD, int, float *))(**(_DWORD **)ArgList + 148))(*(_DWORD *)ArgList, 3, this + 66);
  sub_46C6DE(this + 82, this + 8, this + 11, this + 14);
  return (*(int (__stdcall **)(_DWORD, int, float *))(**(_DWORD **)ArgList + 148))(*(_DWORD *)ArgList, 2, this + 82);
}
