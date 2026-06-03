//----- (0044DD20) --------------------------------------------------------
void __cdecl sub_44DD20(char *self, float *a2, _DWORD *a3)
{
  int v4; // edi
  _BYTE *i; // eax
  char *v6; // esi
  long double v7; // st7
  long double v8; // st7
  long double v9; // st7
  long double v10; // st7
  _DWORD *v11; // eax
  float v13; // [esp+14h] [ebp+4h]
  float v14; // [esp+14h] [ebp+4h]
  float v15; // [esp+14h] [ebp+4h]
  float v16; // [esp+14h] [ebp+4h]
  float v17; // [esp+18h] [ebp+8h]
  float v18; // [esp+18h] [ebp+8h]
  float v19; // [esp+18h] [ebp+8h]
  float v20; // [esp+18h] [ebp+8h]

  if ( a2 )
  {
    v4 = 0;
    for ( i = (_BYTE *)(self + 27416); *i; i += 40 )
    {
      if ( ++v4 >= 64 )
        return;
    }
    v6 = &self[40 * v4];
    v6[27416] = 1;
    *((_DWORD *)v6 + 6855) = (uint32)(uintptr_t)a2;
    *((_DWORD *)v6 + 6856) = *a3;
    *((_DWORD *)v6 + 6857) = a3[1];
    *((_DWORD *)v6 + 6858) = a3[2];
    v13 = a2[73];
    v17 = a2[74];
    if ( v13 == v17 )
      v7 = v13;
    else
      v7 = fabs((double)rand() * 0.000030518509) * (v17 - v13) + v13;
    *((float *)v6 + 6859) = v7;
    v14 = a2[75];
    v18 = a2[76];
    if ( v14 == v18 )
      v8 = v14;
    else
      v8 = fabs((double)rand() * 0.000030518509) * (v18 - v14) + v14;
    *(float *)&self[40 * v4 + 27440] = v8;
    v15 = a2[77];
    v19 = a2[78];
    if ( v15 == v19 )
      v9 = v15;
    else
      v9 = fabs((double)rand() * 0.000030518509) * (v19 - v15) + v15;
    *((float *)v6 + 6861) = v9;
    v16 = a2[79];
    v20 = a2[80];
    if ( v16 == v20 )
      v10 = v16;
    else
      v10 = fabs((double)rand() * 0.000030518509) * (v20 - v16) + v16;
    *((float *)v6 + 6862) = v10;
    v11 = sub_409960((_DWORD *)dword_520970, (int)self);
    *((_DWORD *)v6 + 6863) = (uint32)(uintptr_t)v11;
    v11[10] = (uint32)(uintptr_t)(v6 + 27416);
    *(_DWORD *)(*((_DWORD *)v6 + 6863) + 28) = 0;
    *(_DWORD *)(*((_DWORD *)v6 + 6863) + 36) = 0;
    *(_DWORD *)(*((_DWORD *)v6 + 6863) + 12) = 3;
  }
}
