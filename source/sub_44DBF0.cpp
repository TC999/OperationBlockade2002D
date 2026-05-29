//----- (0044DBF0) --------------------------------------------------------
void __thiscall sub_44DBF0(char *self, int a2, float *a3, float a4)
{
  int v6; // esi
  _BYTE *i; // eax
  float v8; // eax
  long double v9; // st7
  _DWORD *v10; // eax
  char *v11; // esi
  int v12; // [esp+0h] [ebp-18h]
  int v13; // [esp+1Ch] [ebp+4h]
  float v14; // [esp+24h] [ebp+Ch]

  if ( a2 )
  {
    v6 = 0;
    for ( i = self + 27160; *i; i += 16 )
    {
      if ( ++v6 >= 16 )
        return;
    }
    v8 = *(float *)(a2 + 300);
    v13 = *(int *)(a2 + 296);
    if ( *(float *)&v13 == v8 )
      v9 = *(float *)&v13;
    else
      v9 = fabs((double)rand() * 0.000030518509) * (v8 - *(float *)&v13) + *(float *)&v13;
    *(float *)&v12 = v9 * a4;
    v10 = sub_44DAD0(*(int **)(a2 + 292), a3, a4, v12);
    *(_DWORD *)&self[16 * v6 + 27168] = v10;
    if ( v10 )
    {
      v11 = &self[16 * v6];
      v11[27160] = 1;
      *((_DWORD *)v11 + 6791) = a2;
      v14 = *(float *)(a2 + 312);
      if ( 0.0 == v14 )
        *((float *)v11 + 6793) = 0.0;
      else
        *((float *)v11 + 6793) = fabs((double)rand() * 0.000030518509) * v14;
    }
  }
}
