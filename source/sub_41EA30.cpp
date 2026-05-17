//----- (0041EA30) --------------------------------------------------------
void __thiscall sub_41EA30(float *this, int a2, int a3)
{
  _DWORD *v5; // ebx
  double v6; // st7
  double v7; // st7
  double v8; // st7
  double v9; // st7
  double v10; // st6
  double v11; // st6
  double v12; // st6
  double v13; // st6
  double v14; // st6
  double v15; // st7
  double v16; // st6
  long double v17; // st5
  double v18; // st5
  double v19; // st7
  double v20; // st7
  double v21; // st7
  double v22; // st6
  long double v23; // st5
  double v24; // st5
  double v25; // st7
  double v26; // st7
  float v27; // [esp+0h] [ebp-2Ch]
  float v28; // [esp+0h] [ebp-2Ch]
  float v29; // [esp+0h] [ebp-2Ch]
  float v30; // [esp+0h] [ebp-2Ch]
  float v31; // [esp+10h] [ebp-1Ch]
  float v32; // [esp+14h] [ebp-18h]
  float v33; // [esp+18h] [ebp-14h]
  float v34; // [esp+18h] [ebp-14h]
  float v35; // [esp+1Ch] [ebp-10h]
  float v36; // [esp+20h] [ebp-Ch]
  float v37; // [esp+20h] [ebp-Ch]
  float v38; // [esp+24h] [ebp-8h]
  float v39; // [esp+24h] [ebp-8h]
  float v40; // [esp+24h] [ebp-8h]
  float v41; // [esp+30h] [ebp+4h]
  float v42; // [esp+30h] [ebp+4h]
  float v43; // [esp+30h] [ebp+4h]

  v5 = *(_DWORD **)(a2 + 12);
  if ( !v5 )
    return;
  if ( *(float *)(a2 + 132) != 0.0 )
  {
    v6 = *(float *)(a2 + 136);
    if ( v6 == 0.0 )
      v7 = 0.0;
    else
      v7 = (*(float *)(a2 + 132) - *(float *)(a2 + 20)) / v6;
    *(float *)(a2 + 64) = v7;
    if ( v7 >= 1.0 )
      v7 = 1.0;
    *(float *)(a2 + 64) = v7;
    if ( v7 <= 0.0 )
    {
      sub_41D9A0(a2);
      return;
    }
  }
  v8 = *(float *)(a2 + 84) - *(float *)(a2 + 72);
  if ( v8 == 0.0 )
  {
    v41 = 0.0;
  }
  else
  {
    v41 = (*(float *)(a2 + 56) - *(float *)(a2 + 72)) / v8;
    if ( v41 > 0.0 )
    {
      if ( v41 >= 1.0 )
        v41 = 1.0;
    }
    else
    {
      v41 = 0.0;
    }
  }
  v9 = 1.0;
  if ( *(_BYTE *)(a2 + 24) )
    v9 = (*(float *)(a2 + 88) - *(float *)(a2 + 76)) * v41 + *(float *)(a2 + 76);
  if ( *(_BYTE *)(a2 + 96) )
  {
    v10 = *(float *)(a2 + 100);
    if ( v10 == 0.0 )
      v11 = 0.0;
    else
      v11 = *(float *)(a2 + 36) / v10;
  }
  else
  {
    v11 = v41;
  }
  v31 = (*(float *)(a2 + 92) - *(float *)(a2 + 80)) * v11 + *(float *)(a2 + 80);
  if ( *(_BYTE *)(*(_DWORD *)(a2 + 8) + 264) )
  {
    v12 = *(float *)(a2 + 104);
    if ( v12 == 0.0 )
    {
      v42 = 0.0;
    }
    else
    {
      v42 = sqrt(
              *(float *)(a2 + 40) * *(float *)(a2 + 40)
            + *(float *)(a2 + 44) * *(float *)(a2 + 44)
            + *(float *)(a2 + 48) * *(float *)(a2 + 48))
          / v12;
      if ( v42 >= 1.0 )
        v42 = 1.0;
    }
    v31 = ((*(float *)(a2 + 128) - *(float *)(a2 + 124)) * v42 + *(float *)(a2 + 124)) * v31;
    if ( v42 < (double)*(float *)(a2 + 112) || v42 > (double)*(float *)(a2 + 116) )
    {
      if ( v42 < (double)*(float *)(a2 + 108) || v42 > (double)*(float *)(a2 + 120) )
      {
        v9 = 0.0;
      }
      else
      {
        if ( v42 >= (double)*(float *)(a2 + 112) )
        {
          v14 = *(float *)(a2 + 120) - *(float *)(a2 + 116);
          if ( v14 != 0.0 )
          {
            v9 = v9 * ((*(float *)(a2 + 120) - v42) / v14);
            goto LABEL_39;
          }
        }
        else
        {
          v13 = *(float *)(a2 + 112) - *(float *)(a2 + 108);
          if ( v13 != 0.0 )
          {
            v9 = v9 * ((v42 - *(float *)(a2 + 108)) / v13);
            goto LABEL_39;
          }
        }
        v9 = v9 * 1.0;
      }
    }
  }
LABEL_39:
  v43 = (double)*(int *)&dword_4A34C0 * 0.0099999998 * *(float *)(a2 + 64) * v9 * 0.40000001 + 0.60000002;
  if ( v43 - 0.60000002 >= 0.0000099999997 )
    sub_41CFD0((int)v5, v43);
  else
    sub_41CFD0((int)v5, 0.0);
  if ( v43 > 0.60000002 )
  {
    v15 = *(float *)(a2 + 28) - this[14];
    v33 = *(float *)(a2 + 32) - this[15];
    v16 = *(float *)(a2 + 36) - this[16];
    v17 = sqrt(v16 * v16 + v33 * v33 + v15 * v15);
    if ( v17 >= 0.0000099999997 || v17 <= -0.0000099999997 )
    {
      if ( v17 == 0.0 )
        v18 = 0.0;
      else
        v18 = 1.0 / v17;
    }
    else
    {
      v18 = 1.0 / 1.0;
    }
    v32 = v18 * v15;
    v34 = v33 * v18;
    v35 = v16 * v18;
    if ( *(_BYTE *)(a2 + 24) && *(_BYTE *)(a2 + 68) && byte_4A34BC )
    {
      v19 = 1.0
          - (-v35 * *(float *)(a2 + 48) + -v34 * *(float *)(a2 + 44) + -v32 * *(float *)(a2 + 40)) * 0.000074074072;
      if ( v19 == 0.0 )
      {
        v28 = 1.0 * v31;
        sub_41CF80((int)v5, v28);
      }
      else
      {
        v20 = ((v35 * this[19] + v34 * this[18] + v32 * this[17]) * 0.000074074072 + 1.0) / v19;
        if ( v20 < 1.1 )
        {
          if ( v20 <= 0.89999998 )
            v20 = 0.89999998;
          v29 = v20 * v31;
          sub_41CF80((int)v5, v29);
        }
        else
        {
          v27 = 1.1 * v31;
          sub_41CF80((int)v5, v27);
        }
      }
    }
    else
    {
      sub_41CF80((int)v5, v31);
    }
    if ( *(_BYTE *)(a2 + 24) )
    {
      v21 = this[22] * this[24] - this[21] * this[25];
      v38 = this[20] * this[25] - this[22] * this[23];
      v22 = this[23] * this[21] - this[20] * this[24];
      v23 = sqrt(v22 * v22 + v38 * v38 + v21 * v21);
      if ( v23 >= 0.0000099999997 || v23 <= -0.0000099999997 )
      {
        if ( v23 == 0.0 )
          v24 = 0.0;
        else
          v24 = 1.0 / v23;
      }
      else
      {
        v24 = 1.0 / 1.0;
      }
      v36 = v24 * v21;
      v39 = v38 * v24;
      v37 = -v36;
      v40 = -v39;
      v25 = -(v22 * v24) * v35 + v40 * v34 + v37 * v32;
      if ( v25 >= -0.2 )
      {
        if ( v25 > 0.2 )
          v26 = v25 - 0.2;
        else
          v26 = 0.0;
      }
      else
      {
        v26 = v25 + 0.2;
      }
      v30 = v26 * 0.1375;
      sub_41D010(v5, v30);
    }
  }
}
