//----- (00468CA0) --------------------------------------------------------
char __cdecl sub_468CA0(int *self, float *a2, int *a3, float *a4, int *a5)
{
  int v6; // ecx
  int *v10; // eax
  int v11; // edx
  double v12; // st7
  double v13; // st6
  double v14; // st5
  int v15; // ebp
  float *v16; // ecx
  double v17; // st7
  char v19; // c0
  float v21; // [esp-20h] [ebp-84h]
  int v22; // [esp-1Ch] [ebp-80h]
  int v23; // [esp-18h] [ebp-7Ch]
  int v24; // [esp-14h] [ebp-78h]
  int v25; // [esp-10h] [ebp-74h]
  int v26; // [esp-Ch] [ebp-70h]
  int v27; // [esp+0h] [ebp-64h]
  int v28; // [esp+4h] [ebp-60h]
  float v29; // [esp+10h] [ebp-54h]
  int v30; // [esp+14h] [ebp-50h] BYREF
  float v31; // [esp+18h] [ebp-4Ch]
  float v32; // [esp+1Ch] [ebp-48h]
  int *v33; // [esp+20h] [ebp-44h]
  int v34[16]; // [esp+24h] [ebp-40h] BYREF
  float v35; // [esp+68h] [ebp+4h]
  float v36; // [esp+6Ch] [ebp+8h]
  float v37; // [esp+70h] [ebp+Ch]

  v33 = self;
  v6 = self[6];
  if ( !v6 )
    return 0;
  v26 = a3[2];
  v25 = a3[1];
  v24 = *a3;
  v23 = *((_DWORD *)a2 + 2);
  v22 = *((_DWORD *)a2 + 1);
  v21 = *a2;
  v32 = 3.4028235e38;
  if ( !sub_407A90(v6, (int)a4, (int)a2, SLODWORD(v21), v22, v23, v24, v25, v26, &v30, a4, v27, v28) )
    goto LABEL_7;
  sub_407690(self[6], v30, v34);
  sub_46C5C5(a4, a4, v34);
  v10 = &dword_4AE740;
  if ( dword_4AE740 == -1 )
  {
LABEL_6:
    v12 = *a2 - *a4;
    v13 = a2[1] - a4[1];
    v14 = a2[2] - a4[2];
    v32 = v14 * v14 + v13 * v13 + v12 * v12;
LABEL_7:
    v36 = 0.0;
    v35 = 1.0;
    v15 = 0;
    while ( 1 )
    {
      v37 = v35 * *a2 + v36 * *(float *)a3;
      v29 = v35 * a2[1] + v36 * *((float *)a3 + 1);
      v16 = (float *)v33[11];
      v31 = v35 * a2[2] + v36 * *((float *)a3 + 2);
      v17 = sub_4510D0(v16, v37, v29);
      if ( v17 >= v31 )
      {
        if ( v19 )
          break;
      }
      ++v15;
      v36 = v36 + 0.1;
      v35 = v35 - 0.1;
      if ( v15 > 10 )
        return 0;
    }
    if ( a5 )
      *a5 = 2;
    a4[2] = v17;
    *a4 = v37;
    a4[1] = v29;
    return 1;
  }
  while ( v10[2] != v30 )
  {
    v11 = v10[3];
    v10 += 3;
    if ( v11 == -1 )
      goto LABEL_6;
  }
  if ( a5 )
    *a5 = *v10;
  return 1;
}
