//----- (0045EA80) --------------------------------------------------------
int __cdecl sub_45EA80(int self, int a2)
{
  int result; // eax
  int v4; // ebp
  int *v5; // esi
  double v6; // st7
  float v7; // ecx
  double v8; // st7
  float v9; // [esp+18h] [ebp-94h]
  float v10[3]; // [esp+1Ch] [ebp-90h]
  float v11; // [esp+28h] [ebp-84h]
  int v12; // [esp+2Ch] [ebp-80h]
  int v13; // [esp+30h] [ebp-7Ch]
  int v14; // [esp+34h] [ebp-78h]
  int v15; // [esp+38h] [ebp-74h]
  int v16; // [esp+3Ch] [ebp-70h]
  int v17; // [esp+40h] [ebp-6Ch]
  int v18; // [esp+44h] [ebp-68h]
  int v19; // [esp+48h] [ebp-64h]
  int v20; // [esp+4Ch] [ebp-60h]
  int v21; // [esp+50h] [ebp-5Ch]
  int v22; // [esp+54h] [ebp-58h]
  int v23; // [esp+58h] [ebp-54h]
  int v24; // [esp+5Ch] [ebp-50h]
  int v25; // [esp+60h] [ebp-4Ch]
  int v26; // [esp+64h] [ebp-48h]
  int v27; // [esp+68h] [ebp-44h]
  int v28[16]; // [esp+6Ch] [ebp-40h] BYREF

  sub_462F90((_DWORD *)self);
  result = a2;
  v4 = 0;
  v12 = -1082130432;
  v13 = -1082130432;
  v14 = -1082130432;
  v15 = -1082130432;
  v16 = 1070141403;
  v17 = -1077342245;
  v18 = -1082130432;
  v19 = -1082130432;
  v20 = 0;
  v21 = 1074137746;
  v22 = -1073345902;
  v23 = -1082130432;
  v24 = 1061752795;
  v25 = -1085730853;
  v26 = 1075235812;
  v27 = -1072247836;
  *(_DWORD *)(self + 524) = a2;
  if ( a2 > 0 )
  {
    v5 = (int *)(self + 2356);
    do
    {
      if ( *(_DWORD *)(self + 524) == 1 )
      {
        v6 = *(float *)(self + 428);
        v10[1] = 0.0;
        v10[2] = 0.0;
        *(v5 - 1) = 0;
        v11 = v6;
        v7 = v11;
        *v5 = 0;
        *((float *)v5 + 1) = v7;
      }
      else if ( *(int *)(self + 520) > 1 )
      {
        v9 = *(float *)(self + 432);
        v8 = *(float *)(self + 428);
        *(v5 - 1) = 0;
        v10[0] = v8;
        *(float *)v5 = v9;
        v5[1] = LODWORD(v10[0]);
        sub_401000((float *)v5 - 1, v10[4 * *(_DWORD *)(self + 520) + v4]);
      }
      sub_4074B0((_DWORD *)*(v5 - 3), 0);
      sub_407600((_DWORD *)*(v5 - 3), 0, *(v5 - 1), *v5, v5[1]);
      sub_4074B0((_DWORD *)*(v5 - 2), 0);
      sub_407600((_DWORD *)*(v5 - 2), 0, *(v5 - 1), *v5, v5[1]);
      v5[3] = 0;
      v5[4] = 0;
      v5[5] = 0;
      v5[7] = 0;
      v5[6] = 0;
      v5[8] = 0;
      v5[2] = *(_DWORD *)(self + 424);
      sub_407690(*(v5 - 3), *(_DWORD *)(self + 440), (_DWORD *)v28);
      sub_4010D0((_DWORD *)(v5 - 1), (int)v28);
      result = *(_DWORD *)(self + 524);
      ++v4;
      v5 += 13;
    }
    while ( v4 < result );
  }
  return result;
}
