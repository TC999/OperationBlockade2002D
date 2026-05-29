//----- (00402170) --------------------------------------------------------
char __thiscall sub_402170(float *self, float a2, float a3, float a4, float a5, float a6, float a7)
{
  int v7; // edx
  float *v8; // ecx
  double v9; // st7
  double v10; // st6
  double v11; // st6
  double v12; // st7
  double v13; // st6
  double v14; // st7
  float v16; // [esp+0h] [ebp-14h]
  float v17; // [esp+0h] [ebp-14h]
  float v18; // [esp+4h] [ebp-10h]
  float v19; // [esp+4h] [ebp-10h]
  float v20; // [esp+8h] [ebp-Ch]
  float v21; // [esp+8h] [ebp-Ch]
  float v22; // [esp+Ch] [ebp-8h]
  float v23; // [esp+10h] [ebp-4h]

  v7 = 0;
  v8 = self + 19;
  do
  {
    v18 = a4 * v8[1];
    v9 = a3 * *v8;
    v22 = v18 + v9;
    v10 = a2 * *(v8 - 1);
    v16 = v10;
    if ( v10 + v22 + v8[2] < 0.0 )
    {
      v11 = a7 * v8[1];
      v20 = v11;
      v23 = v11 + v9;
      if ( v23 + v16 + v8[2] < 0.0 )
      {
        v12 = a6 * *v8;
        v13 = v18 + v12;
        if ( v13 + v16 + v8[2] < 0.0 )
        {
          v21 = v20 + v12;
          if ( v21 + v16 + v8[2] < 0.0 )
          {
            v14 = a5 * *(v8 - 1);
            v17 = v14;
            if ( v14 + v22 + v8[2] < 0.0 && v17 + v23 + v8[2] < 0.0 )
            {
              v19 = v13;
              if ( v17 + v19 + v8[2] < 0.0 && v17 + v21 + v8[2] < 0.0 )
                return 0;
            }
          }
        }
      }
    }
    ++v7;
    v8 += 4;
  }
  while ( v7 < 6 );
  return 1;
}
