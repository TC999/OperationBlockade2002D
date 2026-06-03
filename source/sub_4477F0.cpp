//----- (004477F0) --------------------------------------------------------
int __cdecl sub_4477F0(int self, int a2)
{
  int v3; // ebx
  int v4; // eax
  int v5; // eax
  int v6; // edi
  int v7; // eax
  int v8; // eax
  long double v9; // st7
  __int64 v10; // rax
  int v11; // ebx
  int v12; // edi
  int v13; // eax
  int v14; // ebp
  int v15; // eax
  int v16; // edi
  unsigned int i; // edi
  int v18; // eax
  int result; // eax
  unsigned int j; // edi
  int v21; // [esp-8h] [ebp-20h]
  int v22; // [esp-8h] [ebp-20h]
  int v23; // [esp-8h] [ebp-20h]
  float v24; // [esp+Ch] [ebp-Ch]
  float v25; // [esp+10h] [ebp-8h]

  if ( *(_BYTE *)(self + 392) )
  {
    v3 = a2;
    if ( !*(_BYTE *)(dword_4F5CC4 + 937) && (_BYTE)a2 )
      sub_462520(*(_DWORD **)(*(_DWORD *)(self + 408) + 300), dword_5216E8, 0);
    v4 = *(_DWORD *)(self + 408);
    *(_BYTE *)(self + 392) = 0;
    sub_45A420(*(float **)(dword_520970 + 236), v4, a2, *(_DWORD *)(v4 + 292) == 5, 1);
    if ( (_BYTE)a2 )
    {
      v5 = *(_DWORD *)(self + 408);
      if ( *(_DWORD *)(v5 + 292) == 2 )
      {
        v21 = *(_DWORD *)(v5 + 836);
        v6 = *(_DWORD *)(dword_520970 + 236);
        v7 = sub_45A7E0((_DWORD *)v6);
        sub_45A420((float *)v6, v7, a2, 0, v21);
        if ( !*(_BYTE *)(dword_4F5CC4 + 937) )
        {
          v8 = *(_DWORD *)(self + 408);
          v24 = *(float *)(v8 + 840);
          v25 = *(float *)(v8 + 844);
          if ( v24 == v25 )
            v9 = v24;
          else
            v9 = fabs((double)rand() * 0.000030518509) * (v25 - v24) + v24;
          v10 = (__int64)((double)*(int *)(*(_DWORD *)(self + 408) + 836) * v9);
          v11 = *(_DWORD *)(*(_DWORD *)(self + 408) + 836) - v10;
          if ( (int)v10 > 0 )
          {
            v12 = (__int64)((double)*(int *)(*(_DWORD *)(self + 408) + 836) * v9);
            do
            {
              v22 = dword_5216E8;
              v13 = sub_45A7E0(*(_DWORD **)(dword_520970 + 236));
              sub_462520(*(_DWORD **)(v13 + 304), v22, 0);
              --v12;
            }
            while ( v12 );
          }
          if ( v11 > 0 )
          {
            v14 = v11;
            do
            {
              v23 = dword_5216E8;
              v15 = sub_45A810(*(_DWORD **)(dword_520970 + 236));
              sub_462520(*(_DWORD **)(v15 + 304), v23, 0);
              --v14;
            }
            while ( v14 );
          }
          v3 = a2;
        }
      }
    }
    if ( *(_DWORD *)(*(_DWORD *)(self + 408) + 292) == 6 )
    {
      v16 = *(_DWORD *)(self + 1408) * *(_DWORD *)(self + 1412);
      if ( v16 > 0 )
      {
        sub_45A420(
          *(float **)(dword_520970 + 236),
          *(_DWORD *)(self + 1416),
          v3,
          0,
          *(_DWORD *)(self + 1408) * *(_DWORD *)(self + 1412));
        if ( (_BYTE)v3 )
        {
          if ( !*(_BYTE *)(dword_4F5CC4 + 937) )
          {
            do
            {
              sub_462520(*(_DWORD **)(*(_DWORD *)(self + 1416) + 592), dword_5216E8, 0);
              --v16;
            }
            while ( v16 );
          }
        }
      }
    }
  }
  else
  {
    v3 = a2;
  }
  if ( *(_DWORD *)(*(_DWORD *)(self + 408) + 292) == 3 && (_BYTE)v3 )
  {
    for ( i = 0; ; ++i )
    {
      v18 = *(_DWORD *)(self + 524);
      if ( !v18 || i >= (*(_DWORD *)(self + 528) - v18) >> 2 )
        break;
      sub_467A50(v3, (char)0);
    }
  }
  result = *(_DWORD *)(self + 408);
  if ( *(_DWORD *)(result + 292) == 6 )
  {
    for ( j = 0; ; ++j )
    {
      result = *(_DWORD *)(self + 1392);
      if ( !result || j >= (*(_DWORD *)(self + 1396) - result) >> 2 )
        break;
      sub_4333C0(*(_DWORD *)(result + 4 * j), v3);
    }
  }
  return result;
}
