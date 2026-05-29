//----- (00443CD0) --------------------------------------------------------
bool __thiscall sub_443CD0(int self, int a2, int a3, float a4, float a5)
{
  int v6; // ebp
  unsigned int i; // edi
  int *v8; // eax
  int v9; // ebx
  int v10; // edx
  double v11; // st7
  float *v12; // edx
  int v13; // eax
  int v14; // edx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  double v18; // st7
  double v19; // st7
  char v21; // [esp+1Ah] [ebp-Eh]
  char v22; // [esp+1Bh] [ebp-Dh]
  int v23[3]; // [esp+1Ch] [ebp-Ch] BYREF
  float v24; // [esp+38h] [ebp+10h]

  sub_4229D0(
    "boat %d %s node %d took %0.1f damage",
    *(_DWORD *)(self + 1456),
    *(const char **)(*(_DWORD *)(self + 408) + 4),
    a2,
    a4);
  v6 = *(_DWORD *)(self + 1432);
  v22 = *(_BYTE *)(self + 392);
  v21 = 0;
  for ( i = 0; v6 && i < (*(_DWORD *)(self + 1436) - v6) / 860; ++i )
  {
    v8 = *(int **)(*(_DWORD *)(*(_DWORD *)(self + 408) + 924) + 4 * i);
    v9 = *v8;
    if ( a2 == v8[13] )
    {
      v10 = *(_DWORD *)(self + 1432);
      v21 = 1;
      v11 = *(float *)(v10 + 860 * i + 12);
      v12 = (float *)(v10 + 860 * i + 12);
      if ( v11 > 0.0 )
      {
        *v12 = *v12 - a4;
        if ( *(float *)(*(_DWORD *)(self + 1432) + 860 * i + 12) <= 0.0 )
        {
          v13 = *(_DWORD *)(v9 + 316);
          if ( v13 )
          {
            v14 = *(_DWORD *)(self + 408);
            memset(v23, 0, sizeof(v23));
            sub_44E040(
              v13,
              self + 480,
              *(_DWORD *)(self + 412),
              *(float *)(*(_DWORD *)(*(_DWORD *)(v14 + 924) + 4 * i) + 28),
              (int)v23);
          }
          sub_408640(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(self + 408) + 924) + 4 * i) + 28), 0);
          v15 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(self + 408) + 924) + 4 * i) + 32);
          if ( v15 != -1 )
            sub_408640(v15, 0);
          sub_407670(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(self + 408) + 924) + 4 * i) + 52), 0);
        }
      }
      break;
    }
  }
  if ( !LOBYTE(a5) )
  {
    v16 = *(_DWORD *)(*(_DWORD *)(self + 408) + 292);
    if ( v16 )
    {
      if ( v16 != 2 )
        a4 = 0.0;
    }
  }
  if ( (unsigned __int8)sub_4438C0(self) )
  {
    v17 = *(_DWORD *)(self + 408);
    if ( a2 == *(_DWORD *)(v17 + 616) )
    {
      v21 = 1;
      *(float *)(self + 424) = *(float *)(self + 424) - a4;
    }
    if ( a2 == *(_DWORD *)(v17 + 612) || !v21 )
      *(float *)(self + 420) = *(float *)(self + 420) - a4;
    if ( *(_BYTE *)(dword_4F5CC4 + 937) )
    {
      if ( !(unsigned __int8)sub_4438C0(self) )
      {
        sub_4477F0(1);
        *(_DWORD *)(self + 428) = 2139095039;
      }
    }
    else if ( *(float *)(v17 + 676) != 0.0 || (unsigned __int8)sub_4438C0(self) )
    {
      if ( *(_BYTE *)(self + 392) )
      {
        v24 = *(float *)(*(_DWORD *)(self + 408) + 668);
        v18 = v24 == 0.0 ? 0.0 : sub_4438E0(self) / v24;
        if ( v18 <= *(float *)(*(_DWORD *)(self + 408) + 676) )
          sub_4477F0(1);
      }
      if ( *(float *)(self + 424) <= 0.1 )
        v19 = 0.1;
      else
        v19 = *(float *)(self + 424);
      *(float *)(self + 424) = v19;
      if ( *(float *)(self + 420) <= 0.1 )
        *(float *)(self + 420) = 0.1;
      else
        *(float *)(self + 420) = *(float *)(self + 420);
    }
    else
    {
      sub_4440B0(0);
    }
  }
  return v22 && !*(_BYTE *)(self + 392);
}
