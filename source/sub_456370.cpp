//----- (00456370) --------------------------------------------------------
void __cdecl sub_456370(int self)
{
  _DWORD *v2; // eax
  int v3; // edx
  int v4; // ecx
  int v5; // edi
  int v6; // edx
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  long double v12; // st7
  int v13; // eax
  int v14; // eax
  float v15; // [esp+8h] [ebp-18h]
  float v16; // [esp+8h] [ebp-18h]
  float v17; // [esp+8h] [ebp-18h]
  float v18; // [esp+Ch] [ebp-14h]
  float v19; // [esp+Ch] [ebp-14h]

  if ( *(float *)(self + 1340) > 0.0 )
  {
    *(_DWORD *)(self + 440) = 0;
    *(_DWORD *)(self + 444) = 1065353216;
    *(_DWORD *)(self + 448) = 0;
    v2 = *(_DWORD **)(self + 392);
    v3 = v2[77];
    *(_DWORD *)(self + 456) = 1;
    *(_DWORD *)(self + 452) = v3;
    v4 = v2[98];
    if ( v4 )
      v5 = (v2[99] - v4) >> 3;
    else
      v5 = 0;
    v6 = rand() % v5;
    v7 = *(_DWORD *)(self + 392);
    v8 = 16 * *(_DWORD *)(self + 456);
    *(_DWORD *)(self + 460) = v6;
    v9 = *(_DWORD *)(*(_DWORD *)(v8 + v7 + 376) + 8 * v6 + 4);
    *(_DWORD *)(self + 468) = 0;
    *(_DWORD *)(self + 464) = v9;
    *(_DWORD *)(self + 484) = 0;
    sub_41C060((_DWORD *)(self + 492), 1065353216, -1077342245, 1070141403);
    sub_41C0B0((_DWORD *)(self + 492), 0.0);
    sub_41C0B0((_DWORD *)(self + 492), 0.0);
    sub_41C0B0((_DWORD *)(self + 492), 0.0);
    sub_41C0B0((_DWORD *)(self + 492), 0.0);
    v10 = *(_DWORD *)(self + 392);
    *(_DWORD *)(self + 1328) = 0;
    v11 = *(_DWORD *)(v10 + 296);
    if ( v11 )
    {
      if ( v11 == 1 )
      {
        v17 = *(float *)(v10 + 356);
        v19 = *(float *)(v10 + 360);
        if ( v17 == v19 )
        {
          *(_BYTE *)(self + 1368) = 0;
          *(float *)(self + 1364) = v17;
        }
        else
        {
          v14 = rand();
          *(_BYTE *)(self + 1368) = 0;
          *(float *)(self + 1364) = fabs((double)v14 * 0.000030518509) * (v19 - v17) + v17;
        }
      }
    }
    else
    {
      *(_BYTE *)(self + 1344) = 0;
      v15 = *(float *)(v10 + 344);
      if ( 0.0 == v15 )
        v12 = 0.0;
      else
        v12 = fabs((double)rand() * 0.000030518509) * v15;
      v13 = *(_DWORD *)(self + 392);
      *(float *)(self + 1348) = v12;
      v16 = *(float *)(v13 + 348);
      v18 = *(float *)(v13 + 352);
      if ( v16 == v18 )
        *(float *)(self + 1356) = v16;
      else
        *(float *)(self + 1356) = fabs((double)rand() * 0.000030518509) * (v18 - v16) + v16;
    }
  }
}
