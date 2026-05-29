//----- (00468400) --------------------------------------------------------
int __thiscall sub_468400(int self, float a2)
{
  double v3; // st7
  int v4; // edx
  int v5; // eax
  int result; // eax
  int i; // ebp
  int v8; // esi
  double v9; // st7
  long double v10; // st7
  int v11; // eax
  double v12; // st7
  double v13; // st7
  double v14; // st6
  double v15; // st7
  double v16; // st6
  _DWORD *v17; // ecx
  int v18; // [esp+0h] [ebp-1Ch]
  float v19; // [esp+4h] [ebp-18h]
  float v20; // [esp+18h] [ebp-4h]

  *(_BYTE *)(*(_DWORD *)(self + 4) + 172 * sub_405A30((_DWORD *)self, aIsland, -1, 1) + 80) = 0;
  if ( byte_520974 )
  {
    v3 = *(float *)(self + 612) - a2;
    *(float *)(self + 612) = v3;
    if ( v3 < 0.0 )
    {
      v4 = *(_DWORD *)(self + 604);
      *(_DWORD *)(self + 612) = 0x40000000;
      *(_DWORD *)(self + 604) = v4 + 1;
      if ( v4 == 3 )
        *(_DWORD *)(self + 604) = 0;
      v5 = *(_DWORD *)(self + 608) + 1;
      *(_DWORD *)(self + 608) = v5;
      if ( v5 == 4 )
        *(_DWORD *)(self + 608) = 0;
    }
  }
  *(float *)&v18 = *(float *)(dword_520970 + 72) * 0.0026179941;
  sub_4685D0(aWater, v18, 0.059999999, 0.015);
  result = *(_DWORD *)(self + 620);
  for ( i = 0; i < result; ++i )
  {
    v8 = *(_DWORD *)(*(_DWORD *)(self + 616) + 4 * i);
    if ( *(_BYTE *)(v8 + 8) )
    {
      v9 = a2 * *(float *)(v8 + 16) + *(float *)(v8 + 12);
      *(float *)(v8 + 12) = v9;
      v10 = v9 * 6.2831855;
    }
    else
    {
      v11 = *(_DWORD *)(v8 + 20);
      if ( v11 )
      {
        if ( v11 == 1 )
        {
          v15 = a2 * *(float *)(v8 + 16);
          v16 = *(float *)(v8 + 12) - v15 * 0.5;
          *(float *)(v8 + 12) = v16;
          *(float *)(v8 + 24) = *(float *)(v8 + 24) - (v15 + v15);
          if ( v16 < 0.75 )
          {
            *(_DWORD *)(v8 + 24) = 0;
            *(_DWORD *)(v8 + 12) = 1041865114;
            *(_DWORD *)(v8 + 20) = 0;
            v17 = *(_DWORD **)(dword_520970 + 240);
            if ( v17 )
              sub_44CD90(v17, COERCE_FLOAT(*(_DWORD *)v8 + 60));
          }
        }
      }
      else
      {
        v12 = a2 * *(float *)(v8 + 16);
        v20 = v12;
        v13 = v12 + *(float *)(v8 + 12);
        *(float *)(v8 + 12) = v13;
        v14 = v20 + v20 + *(float *)(v8 + 24);
        *(float *)(v8 + 24) = v14;
        if ( v14 > 1.0 )
          *(_DWORD *)(v8 + 24) = 1065353216;
        if ( v13 > 1.0 )
        {
          *(_DWORD *)(v8 + 12) = 1065353216;
          *(_DWORD *)(v8 + 20) = 1;
        }
      }
      v10 = *(float *)(v8 + 12) * 1.5707964;
    }
    v19 = sin(v10);
    sub_468750(*(_DWORD *)v8, v19);
    result = *(_DWORD *)(self + 620);
  }
  return result;
}
