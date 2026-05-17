//----- (00463EB0) --------------------------------------------------------
_DWORD *__thiscall sub_463EB0(_DWORD *this, float a2, _DWORD *a3)
{
  int v3; // edi
  _DWORD *v4; // eax
  _DWORD *result; // eax
  float *v6; // edx
  int v7; // esi
  float *v8; // ecx
  int v9; // edi
  double v10; // st7
  double v11; // st7
  double v12; // st7

  v3 = this[16];
  if ( v3 == 1 )
  {
    v4 = (_DWORD *)this[6];
    *a3 = *v4;
    a3[1] = v4[1];
    result = (_DWORD *)v4[2];
    a3[2] = result;
  }
  else
  {
    v6 = (float *)this[6];
    v7 = 0;
    v8 = v6 + 4;
    if ( v6[7] < (double)a2 )
    {
      v9 = v3 - 2;
      do
      {
        if ( v7 == v9 )
          break;
        v10 = v8[7];
        v8 += 4;
        ++v7;
        v6 = v8 - 4;
      }
      while ( v10 < a2 );
    }
    v11 = v8[3] - v6[3];
    if ( v11 == 0.0 )
      v12 = 0.0;
    else
      v12 = (a2 - v6[3]) / v11;
    result = a3;
    *(float *)a3 = (*v8 - *v6) * v12 + *v6;
    *((float *)a3 + 1) = (v8[1] - v6[1]) * v12 + v6[1];
    *((float *)a3 + 2) = (v8[2] - v6[2]) * v12 + v6[2];
  }
  return result;
}
