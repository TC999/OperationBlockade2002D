//----- (00461FD0) --------------------------------------------------------
void __thiscall sub_461FD0(_DWORD *self, float *a2, float a3, float a4, int a5, int a6)
{
  int v6; // eax
  float *v7; // edx
  double v8; // st4
  double v9; // st3
  double v10; // st4
  double v11; // st3
  double v12; // st4
  double v13; // st7
  double v14; // st7
  float v15; // [esp+0h] [ebp-4h]

  v6 = self[129];
  if ( v6 >= 0 )
  {
    v7 = (float *)&self[12 * v6 + 585 + v6];
    v8 = a2[2] - v7[5];
    v9 = a2[1] - v7[4];
    v10 = v8 * v8 + v9 * v9;
    v11 = *a2 - v7[3];
    v12 = sqrt(v10 + v11 * v11);
    if ( v12 <= a3 + v7[6] )
    {
      v13 = v12 - v7[6];
      if ( v13 <= 0.0 )
        v13 = 0.0;
      if ( a3 == 0.0 )
        v14 = 0.0;
      else
        v14 = v13 / a3;
      v15 = (1.0 - v14) * a4;
      sub_462090(v15);
    }
  }
}
