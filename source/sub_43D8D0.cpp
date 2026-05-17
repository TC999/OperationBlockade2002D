//----- (0043D8D0) --------------------------------------------------------
int __thiscall sub_43D8D0(_DWORD *this)
{
  int v2; // edi
  int v3; // ebp
  int v4; // edx
  int v5; // eax
  int v6; // edi
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // ebp
  int v11; // eax
  double v12; // st7
  int v13; // eax
  const char *v14; // eax
  const char *v15; // eax
  int v17; // [esp+8h] [ebp-8h]
  int v18; // [esp+Ch] [ebp-4h]

  v2 = *(_DWORD *)(*(_DWORD *)(dword_520970 + 236) + 72);
  v18 = v2;
  if ( !*(_BYTE *)(dword_4F5CC4 + 936) && !*(_BYTE *)(dword_4F5CC4 + 937) )
    sub_45EA00(v2);
  this[14] = 0;
  this[13] = 0;
  v3 = dword_520970;
  v4 = 0;
  v17 = *(_DWORD *)(*(_DWORD *)(dword_520970 + 280) + 11784);
  if ( v17 > 0 )
  {
    do
    {
      v5 = *(_DWORD *)(v3 + 280);
      v6 = *(_DWORD *)(*(_DWORD *)(v5 + 11780) + 4 * v4);
      v7 = *(_DWORD *)(v5 + 4 * (v4 + 88 * *(_DWORD *)(v5 + 512)) + 972);
      if ( v7 > 0 )
      {
        v8 = v7 * *(_DWORD *)(v6 + 296);
        v9 = this[13] + 1;
        this[14] += v8;
        this[13] = v9;
        v3 = dword_520970;
      }
      ++v4;
    }
    while ( v4 < v17 );
    v2 = v18;
  }
  v10 = *(_DWORD *)(v3 + 280);
  v11 = *(_DWORD *)(v10 + 512);
  if ( v11 >= 0 )
    v12 = *(float *)(352 * v11 + v10 + 924);
  else
    v12 = 0.0;
  this[14] += (__int64)v12;
  sub_4624D0((__int64)v12);
  v13 = this[14];
  this[16] = v13;
  if ( !*(_BYTE *)(dword_4F5CC4 + 936) && !*(_BYTE *)(dword_4F5CC4 + 937) )
  {
    this[15] = sub_45E9B0(v2, v13);
    this[16] = sub_45EA60(*(_DWORD *)(dword_520970 + 280));
  }
  v14 = sub_424350(this, aLevelscore);
  sub_421190(*((_DWORD *)v14 + 28), "%d", this[14]);
  v15 = sub_424350(this, aGamescore);
  return sub_421190(*((_DWORD *)v15 + 28), "%d", this[16]);
}
