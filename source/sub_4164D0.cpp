//----- (004164D0) --------------------------------------------------------
void __thiscall sub_4164D0(float *this)
{
  int v2; // eax
  int v3; // eax
  double v4; // st7
  double v5; // st6
  double v6; // st7
  float v7; // ecx
  float v8; // edx
  float *v9; // esi
  float v10; // [esp+4h] [ebp-Ch] BYREF
  float v11; // [esp+8h] [ebp-8h]
  float v12; // [esp+Ch] [ebp-4h]

  v2 = *((_DWORD *)this + 1033);
  if ( v2 > 1 )
  {
    v3 = 5 * v2;
    v4 = this[v3 + 30] - this[v3 + 25];
    v5 = this[v3 + 29] - this[v3 + 24];
    v12 = 0.0;
    v10 = v5;
    v11 = v4;
    sub_46B970(&v10, &v10);
    v6 = v10 * v10 + v11 * v11 + v12 * v12;
    if ( v6 >= 0.0000099999997 || v6 <= -0.0000099999997 )
    {
      v7 = v11;
      v8 = v12;
      v9 = this + 30;
      *v9 = v10;
      v9[1] = v7;
      v9[2] = v8;
    }
  }
}
