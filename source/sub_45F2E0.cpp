//----- (0045F2E0) --------------------------------------------------------
float *__cdecl sub_45F2E0(float *self, int a2, int a3, int a4, int a5, float a6)
{
  float *result; // eax

  result = &self[7 * a2];
  *((_DWORD *)result + 2880) = a3;
  if ( a3 )
  {
    *((_DWORD *)result + 2881) = a4;
    result[2882] = 0.0;
    *((_DWORD *)result + 2883) = a5;
    self[7 * a2 + 2884] = a6;
    result[2885] = 0.0;
    result[2886] = 0.0;
  }
  return result;
}
