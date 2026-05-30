//----- (00423060) --------------------------------------------------------
const void *__cdecl sub_423060(_DWORD *self, int a2)
{
  int v3; // eax
  int v4; // ecx
  double v5; // st7
  float *v6; // edx
  const void *result; // eax

  v3 = self[1] + 1;
  self[1] = v3;
  if ( v3 > 249 )
    v3 = 249;
  self[1] = v3;
  *(_DWORD *)(*self + 4) = a2;
  memcpy((void *)(*self + 8), (const void *)*self, 8 * self[1]);
  v4 = 1;
  v5 = 0.0;
  if ( (int)self[1] > 1 )
  {
    v6 = (float *)(*self + 12);
    do
    {
      v5 = v5 + *v6;
      if ( v5 > 3.0 )
        self[1] = v4;
      ++v4;
      v6 += 2;
    }
    while ( v4 < self[1] );
  }
  result = (const void *)*self;
  *(_DWORD *)*self = 0;
  *(_DWORD *)(*self + 4) = 0;
  return result;
}
