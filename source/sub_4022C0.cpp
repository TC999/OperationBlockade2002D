//----- (004022C0) --------------------------------------------------------
double __thiscall sub_4022C0(char *self, int a2, int a3, int a4)
{
  _DWORD v5[3]; // [esp+0h] [ebp-18h] BYREF
  _BYTE v6[8]; // [esp+Ch] [ebp-Ch] BYREF
  float v7; // [esp+14h] [ebp-4h]

  v5[1] = a3;
  v5[0] = a2;
  v5[2] = a4;
  sub_46C5C5(v6, v5, self + 328);
  return v7;
}
