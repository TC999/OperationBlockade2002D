//----- (004198A0) --------------------------------------------------------
char __thiscall sub_4198A0(_DWORD *this, float *a2, float a3, float a4, char a5, char a6)
{
  double v7; // st7
  double v8; // st6
  float v10[3]; // [esp+4h] [ebp-Ch] BYREF

  v7 = a2[2] - *(float *)&this[5 * this[1033] + 31];
  v8 = a2[1] - *(float *)&this[5 * this[1033] + 30];
  v10[0] = *a2 - *(float *)&this[5 * this[1033] + 29];
  v10[1] = v8;
  v10[2] = v7;
  sub_46B970(v10, v10);
  return sub_4196F0((int)this, v10, a3, a4, a5, a6);
}
