//----- (004565B0) --------------------------------------------------------
int __cdecl sub_4565B0(int self)
{
  int v2; // eax
  float *v3; // edi
  float *v4; // ebx
  int v5; // ecx
  int v6; // edx
  int v7; // ecx
  int v8; // eax
  double v9; // st7
  float *v10; // ecx
  double v11; // st7
  int result; // eax
  float v13; // [esp+10h] [ebp-8h]
  float v14; // [esp+14h] [ebp-4h]

  v2 = *(_DWORD *)(self + 456);
  if ( v2 >= 1 && v2 <= 4 )
  {
    v3 = (float *)(self + 472);
    v4 = (float *)(self + 440);
    if ( sub_401100((float *)(self + 440), (float *)(self + 472)) >= 0.78539819 )
      v5 = *(float *)(self + 476) * *v4 - *(float *)(self + 444) * *v3 <= 0.0 ? 4 : 2;
    else
      v5 = *(float *)(self + 476) * *v4 - *(float *)(self + 444) * *v3 <= 0.0 ? 3 : 1;
    v6 = *(_DWORD *)(self + 460);
    *(_DWORD *)(self + 456) = v5;
    *(_DWORD *)(self + 464) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(self + 392) + 16 * v5 + 376) + 8 * v6 + 4);
  }
  v7 = *(_DWORD *)(self + 392);
  v8 = dword_5216EC[*(_DWORD *)(v7 + 292)];
  if ( *(_DWORD *)(self + 468) >= *(_DWORD *)(*(_DWORD *)(v8 + 8) + 12 * *(_DWORD *)(self + 464) + 4) )
    *(_DWORD *)(self + 468) = 0;
  v13 = *(float *)(self + 432);
  v9 = *(float *)(v7 + 320) * *(float *)(v7 + 316);
  v10 = (float *)(*(_DWORD *)(self + 1376) + 16);
  v11 = v9 + *(float *)(self + 436);
  *v10 = *(float *)(self + 428);
  v14 = v11;
  v10[1] = v13;
  v10[2] = v14;
  *(_DWORD *)(*(_DWORD *)(self + 1376) + 36) = *(_DWORD *)(*(_DWORD *)(v8 + 16)
                                                         + 264
                                                         * *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v8 + 8)
                                                                                 + 12 * *(_DWORD *)(self + 464)
                                                                                 + 8)
                                                                     + 36 * *(_DWORD *)(self + 468))
                                                         + 260);
  *(_BYTE *)(*(_DWORD *)(self + 1376) + 60) = 1;
  *(_DWORD *)(*(_DWORD *)(self + 1376) + 64) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v8 + 8)
                                                                     + 12 * *(_DWORD *)(self + 464)
                                                                     + 8)
                                                         + 36 * *(_DWORD *)(self + 468)
                                                         + 4);
  *(_DWORD *)(*(_DWORD *)(self + 1376) + 68) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v8 + 8)
                                                                     + 12 * *(_DWORD *)(self + 464)
                                                                     + 8)
                                                         + 36 * *(_DWORD *)(self + 468)
                                                         + 8);
  *(_DWORD *)(*(_DWORD *)(self + 1376) + 72) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v8 + 8)
                                                                     + 12 * *(_DWORD *)(self + 464)
                                                                     + 8)
                                                         + 36 * *(_DWORD *)(self + 468)
                                                         + 12);
  *(_DWORD *)(*(_DWORD *)(self + 1376) + 76) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v8 + 8)
                                                                     + 12 * *(_DWORD *)(self + 464)
                                                                     + 8)
                                                         + 36 * *(_DWORD *)(self + 468)
                                                         + 16);
  *(_DWORD *)(*(_DWORD *)(self + 1376) + 80) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v8 + 8)
                                                                     + 12 * *(_DWORD *)(self + 464)
                                                                     + 8)
                                                         + 36 * *(_DWORD *)(self + 468)
                                                         + 20);
  *(_DWORD *)(*(_DWORD *)(self + 1376) + 88) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v8 + 8)
                                                                     + 12 * *(_DWORD *)(self + 464)
                                                                     + 8)
                                                         + 36 * *(_DWORD *)(self + 468)
                                                         + 28);
  *(_DWORD *)(*(_DWORD *)(self + 1376) + 84) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v8 + 8)
                                                                     + 12 * *(_DWORD *)(self + 464)
                                                                     + 8)
                                                         + 36 * *(_DWORD *)(self + 468)
                                                         + 24);
  result = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v8 + 8) + 12 * *(_DWORD *)(self + 464) + 8)
                     + 36 * *(_DWORD *)(self + 468)
                     + 32);
  *(_DWORD *)(*(_DWORD *)(self + 1376) + 92) = result;
  *(float *)(*(_DWORD *)(self + 1376) + 32) = *(float *)(*(_DWORD *)(self + 392) + 316) * 1.4141999;
  return result;
}
