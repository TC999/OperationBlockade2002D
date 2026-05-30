//----- (0043A540) --------------------------------------------------------
char __cdecl sub_43A540(int self, int a2)
{
  int v3; // ecx
  int v4; // eax
  double v5; // st7
  double v6; // st7
  int v7; // ecx
  double v8; // st6
  double v9; // st6
  int v10; // ebx
  int v11; // ebp
  float v13; // [esp+0h] [ebp-30h]
  float v14; // [esp+Ch] [ebp-24h]
  float v15; // [esp+10h] [ebp-20h]
  float v16; // [esp+14h] [ebp-1Ch]
  float v17; // [esp+18h] [ebp-18h]
  float v18; // [esp+18h] [ebp-18h]
  float v19; // [esp+1Ch] [ebp-14h]
  float v20; // [esp+20h] [ebp-10h]
  float v21; // [esp+24h] [ebp-Ch]
  float v22; // [esp+28h] [ebp-8h]
  float v23; // [esp+28h] [ebp-8h]

  v3 = *(_DWORD *)(self + 48);
  if ( v3 )
  {
    sub_41D0C0(v3, *(float *)&a2);
    v13 = (double)*(int *)&dword_4A34C0 * 0.0099999998 * 0.40000001 + 0.60000002;
    sub_41CFD0(*(_DWORD *)(self + 48), v13);
  }
  v4 = *(_DWORD *)(self + 44);
  if ( v4 != 2 )
    *(float *)(self + 40) = *(float *)(dword_520970 + 68) + *(float *)(self + 40);
  v14 = 1.0;
  if ( !v4 )
  {
    v5 = *(float *)(self + 40) * 0.5;
    v14 = v5;
    if ( v5 >= 1.0 )
    {
      v14 = 1.0;
      *(_DWORD *)(self + 44) = 1;
    }
  }
  v6 = v14 * v14;
  v7 = *(_DWORD *)(self + 24);
  v15 = (double)(unsigned int)dword_5209F4 * 0.5;
  v16 = (double)(unsigned int)dword_5209D8 * 0.5;
  v17 = v6 * 384.0;
  v8 = v6 * 512.0 * 0.5;
  v19 = v15 - v8;
  v20 = v8 + v15;
  v9 = v17 * 0.5;
  v18 = v16 - v9;
  v22 = v9 + v16;
  v21 = v6 * 256.0 + v18;
  if ( v7 )
  {
    sub_413090(v7, v19, v18, v15, v21);
    sub_413090(*(_DWORD *)(self + 28), v15, v18, v20, v21);
    sub_413090(*(_DWORD *)(self + 32), v19, v21, v15, v22);
    sub_413090(*(_DWORD *)(self + 36), v15, v21, v20, v22);
    v10 = self + 24;
    v11 = 4;
    do
    {
      v23 = (1.0 - (1.0 - v14) * (1.0 - v14)) * 3600.0 * 0.017453292;
      sub_413100(LODWORD(v15), LODWORD(v16), LODWORD(v23));
      v10 += 4;
      --v11;
    }
    while ( v11 );
  }
  if ( *(_DWORD *)(self + 44) == 2 && *(float *)(*(_DWORD *)(self + 24) + 72) <= -1.0 )
    sub_43A520((int *)self);
  return sub_428620((_DWORD *)self, a2);
}
