//----- (0042F620) --------------------------------------------------------
void __stdcall sub_42F620(int ArgList, int a2)
{
  int v2; // edi
  _DWORD *v3; // esi
  double v4; // st7
  double v5; // st6
  long double v6; // st7
  int v7; // edi
  int v8; // esi
  double v9; // st7
  double v10; // st7
  double v11; // st7
  double v12; // st7
  double v13; // st7
  double v14; // st7
  _DWORD *v15; // ecx
  int v16; // ebx
  char v17; // [esp+13h] [ebp-E5h]
  float v18; // [esp+14h] [ebp-E4h]
  float v19; // [esp+18h] [ebp-E0h]
  float v20; // [esp+20h] [ebp-D8h]
  int v21; // [esp+20h] [ebp-D8h]
  float v22; // [esp+24h] [ebp-D4h]
  float v23; // [esp+28h] [ebp-D0h]
  float v24; // [esp+30h] [ebp-C8h] BYREF
  float v25; // [esp+34h] [ebp-C4h]
  float v26; // [esp+38h] [ebp-C0h]
  float v27; // [esp+3Ch] [ebp-BCh]
  float v28; // [esp+40h] [ebp-B8h]
  int v29; // [esp+44h] [ebp-B4h]
  float v30; // [esp+48h] [ebp-B0h]
  float v31; // [esp+4Ch] [ebp-ACh]
  int v32; // [esp+50h] [ebp-A8h]
  float v33; // [esp+54h] [ebp-A4h]
  float v34; // [esp+58h] [ebp-A0h]
  int v35; // [esp+5Ch] [ebp-9Ch]
  int v36; // [esp+60h] [ebp-98h]
  int v37; // [esp+64h] [ebp-94h]
  int v38; // [esp+68h] [ebp-90h]
  float v39; // [esp+6Ch] [ebp-8Ch]
  float v40; // [esp+70h] [ebp-88h]
  float v41; // [esp+74h] [ebp-84h]
  float v42; // [esp+78h] [ebp-80h]
  float v43; // [esp+7Ch] [ebp-7Ch]
  int v44; // [esp+80h] [ebp-78h]
  int v45; // [esp+84h] [ebp-74h]
  int v46; // [esp+88h] [ebp-70h]
  int v47; // [esp+8Ch] [ebp-6Ch]
  float v48; // [esp+90h] [ebp-68h]
  float v49; // [esp+94h] [ebp-64h]
  int v50; // [esp+98h] [ebp-60h]
  float v51; // [esp+9Ch] [ebp-5Ch]
  float v52; // [esp+A0h] [ebp-58h]
  int v53; // [esp+A4h] [ebp-54h]
  float v54; // [esp+A8h] [ebp-50h]
  float v55; // [esp+ACh] [ebp-4Ch]
  float v56; // [esp+B0h] [ebp-48h]
  float v57; // [esp+B4h] [ebp-44h]
  float v58; // [esp+BCh] [ebp-3Ch]
  float v59; // [esp+C0h] [ebp-38h]
  float v60[4]; // [esp+C4h] [ebp-34h] BYREF
  float v61; // [esp+D4h] [ebp-24h]
  float v62; // [esp+D8h] [ebp-20h]
  _DWORD v63[7]; // [esp+DCh] [ebp-1Ch] BYREF

  v2 = ArgList;
  if ( ArgList > 0 )
  {
    sub_4229D0("SpecialAttackAirStrike: %d %s", ArgList, (const char *)a2);
    v20 = fabs((double)rand() * 0.000030518509);
    v3 = v63;
    do
    {
      *v3++ = sub_42FCC0(a2, LODWORD(v20), -1);
      --v2;
    }
    while ( v2 );
    if ( *(float *)(a2 + 812) == 0.0 )
      v4 = 40000.0;
    else
      v4 = *(float *)(a2 + 812);
    v21 = 0;
    v55 = 0.0;
    v5 = *(float *)(*(_DWORD *)(v63[0] + 468) + 4288) * *(float *)(*(_DWORD *)(v63[0] + 468) + 4284);
    v56 = -(v4 + v5 + v5);
    do
    {
      v23 = *(float *)(a2 + 816);
      v22 = *(float *)(a2 + 820);
      if ( v23 == v22 )
        v6 = v23;
      else
        v6 = fabs((double)rand() * 0.000030518509) * (v22 - v23) + v23;
      v7 = 0;
      v57 = v6;
      while ( 1 )
      {
        v8 = v63[v7];
        v17 = 0;
        sub_4164A0(*(_DWORD **)(v8 + 468), 0);
        v24 = v55;
        v25 = v56;
        v26 = v57;
        if ( v7 )
        {
          switch ( v7 )
          {
            case 1:
              v27 = *(float *)(a2 + 784);
              v9 = *(float *)(a2 + 784) * -2.0;
              v29 = 0;
              v18 = v27;
              v28 = v9;
              v19 = v28;
              break;
            case 2:
              v42 = -*(float *)(a2 + 784);
              v10 = *(float *)(a2 + 784) * -2.0;
              v44 = 0;
              v18 = v42;
              v43 = v10;
              v19 = v43;
              break;
            case 3:
              v11 = *(float *)(a2 + 784) + *(float *)(a2 + 784);
              v53 = 0;
              v51 = v11;
              v18 = v51;
              v52 = *(float *)(a2 + 784) * -4.0;
              v19 = v52;
              break;
            case 4:
              v12 = *(float *)(a2 + 784) * -2.0;
              v50 = 0;
              v48 = v12;
              v18 = v48;
              v49 = *(float *)(a2 + 784) * -4.0;
              v19 = v49;
              break;
            case 5:
              v13 = *(float *)(a2 + 784) * 3.0;
              v32 = 0;
              v30 = v13;
              v18 = v30;
              v31 = *(float *)(a2 + 784) * -6.0;
              v19 = v31;
              break;
            case 6:
              v14 = *(float *)(a2 + 784) * -3.0;
              v35 = 0;
              v33 = v14;
              v18 = v33;
              v34 = *(float *)(a2 + 784) * -6.0;
              v19 = v34;
              break;
          }
        }
        else
        {
          v36 = 0;
          v37 = 0;
          v38 = 0;
          v18 = 0.0;
          v19 = 0.0;
        }
        v39 = 0.0;
        v40 = v19;
        v41 = 0.0;
        v58 = 0.0;
        v59 = 0.0;
        v61 = (float)0.0 + v19;
        v62 = (float)0.0 + (float)0.0;
        v24 = v18 + (float)0.0;
        v25 = v25 + v61;
        v26 = v26 + v62;
        if ( !sub_416350(*(_DWORD *)(v8 + 468), &v24, 1) )
          break;
        v15 = *(_DWORD **)(v8 + 468);
        v45 = 0;
        v15 += 30;
        v46 = 1065353216;
        *v15 = 0;
        v47 = 0;
        v16 = 0;
        v15[1] = 1065353216;
        v15[2] = 0;
        do
        {
          v60[0] = 0.0;
          v60[1] = 1.0;
          v60[2] = 0.0;
          if ( !sub_4196F0(*(_DWORD *)(v8 + 468), v60, 3.1415927, COERCE_FLOAT(1), 1, 0) )
            break;
          if ( -*(float *)(a2 + 796) < *(float *)(sub_417140(0) + 4) )
          {
            v17 = 1;
            break;
          }
        }
        while ( ++v16 < 100 );
        v54 = *(float *)(a2 + 788);
        sub_419A30(*(_DWORD **)(v8 + 468), v54, 0.0, v54);
        *(float *)(v8 + 412) = (double)(*(_DWORD *)(*(_DWORD *)(v8 + 468) + 4132) - 5)
                             * *(float *)(*(_DWORD *)(v8 + 468) + 4288);
        if ( !v17 )
          break;
        if ( ++v7 >= ArgList )
          return;
      }
      ++v21;
    }
    while ( v21 < 100 );
  }
}
