//----- (00423060) --------------------------------------------------------
const void *__thiscall sub_423060(_DWORD *this, int a2)
{
  int v3; // eax
  int v4; // ecx
  double v5; // st7
  float *v6; // edx
  const void *result; // eax

  v3 = this[1] + 1;
  this[1] = v3;
  if ( v3 > 249 )
    v3 = 249;
  this[1] = v3;
  *(_DWORD *)(*this + 4) = a2;
  memcpy((void *)(*this + 8), (const void *)*this, 8 * this[1]);
  v4 = 1;
  v5 = 0.0;
  if ( (int)this[1] > 1 )
  {
    v6 = (float *)(*this + 12);
    do
    {
      v5 = v5 + *v6;
      if ( v5 > 3.0 )
        this[1] = v4;
      ++v4;
      v6 += 2;
    }
    while ( v4 < this[1] );
  }
  result = (const void *)*this;
  *(_DWORD *)*this = 0;
  *(_DWORD *)(*this + 4) = 0;
  return result;
}
