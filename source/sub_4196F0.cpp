//----- (004196F0) --------------------------------------------------------
char __cdecl sub_4196F0(int self, float *a2, float a3, float a4, char a5, char a6)
{
  double v8; // st7
  long double v9; // st7
  double v10; // st7
  float *v11; // eax
  char result; // al
  int v13; // [esp+8h] [ebp-18h] BYREF
  float v14; // [esp+Ch] [ebp-14h]
  float v15; // [esp+10h] [ebp-10h]
  float v16[3]; // [esp+14h] [ebp-Ch] BYREF
  float v17; // [esp+24h] [ebp+4h]
  float v18; // [esp+2Ch] [ebp+Ch]

  v16[0] = *a2;
  v16[1] = a2[1];
  v16[2] = 0.0;
  sub_46B970(v16, v16);
  v13 = *(int *)(self + 120);
  v14 = *(float *)(self + 124);
  v15 = *(float *)(self + 128);
  v17 = sub_401170((float *)&v13, v16);
  if ( *(float *)(self + 4292) <= (double)v17 )
    v17 = *(float *)(self + 4292);
  v8 = -*(float *)(self + 4292);
  if ( v17 <= v8 )
    v17 = v8;
  sub_401000((float *)&v13, v17);
  if ( a3 >= fabs(v17) )
  {
    v9 = sub_4011F0(a2);
    if ( LOBYTE(a4) )
    {
      if ( v9 >= *(float *)(self + 4296) )
        v9 = *(float *)(self + 4296);
      v18 = -*(float *)(self + 4296);
      if ( v9 <= v18 )
        v9 = v18;
    }
    v15 = tan(v9);
    sub_46B970(&v13, &v13);
  }
  v10 = *(float *)(self + 4288) * *(float *)(self + 4284);
  v11 = (float *)(self + 20 * *(_DWORD *)(self + 4132) + 116);
  *(float *)&v13 = *(float *)&v13 * v10;
  v14 = v14 * v10;
  v15 = v10 * v15;
  *(float *)&v13 = *(float *)&v13 + *v11;
  v14 = v14 + v11[1];
  v15 = v15 + v11[2];
  if ( !a6 )
    return sub_416350(self, &v13, a5) != 0;
  result = sub_419C40(&v13);
  if ( result )
    return sub_416350(self, &v13, a5) != 0;
  return result;
}
