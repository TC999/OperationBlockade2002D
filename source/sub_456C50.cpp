//----- (00456C50) --------------------------------------------------------
char __cdecl sub_456C50(int self, float *a2, float a3, char a4, _DWORD *a5)
{
  double v7; // st7
  char v8; // cl
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // ecx
  int v15; // edi
  int v16; // edx
  _DWORD *v17; // eax
  int v18; // ecx
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // edx
  int v24; // ecx
  int v25; // eax
  int v26; // edi
  int v27; // edx
  _DWORD *v28; // eax
  int v29; // ecx

  if ( *(float *)(self + 1340) <= 0.0 )
    return 0;
  v7 = *(float *)(self + 1340) - a3;
  v8 = 0;
  *(float *)(self + 1340) = v7;
  if ( v7 <= 0.0 )
  {
    sub_458880(self);
    if ( a4 )
    {
      v19 = *(_DWORD *)(self + 392);
      *(_BYTE *)(self + 420) = 1;
      v20 = *(_DWORD *)(v19 + 296);
      if ( v20 )
      {
        if ( v20 != 1 )
          sub_4281B0(aInvalidInfantr);
        v21 = *(_DWORD *)(self + 456);
        if ( v21 < 9 || v21 > 11 )
          *(_DWORD *)(self + 456) = 19;
        else
          *(_DWORD *)(self + 456) = 17;
      }
      else
      {
        *(_DWORD *)(self + 456) = 15;
      }
      v22 = *(_DWORD *)(self + 392);
      v23 = 16 * *(_DWORD *)(self + 456);
      v24 = *(_DWORD *)(v23 + v22 + 376);
      v25 = v23 + v22 + 372;
      if ( v24 )
        v26 = (*(_DWORD *)(v25 + 8) - v24) >> 3;
      else
        v26 = 0;
      v27 = rand() % v26;
      v28 = (_DWORD *)(16 * *(_DWORD *)(self + 456) + *(_DWORD *)(self + 392) + 376);
      *(_DWORD *)(self + 460) = v27;
      v29 = *(_DWORD *)(*v28 + 8 * v27 + 4);
      *(_DWORD *)(self + 468) = 0;
      *(_DWORD *)(self + 464) = v29;
      *(_DWORD *)(self + 484) = 0;
      *(float *)(self + 424) = (double)*(int *)(*v28 + 8 * v27) * 0.06666667;
      *(_DWORD *)(self + 440) = *a5;
      *(_DWORD *)(self + 444) = a5[1];
      *(_DWORD *)(self + 448) = a5[2];
      *(_DWORD *)(self + 448) = 0;
      sub_46B970(self + 440, self + 440);
      if ( sub_401200((float *)(self + 440)) )
        *(_DWORD *)(self + 448) = 1065353216;
      *(float *)(self + 440) = *(float *)(self + 440) * 160.0;
      *(float *)(self + 444) = *(float *)(self + 444) * 160.0;
      *(float *)(self + 448) = *(float *)(self + 448) * 160.0;
      *(float *)(self + 448) = *(float *)(self + 424) * 150.0;
      *(float *)(self + 436) = *(float *)(self + 436) + 20.0;
    }
    else
    {
      v9 = *(_DWORD *)(self + 392);
      v10 = *(_DWORD *)(v9 + 296);
      if ( v10 )
      {
        if ( v10 == 1 )
        {
          v12 = *(_DWORD *)(self + 456);
          if ( v12 < 9 || v12 > 11 )
            *(_DWORD *)(self + 456) = 18;
          else
            *(_DWORD *)(self + 456) = 16;
        }
      }
      else
      {
        v11 = *(_DWORD *)(self + 456);
        if ( v11 == 1 || v11 == 2 )
        {
          *(_DWORD *)(self + 456) = 13;
        }
        else if ( v11 == 3 || v11 == 4 )
        {
          *(_DWORD *)(self + 456) = 14;
        }
        else
        {
          *(_DWORD *)(self + 456) = 12;
        }
      }
      v13 = 16 * *(_DWORD *)(self + 456) + v9 + 372;
      v14 = *(_DWORD *)(16 * *(_DWORD *)(self + 456) + v9 + 376);
      if ( v14 )
        v15 = (*(_DWORD *)(v13 + 8) - v14) >> 3;
      else
        v15 = 0;
      v16 = rand() % v15;
      v17 = (_DWORD *)(16 * *(_DWORD *)(self + 456) + *(_DWORD *)(self + 392) + 376);
      *(_DWORD *)(self + 460) = v16;
      v18 = *(_DWORD *)(*v17 + 8 * v16 + 4);
      *(_DWORD *)(self + 468) = 0;
      *(_DWORD *)(self + 464) = v18;
      *(_DWORD *)(self + 484) = 0;
      *(float *)(self + 424) = (double)*(int *)(*v17 + 8 * v16) * 0.06666667;
    }
    sub_44DAD0(*(int **)(*(_DWORD *)(self + 392) + 800), a2, 0.0, 0);
    return 1;
  }
  return v8;
}
