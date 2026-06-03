//----- (0046C967) --------------------------------------------------------
int __stdcall sub_46C967(float *a1, unsigned int a2, unsigned int a3, float *a4, float *a5)
{
  float *v6; // eax
  unsigned int v7; // ecx
  double v8; // st7
  float *v9; // eax
  double v10; // st7
  float v12; // [esp+0h] [ebp-50h]
  char v13; // [esp+4h] [ebp-4Ch]
  unsigned int v14; // [esp+10h] [ebp-40h] BYREF
  int v15; // [esp+14h] [ebp-3Ch]
  float v16[3]; // [esp+34h] [ebp-1Ch] BYREF
  float v17; // [esp+40h] [ebp-10h]
  float v18; // [esp+44h] [ebp-Ch]
  float v19; // [esp+48h] [ebp-8h]
  int v20; // [esp+4Ch] [ebp-4h]
  float v21; // [esp+60h] [ebp+10h]
  unsigned int v22; // [esp+64h] [ebp+14h]

  v20 = 0;
  sub_46C888(&v14, a3);
  if ( !a1 )
  {
    sub_46D8FD(0, (char *)"D3DXComputeBoundingSphere: NULL input vertex array\n", v13);
    return -2005530516;
  }
  if ( !a4 )
  {
    sub_46D8FD(0, (char *)"D3DXComputeBoundingSphere: NULL center output parameter\n", v13);
    return -2005530516;
  }
  if ( !a5 )
  {
    sub_46D8FD(0, (char *)"D3DXComputeBoundingSphere: NULL radius output paramter\n", v13);
    return -2005530516;
  }
  v17 = 0.0;
  v18 = 0.0;
  v19 = 0.0;
  *a4 = 0.0;
  a4[1] = v18;
  a4[2] = v19;
  if ( a2 )
  {
    v6 = a1;
    v7 = a2;
    do
    {
      *a4 = *v6 + *a4;
      a4[1] = v6[1] + a4[1];
      v8 = v6[2];
      v6 = (float *)((char *)v6 + v15);
      --v7;
      a4[2] = v8 + a4[2];
    }
    while ( v7 );
    v12 = (float)a2;
    sub_416290(a4, v12);
    v21 = 0.0;
    v9 = a1;
    v22 = a2;
    while ( 1 )
    {
      v17 = *v9 - *a4;
      v18 = v9[1] - a4[1];
      v19 = v9[2] - a4[2];
      v16[0] = v17;
      v16[1] = v18;
      v16[2] = v19;
      v10 = sub_46C29E(v16);
      if ( v10 > v21 )
        v21 = v10;
      a1 = (float *)((char *)a1 + v15);
      if ( !--v22 )
        break;
      v9 = a1;
    }
    *a5 = sqrt(v21);
  }
  else
  {
    v20 = 0;
    *a5 = 1.0;
  }
  return v20;
}
