//----- (00408FB0) --------------------------------------------------------
float *__cdecl sub_408FB0(float *self)
{
  DWORD Time; // eax
  int v3; // ecx
  double v4; // st7
  char v7; // al
  float v8; // eax
  float *result; // eax
  double v10; // st7
  double v11; // st7
  int *v12; // eax
  float v13; // [esp-4h] [ebp-10h]

  Time = timeGetTime();
  v3 = Time - *((_DWORD *)self + 15);
  *((_DWORD *)self + 15) = Time;
  v4 = (double)v3 * 0.001;
  self[17] = v4;
  if ( v4 >= 0.2 )
    v4 = 0.2;
  self[17] = v4;
  v7 = *((_BYTE *)self + 20);
  self[19] = v4 + self[19];
  if ( v7 )
    self[16] = 0.0;
  else
    self[16] = v4 * self[6];
  v8 = *self;
  v13 = self[16];
  self[18] = v13 + self[18];
  (*(void (__cdecl **)(float *, float))(LODWORD(v8) + 16))(self, COERCE_FLOAT(LODWORD(v13)));
  result = (float *)*((_DWORD *)self + 21);
  if ( result )
  {
    if ( *((_BYTE *)self + 100) )
    {
      self[26] = result[8];
      self[27] = result[9];
      self[28] = result[10];
      self[26] = self[26] - self[22];
      self[27] = self[27] - self[23];
      self[28] = self[28] - self[24];
      if ( self[16] > 0.0000099999997 )
      {
        if ( self[16] == 0.0 )
        {
          self[26] = 0.0;
          self[27] = 0.0;
          self[28] = 0.0;
        }
        else
        {
          v10 = self[16];
          if ( v10 == 0.0 )
            v11 = 0.0;
          else
            v11 = 1.0 / v10;
          self[26] = v11 * self[26];
          self[27] = v11 * self[27];
          self[28] = v11 * self[28];
        }
      }
    }
    else
    {
      *((_BYTE *)self + 100) = 1;
    }
    v12 = (int *)(*((_DWORD *)self + 21) + 32);
    *((_DWORD *)self + 22) = *v12;
    *((_DWORD *)self + 23) = v12[1];
    result = (float *)v12[2];
    *((_DWORD *)self + 24) = (uint32)(uintptr_t)(result);
  }
  return result;
}
