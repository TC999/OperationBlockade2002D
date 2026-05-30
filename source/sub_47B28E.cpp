//----- (0047B28E) --------------------------------------------------------
float *__cdecl sub_47B28E(float *a1, float *a2)
{
  int v2; // ebx
  float *v3; // ecx
  double v4; // st5
  float *v5; // eax
  float *v6; // esi
  float *result; // eax
  double v8; // st5
  int v9; // [esp+8h] [ebp-10h]
  char *v10; // [esp+14h] [ebp-4h]

  v2 = (char *)a2 - (char *)a1;
  v10 = (char *)((char *)flt_4B1580 - (char *)a1);
  v3 = a1;
  v9 = 3;
  do
  {
    if ( *v3 < 0.0 != *(float *)((char *)v3 + v2) < 0.0 )
    {
      v4 = -(*v3 / (*(float *)((char *)v3 + v2) - *v3));
      if ( *v3 >= 0.0 )
      {
        v5 = a2;
        v4 = v4 - 1.0;
      }
      else
      {
        v5 = a1;
      }
      v5[2] = (a2[2] - a1[2]) * v4 + v5[2];
      v5[1] = (a2[1] - a1[1]) * v4 + v5[1];
      *v5 = (*a2 - *a1) * v4 + *v5;
    }
    v6 = (float *)((int)v3 + (_DWORD)v10);
    result = (float *)((*v3 > (double)*(float *)((char *)v3 + (_DWORD)v10))
                     ^ (*(float *)((char *)v3 + v2) > (double)*(float *)((char *)v3 + (_DWORD)v10)));
    v2 = (char *)a2 - (char *)a1;
    if ( result )
    {
      v8 = (*v6 - *v3) / (*(float *)((char *)v3 + (char *)a2 - (char *)a1) - *v3);
      if ( *v3 <= (double)*v6 )
      {
        result = a2;
        v8 = v8 - 1.0;
      }
      else
      {
        result = a1;
      }
      result[2] = (a2[2] - a1[2]) * v8 + result[2];
      result[1] = (a2[1] - a1[1]) * v8 + result[1];
      *result = (*a2 - *a1) * v8 + *result;
    }
    ++v3;
    --v9;
  }
  while ( v9 );
  return result;
}
