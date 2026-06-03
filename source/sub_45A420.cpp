extern char aYouSalvagedAmm[];
extern char aBoat[];
extern char aInfantry[];
extern char aTank[];

//----- (0045A420) --------------------------------------------------------
int __cdecl sub_45A420(float *self, int a2, int a3, char a4, int a5)
{
  int v5; // edi
  float *v6; // ebx
  int v7; // ebp
  _DWORD *v8; // eax
  int v9; // eax
  int v10; // eax
  long double v11; // st7
  int v12; // edx
  int v13; // ecx
  long double v14; // st7
  int v15; // eax
  double v16; // st6
  float *v17; // edx
  int v18; // ebp
  int v19; // edi
  int v20; // esi
  int v21; // eax
  long double v22; // st7
  double v23; // st7
  int v24; // ecx
  _DWORD *v25; // ecx
  int result; // eax
  int v27; // esi
  int v28; // ecx
  _DWORD *v29; // eax
  int v30; // eax
  _DWORD *v31; // eax
  float v32; // [esp+10h] [ebp-10h]
  float v33; // [esp+10h] [ebp-10h]
  float v34; // [esp+14h] [ebp-Ch]
  float v36; // [esp+2Ch] [ebp+Ch]
  float v37; // [esp+2Ch] [ebp+Ch]
  float v38; // [esp+2Ch] [ebp+Ch]
  float v39; // [esp+2Ch] [ebp+Ch]

  v5 = a2;
  v6 = self;
  v7 = a5;
  v8 = (_DWORD *)(*((_DWORD *)self + 30) + 4 * *(_DWORD *)(a2 + 8));
  *v8 += a5;
  if ( a4 )
  {
    if ( (_BYTE)a3 )
    {
      sub_4696E0(a2, aAirplane);
      v9 = sub_436A90(*(_DWORD *)(dword_520970 + 224));
      sub_421190(v9, aYouSalvagedAmm);
      v10 = *((_DWORD *)v6 + 19);
      v37 = *(float *)(v10 + 324);
      v32 = *(float *)(v10 + 328);
      if ( v37 == v32 )
        v11 = v37;
      else
        v11 = fabs((double)rand() * 0.000030518509) * (v32 - v37) + v37;
      v12 = *((_DWORD *)v6 + 19);
      v13 = *(_DWORD *)(dword_520970 + 280);
      v14 = v11 * *(float *)(v12 + 256);
      v15 = *(_DWORD *)(v13 + 512);
      if ( v15 >= 0 )
        v16 = *(float *)(352 * v15 + v13 + 924);
      else
        v16 = 0.0;
      v38 = *(float *)(v12 + 256) - v16;
      if ( v14 >= v38 )
        v14 = v38;
      v17 = (float *)(352 * *(_DWORD *)(v13 + 512) + v13 + 924);
      if ( *v17 > 0.0 )
      {
        *(float *)(v13 + 11612) = v14 + *(float *)(v13 + 11612);
        *v17 = v14 + *v17;
      }
      v18 = 0;
      v19 = 0;
      v20 = 260;
      do
      {
        v21 = *((_DWORD *)v6 + 19);
        v39 = *(float *)(v21 + 332);
        v33 = *(float *)(v21 + 336);
        if ( v39 == v33 )
          v22 = v39;
        else
          v22 = fabs((double)rand() * 0.000030518509) * (v33 - v39) + v39;
        v34 = (double)*(int *)(*((_DWORD *)v6 + 19) + v20) * v22;
        v23 = (double)(*(_DWORD *)(*((_DWORD *)v6 + 19) + v20) - sub_4629B0(v18, 0));
        if ( v34 < v23 )
          v23 = v34;
        v20 += 4;
        v19 += 16;
        v24 = *(_DWORD *)(dword_520970 + 280);
        *(_DWORD *)(v19 + v24 + 11612) += (__int64)v23;
        v6 = self;
        v25 = (_DWORD *)(v24 + 4 * (v18 + 88 * *(_DWORD *)(v24 + 512)) + 932);
        ++v18;
        *v25 += (__int64)v23;
      }
      while ( v20 < 300 );
      v7 = a5;
      v5 = a2;
    }
  }
  else
  {
    v36 = 1.0;
    if ( (unsigned __int8)sub_4696E0(a2, aAirplane) )
    {
      v36 = *(float *)(a2 + 296);
      sub_443210(*(_DWORD **)(dword_520970 + 212), a2, a3, a5);
LABEL_4:
      v6[28] = (double)a5 * v36 + v6[28];
      goto LABEL_30;
    }
    if ( (unsigned __int8)sub_4696E0(a2, aBoat) )
    {
      v6[28] = (double)a5 * *(float *)(a2 + 296) + v6[28];
    }
    else if ( (unsigned __int8)sub_4696E0(a2, aInfantry) )
    {
      v6[28] = (double)a5 * *(float *)(a2 + 300) + v6[28];
    }
    else
    {
      if ( !(unsigned __int8)sub_4696E0(a2, aTank) )
        goto LABEL_4;
      v6[28] = (double)a5 * *(float *)(a2 + 292) + v6[28];
    }
  }
LABEL_30:
  result = *((_DWORD *)v6 + 19);
  v27 = 0;
  if ( *(int *)(result + 428) > 0 )
  {
    v28 = 0;
    do
    {
      v29 = *(_DWORD **)(*(_DWORD *)(result + 424) + 4 * v27);
      if ( v5 == v29[1] || v5 == *v29 )
      {
        v30 = *((_DWORD *)v6 + 53);
        if ( (_BYTE)a3 )
          v31 = (_DWORD *)(v30 + v28 + 8);
        else
          v31 = (_DWORD *)(v30 + v28 + 4);
        *v31 += v7;
        *((_BYTE *)v6 + 96) = 1;
      }
      result = *((_DWORD *)v6 + 19);
      ++v27;
      v28 += 12;
    }
    while ( v27 < *(_DWORD *)(result + 428) );
  }
  return result;
}
