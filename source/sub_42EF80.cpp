//----- (0042EF80) --------------------------------------------------------
void __stdcall sub_42EF80(int ArgList, int a2, float *a3)
{
  int v3; // edi
  _DWORD *v4; // esi
  double v5; // st7
  int v6; // esi
  double v7; // st6
  long double v8; // st7
  double v9; // st6
  int v10; // ebp
  int v11; // esi
  double v12; // st5
  double v13; // st7
  _DWORD *v14; // edx
  int v15; // eax
  double v16; // st7
  double v17; // st6
  long double v18; // st7
  int v19; // eax
  double v20; // st6
  char v21; // [esp+13h] [ebp-115h]
  int v22; // [esp+14h] [ebp-114h]
  float v23; // [esp+18h] [ebp-110h]
  float v24; // [esp+1Ch] [ebp-10Ch]
  float v25; // [esp+24h] [ebp-104h]
  int v26; // [esp+24h] [ebp-104h]
  float v27; // [esp+28h] [ebp-100h]
  float v28; // [esp+2Ch] [ebp-FCh]
  float v29; // [esp+30h] [ebp-F8h]
  float v30; // [esp+34h] [ebp-F4h]
  float v31; // [esp+38h] [ebp-F0h]
  float v32; // [esp+3Ch] [ebp-ECh]
  float v33; // [esp+40h] [ebp-E8h]
  float v34; // [esp+44h] [ebp-E4h]
  float v35; // [esp+48h] [ebp-E0h] BYREF
  float v36; // [esp+4Ch] [ebp-DCh]
  float v37; // [esp+50h] [ebp-D8h]
  float v38; // [esp+54h] [ebp-D4h]
  float v39; // [esp+58h] [ebp-D0h]
  float v40; // [esp+5Ch] [ebp-CCh]
  float v41; // [esp+60h] [ebp-C8h]
  float v42; // [esp+64h] [ebp-C4h]
  float v43; // [esp+68h] [ebp-C0h]
  float v44; // [esp+6Ch] [ebp-BCh]
  float v45; // [esp+70h] [ebp-B8h]
  float v46; // [esp+74h] [ebp-B4h]
  float v47; // [esp+78h] [ebp-B0h]
  float v48; // [esp+7Ch] [ebp-ACh]
  float v49; // [esp+80h] [ebp-A8h]
  float v50; // [esp+84h] [ebp-A4h]
  float v51; // [esp+88h] [ebp-A0h]
  float v52; // [esp+8Ch] [ebp-9Ch]
  float v53; // [esp+90h] [ebp-98h]
  float v54; // [esp+94h] [ebp-94h]
  float v55; // [esp+98h] [ebp-90h]
  float v56; // [esp+9Ch] [ebp-8Ch]
  float v57; // [esp+A0h] [ebp-88h]
  float v58; // [esp+A4h] [ebp-84h]
  float v59; // [esp+A8h] [ebp-80h]
  float v60; // [esp+ACh] [ebp-7Ch]
  float v61; // [esp+B0h] [ebp-78h]
  float v62; // [esp+B4h] [ebp-74h]
  float v63; // [esp+B8h] [ebp-70h]
  float v64; // [esp+BCh] [ebp-6Ch]
  float v65; // [esp+C0h] [ebp-68h]
  float v66; // [esp+C4h] [ebp-64h]
  float v67; // [esp+C8h] [ebp-60h]
  int v68; // [esp+CCh] [ebp-5Ch]
  float v69; // [esp+D4h] [ebp-54h]
  float v70; // [esp+D8h] [ebp-50h]
  float v71; // [esp+E0h] [ebp-48h]
  float v72; // [esp+E4h] [ebp-44h]
  float v73; // [esp+ECh] [ebp-3Ch]
  float v74; // [esp+F0h] [ebp-38h]
  float v75; // [esp+F8h] [ebp-30h]
  float v76; // [esp+FCh] [ebp-2Ch]
  float v77; // [esp+104h] [ebp-24h]
  float v78; // [esp+108h] [ebp-20h]
  _DWORD v79[7]; // [esp+10Ch] [ebp-1Ch] BYREF

  v3 = ArgList;
  if ( ArgList > 0 )
  {
    sub_4229D0("SpecialAttackTorpedoRun: %d %s", ArgList, (const char *)a2);
    v25 = fabs((double)rand() * 0.000030518509);
    v4 = v79;
    do
    {
      *v4++ = sub_42FCC0((_DWORD *)a2, LODWORD(v25), -1, -1);
      --v3;
    }
    while ( v3 );
    if ( *(float *)(a2 + 812) == 0.0 )
      v5 = 40000.0;
    else
      v5 = *(float *)(a2 + 812);
    v6 = 0;
    v26 = 0;
    v7 = *(float *)(*(_DWORD *)(v79[0] + 468) + 4288) * *(float *)(*(_DWORD *)(v79[0] + 468) + 4284);
    v27 = v7 + v7 + v5;
    do
    {
      v31 = *(float *)(a2 + 832);
      v34 = *(float *)(a2 + 836);
      if ( v31 == v34 )
        v8 = v31;
      else
        v8 = fabs((double)rand() * 0.000030518509) * (v34 - v31) + v31;
      if ( v6 > 50 )
        v8 = fabs((double)rand() * 0.000030518509) * 1000.0 + 3000.0;
      v9 = -*a3;
      v77 = -a3[1];
      v78 = -a3[2];
      v10 = 0;
      v73 = v77 * v27;
      v39 = v73;
      v74 = v78 * v27;
      v38 = v9 * v27;
      v40 = v74 + v8;
      while ( 1 )
      {
        v11 = v79[v10];
        v21 = 0;
        sub_4164A0(*(_DWORD **)(v11 + 468), 0);
        v12 = a3[1] - 0.0;
        v35 = v38;
        v44 = v12;
        v36 = v39;
        v37 = v40;
        v45 = 0.0 - *a3;
        v46 = 0.0;
        if ( v10 )
        {
          switch ( v10 )
          {
            case 1:
              v63 = *(float *)(a2 + 784);
              v23 = v63;
              v64 = *(float *)(a2 + 784) * -2.0;
              v65 = 0.0;
              v24 = v64;
              break;
            case 2:
              v60 = -*(float *)(a2 + 784);
              v23 = v60;
              v61 = *(float *)(a2 + 784) * -2.0;
              v62 = 0.0;
              v24 = v61;
              break;
            case 3:
              v56 = *(float *)(a2 + 784) + *(float *)(a2 + 784);
              v23 = v56;
              v57 = *(float *)(a2 + 784) * -4.0;
              v58 = 0.0;
              v24 = v57;
              break;
            case 4:
              v50 = *(float *)(a2 + 784) * -2.0;
              v23 = v50;
              v51 = *(float *)(a2 + 784) * -4.0;
              v52 = 0.0;
              v24 = v51;
              break;
            case 5:
              v53 = *(float *)(a2 + 784) * 3.0;
              v23 = v53;
              v54 = *(float *)(a2 + 784) * -6.0;
              v55 = 0.0;
              v24 = v54;
              break;
            case 6:
              v41 = *(float *)(a2 + 784) * -3.0;
              v23 = v41;
              v42 = *(float *)(a2 + 784) * -6.0;
              v43 = 0.0;
              v24 = v42;
              break;
          }
        }
        else
        {
          v47 = 0.0;
          v48 = 0.0;
          v49 = 0.0;
          v23 = 0.0;
          v24 = 0.0;
        }
        v13 = v24 * *a3;
        v71 = v24 * a3[1];
        v72 = v24 * a3[2];
        v69 = v45 * v23;
        v70 = v46 * v23;
        v75 = v69 + v71;
        v76 = v70 + v72;
        v35 = v13 + v44 * v23 + v38;
        v36 = v36 + v75;
        v37 = v37 + v76;
        if ( !sub_416350(*(_DWORD *)(v11 + 468), (_DWORD*)(&v35), 1) )
          break;
        v14 = (_DWORD *)(*(_DWORD *)(v11 + 468) + 120);
        *v14 = *(_DWORD *)a3;
        v14[1] = *((_DWORD *)a3 + 1);
        v14[2] = *((_DWORD *)a3 + 2);
        v30 = *(float *)(a2 + 840);
        v32 = *(float *)(a2 + 844);
        v33 = v30 == v32 ? *(float *)(a2 + 840) : fabs((double)rand() * 0.000030518509) * (v32 - v30) + v30;
        v22 = 0;
        while ( sub_4196F0(*(_DWORD *)(v11 + 468), a3, 3.1415927, COERCE_FLOAT(1), 1, 0) )
        {
          v15 = sub_417140(*(_DWORD **)(v11 + 468), 0);
          v66 = *(float *)v15;
          v16 = v66 * *a3;
          v67 = *(float *)(v15 + 4);
          v17 = v67 * a3[1];
          v68 = *(_DWORD *)(v15 + 8);
          if ( v16 + v17 > v33 )
          {
            v21 = 1;
            break;
          }
          if ( ++v22 >= 100 )
            break;
        }
        v59 = *(float *)(a2 + 788);
        sub_419A30(*(_DWORD **)(v11 + 468), v59, 0.0, v59);
        if ( !v21 )
          break;
        *(_DWORD *)(v11 + 1308) = 1;
        *(_DWORD *)(v11 + 1412) = 1;
        v28 = *(float *)(a2 + 1016);
        v29 = *(float *)(a2 + 1020);
        if ( v28 == v29 )
          v18 = v28;
        else
          v18 = fabs((double)rand() * 0.000030518509) * (v29 - v28) + v28;
        v19 = *(_DWORD *)(v11 + 468);
        ++v10;
        v20 = *(float *)(v19 + 4288) * *(float *)(v19 + 4284);
        *(float *)(v11 + 1416) = (v18 + v27 - (v20 + v20)) / *(float *)(v19 + 4284);
        if ( v10 >= ArgList )
          return;
      }
      v6 = ++v26;
    }
    while ( v26 < 100 );
  }
}
