//----- (00408FB0) --------------------------------------------------------
float *__thiscall sub_408FB0(float *this)
{
  DWORD Time; // eax
  int v3; // ecx
  double v4; // st7
  char v6; // c0
  char v7; // al
  float v8; // eax
  float *result; // eax
  double v10; // st7
  double v11; // st7
  int *v12; // eax
  float v13; // [esp-4h] [ebp-10h]

  Time = timeGetTime();
  v3 = Time - *((_DWORD *)this + 15);
  *((_DWORD *)this + 15) = Time;
  v4 = (double)v3 * 0.001;
  this[17] = v4;
  if ( !v6 )
    v4 = 0.2;
  this[17] = v4;
  v7 = *((_BYTE *)this + 20);
  this[19] = v4 + this[19];
  if ( v7 )
    this[16] = 0.0;
  else
    this[16] = v4 * this[6];
  v8 = *this;
  v13 = this[16];
  this[18] = v13 + this[18];
  (*(void (__thiscall **)(float *, float))(LODWORD(v8) + 16))(this, COERCE_FLOAT(LODWORD(v13)));
  result = (float *)*((_DWORD *)this + 21);
  if ( result )
  {
    if ( *((_BYTE *)this + 100) )
    {
      this[26] = result[8];
      this[27] = result[9];
      this[28] = result[10];
      this[26] = this[26] - this[22];
      this[27] = this[27] - this[23];
      this[28] = this[28] - this[24];
      if ( this[16] > 0.0000099999997 )
      {
        if ( this[16] == 0.0 )
        {
          this[26] = 0.0;
          this[27] = 0.0;
          this[28] = 0.0;
        }
        else
        {
          v10 = this[16];
          if ( v10 == 0.0 )
            v11 = 0.0;
          else
            v11 = 1.0 / v10;
          this[26] = v11 * this[26];
          this[27] = v11 * this[27];
          this[28] = v11 * this[28];
        }
      }
    }
    else
    {
      *((_BYTE *)this + 100) = 1;
    }
    v12 = (int *)(*((_DWORD *)this + 21) + 32);
    *((_DWORD *)this + 22) = *v12;
    *((_DWORD *)this + 23) = v12[1];
    result = (float *)v12[2];
    *((_DWORD *)this + 24) = result;
  }
  return result;
}
