//----- (00462B20) --------------------------------------------------------
_DWORD *__thiscall sub_462B20(_DWORD *self)
{
  _DWORD *result; // eax
  int v3; // ebp
  _DWORD *v4; // esi
  int v5; // eax
  double v6; // st7
  double v7; // st7
  int v8; // eax
  int v9; // ecx
  _DWORD *v10; // eax
  _DWORD *v11; // edx
  float v12; // [esp+8h] [ebp-B8h]
  float v13; // [esp+Ch] [ebp-B4h] BYREF
  float v14; // [esp+10h] [ebp-B0h]
  float v15; // [esp+14h] [ebp-ACh]
  _DWORD *v16; // [esp+18h] [ebp-A8h]
  int v17; // [esp+1Ch] [ebp-A4h] BYREF
  int v18; // [esp+20h] [ebp-A0h]
  int v19; // [esp+24h] [ebp-9Ch]
  _DWORD *v20; // [esp+28h] [ebp-98h]
  float v21; // [esp+2Ch] [ebp-94h]
  float v22; // [esp+30h] [ebp-90h]
  float v23; // [esp+34h] [ebp-8Ch]
  float v24; // [esp+38h] [ebp-88h]
  float v25; // [esp+3Ch] [ebp-84h]
  int v26[16]; // [esp+40h] [ebp-80h] BYREF
  int v27[16]; // [esp+80h] [ebp-40h] BYREF

  result = *(_DWORD **)(self[642] + 8 * self[645]);
  if ( (int)result[202] >= 0 && (int)result[203] >= 0 )
  {
    v3 = 0;
    result = self + 680;
    while ( *(_BYTE *)result )
    {
      ++v3;
      result += 22;
      if ( v3 >= 100 )
        return result;
    }
    v17 = 0;
    v18 = 0;
    v4 = &self[22 * v3];
    v19 = 0;
    v16 = v4;
    v13 = 0.0;
    v4[700] = 1065353216;
    v20 = v4 + 680;
    v14 = 1.0;
    *((_BYTE *)v4 + 2720) = 1;
    v15 = 0.0;
    sub_406BE0(v27);
    v5 = *(_DWORD *)(self[642] + 8 * self[645]);
    sub_407690(*(_DWORD *)(v5 + 652), *(_DWORD *)(v5 + 812), v27);
    sub_46C5C5(&v17, &v17, v27);
    sub_46B976(&v13, &v13, v27);
    v25 = fabs((double)rand() * 0.000030518509) * 0.73919827 - 0.36959913;
    v24 = fabs((double)rand() * 0.000030518509) * 0.73919827 - 0.36959913;
    v12 = fabs((double)rand() * 0.000030518509) * 0.73919827 - 0.36959913;
    sub_46C69B((int)v26, v12, v24, v25);
    sub_46B976(&v13, &v13, v26);
    sub_46B970(&v13, &v13);
    v4 += 697;
    v21 = v13 * 50.0;
    v6 = v14 * 50.0;
    *(float *)v4 = v21;
    v22 = v6;
    v7 = v15 * 50.0;
    *((float *)v4 + 1) = v22;
    v23 = v7;
    *((float *)v4 + 2) = v23;
    v8 = *(_DWORD *)(self[642] + 8 * self[645]);
    v9 = *(_DWORD *)(v8 + 808);
    if ( v9 >= 0 )
      sub_407690(*(_DWORD *)(v8 + 652), v9, v27);
    qmemcpy(v26, v27, sizeof(v26));
    v26[12] = v17;
    v26[13] = v18;
    v26[14] = v19;
    qmemcpy(v16 + 681, v26, 0x40u);
    v10 = sub_409960((_DWORD *)dword_520970, (int)self);
    v11 = v20;
    v16[701] = v10;
    v10[10] = v11;
    return (_DWORD *)sub_462DD0(v3);
  }
  return result;
}
