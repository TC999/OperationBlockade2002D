//----- (00449C40) --------------------------------------------------------
char __thiscall sub_449C40(char *this, int a2, _DWORD *a3, _DWORD *a4, char a5, char a6, float a7, int a8)
{
  int v9; // eax
  int v11; // esi
  int v12; // edx
  _DWORD *v13; // eax
  float v14; // eax
  float v15; // ecx
  int v16; // eax
  double v17; // st7
  double v18; // st7
  double v19; // st6
  double v20; // st6
  double v21; // st5
  double v22; // st4
  float v23; // eax
  float v24; // ecx
  float v25; // edx
  double v26; // rt0
  double v27; // st5
  float v28; // eax
  float v29; // ecx
  float v30; // edx
  _DWORD *v31; // eax
  int v32; // edx
  int v33; // eax
  int v34; // ecx
  int v35; // eax
  float *v36; // ecx
  int v37; // eax
  char *v38; // esi
  int v39; // eax
  int v40; // edx
  int v41; // eax
  int v42; // ecx
  float v44; // [esp+8h] [ebp-6Ch] BYREF
  float v45; // [esp+Ch] [ebp-68h]
  float v46; // [esp+10h] [ebp-64h]
  float v47; // [esp+14h] [ebp-60h] BYREF
  float v48; // [esp+18h] [ebp-5Ch]
  float v49; // [esp+1Ch] [ebp-58h]
  float v50; // [esp+20h] [ebp-54h]
  float v51; // [esp+24h] [ebp-50h]
  int v52; // [esp+28h] [ebp-4Ch]
  float v53; // [esp+2Ch] [ebp-48h] BYREF
  float v54; // [esp+30h] [ebp-44h]
  float v55; // [esp+34h] [ebp-40h]
  float v56; // [esp+38h] [ebp-3Ch] BYREF
  float v57; // [esp+3Ch] [ebp-38h]
  float v58; // [esp+40h] [ebp-34h]
  _WORD v59[3]; // [esp+44h] [ebp-30h] BYREF
  int v60; // [esp+4Ah] [ebp-2Ah]
  char v61; // [esp+4Eh] [ebp-26h]
  int v62; // [esp+4Fh] [ebp-25h]
  int v63; // [esp+53h] [ebp-21h]
  int v64; // [esp+57h] [ebp-1Dh]
  int v65; // [esp+5Bh] [ebp-19h]
  int v66; // [esp+5Fh] [ebp-15h]
  int v67; // [esp+63h] [ebp-11h]
  int v68; // [esp+70h] [ebp-4h]
  void *v69; // [esp+8Ch] [ebp+18h]

  v9 = sub_449C10(this);
  if ( v9 == -1 )
    return 0;
  v11 = (int)&this[136 * v9 + 32];
  *(_DWORD *)(v11 + 4) = a2;
  *(_BYTE *)v11 = 1;
  *(_BYTE *)(v11 + 1) = 0;
  *(_BYTE *)(v11 + 8) = a5;
  *(_DWORD *)(v11 + 76) = *a3;
  *(_DWORD *)(v11 + 80) = a3[1];
  v12 = a3[2];
  *(_BYTE *)(v11 + 9) = 1;
  *(_DWORD *)(v11 + 84) = v12;
  *(_DWORD *)(v11 + 68) = 0;
  *(_DWORD *)(v11 + 64) = 0;
  *(_DWORD *)(v11 + 60) = 0;
  *(_DWORD *)(v11 + 56) = 0;
  *(_DWORD *)(v11 + 48) = 0;
  *(_DWORD *)(v11 + 44) = 0;
  *(_DWORD *)(v11 + 40) = 0;
  *(_DWORD *)(v11 + 36) = 0;
  *(_DWORD *)(v11 + 28) = 0;
  *(_DWORD *)(v11 + 24) = 0;
  *(_DWORD *)(v11 + 20) = 0;
  *(_DWORD *)(v11 + 16) = 0;
  *(_DWORD *)(v11 + 72) = 1065353216;
  *(_DWORD *)(v11 + 52) = 1065353216;
  *(_DWORD *)(v11 + 32) = 1065353216;
  *(_DWORD *)(v11 + 12) = 1065353216;
  v13 = (_DWORD *)sub_4010C0(v11 + 12);
  *v13 = *a3;
  v13[1] = a3[1];
  v13[2] = a3[2];
  *(_DWORD *)(v11 + 88) = *a4;
  *(_DWORD *)(v11 + 92) = a4[1];
  *(_DWORD *)(v11 + 96) = a4[2];
  *(float *)(v11 + 100) = a7;
  if ( a7 != 0.0 )
  {
    v14 = *(float *)(v11 + 92);
    v15 = *(float *)(v11 + 96);
    v44 = *(float *)(v11 + 88);
    v45 = v14;
    v46 = v15;
    sub_46B970(&v44, &v44);
    v52 = 0;
    v49 = 0.0;
    v50 = v45 - 0.0;
    v47 = v50;
    v51 = 0.0 - v44;
    v48 = v51;
    v56 = v51 * v46 - 0.0 * v45;
    v53 = v56;
    v57 = 0.0 * v44 - v50 * v46;
    v54 = v57;
    v58 = v50 * v45 - v51 * v44;
    v55 = v58;
    sub_46B970(&v47, &v47);
    sub_46B970(&v53, &v53);
    v16 = *(_DWORD *)(v11 + 4);
    v17 = *(float *)(v16 + 408);
    v44 = v17 * v44;
    v45 = v17 * v45;
    v18 = v17 * v46;
    v46 = v18;
    v19 = *(float *)(v16 + 408);
    v47 = v19 * v47;
    v48 = v19 * v48;
    v49 = v19 * v49;
    v20 = *(float *)(v16 + 408);
    v21 = v20 * v53;
    v22 = v20 * v54;
    v23 = v48;
    v24 = v49;
    *(float *)(v11 + 12) = v47;
    v25 = v44;
    *(float *)(v11 + 16) = v23;
    v54 = v22;
    v26 = v21;
    v27 = v20 * v55;
    v28 = v45;
    *(float *)(v11 + 20) = v24;
    v29 = v54;
    *(float *)(v11 + 28) = v25;
    *(_DWORD *)(v11 + 24) = 0;
    *(float *)(v11 + 32) = v28;
    v55 = v27;
    v30 = v55;
    *(_DWORD *)(v11 + 40) = 0;
    *(float *)(v11 + 36) = v18;
    *(float *)(v11 + 48) = v29;
    *(float *)(v11 + 52) = v30;
    *(float *)(v11 + 44) = v26;
    *(_DWORD *)(v11 + 56) = 0;
    *(_DWORD *)(v11 + 72) = 1065353216;
  }
  sub_46B970(v11 + 104, a8);
  *(_DWORD *)(v11 + 116) = *(_DWORD *)(*(_DWORD *)(v11 + 4) + 296);
  *(_BYTE *)(v11 + 124) = a6;
  *(_BYTE *)(v11 + 125) = a6;
  v31 = sub_409960((_DWORD *)dword_520970, (int)this);
  *(_DWORD *)(v11 + 120) = v31;
  v31[10] = v11;
  *(_DWORD *)(*(_DWORD *)(v11 + 120) + 28) = 0;
  *(_DWORD *)(*(_DWORD *)(v11 + 120) + 36) = 0;
  *(_DWORD *)(*(_DWORD *)(v11 + 120) + 12) = 4;
  if ( *(_DWORD *)(*(_DWORD *)(v11 + 4) + 388) == 2 )
  {
    *(_DWORD *)(*(_DWORD *)(v11 + 120) + 12) = 5;
    *(_DWORD *)(*(_DWORD *)(v11 + 120) + 36) = *(_DWORD *)(*(_DWORD *)(v11 + 4) + 392);
    *(_DWORD *)(*(_DWORD *)(v11 + 120) + 28) = 1;
    *(_BYTE *)(*(_DWORD *)(v11 + 120) + 44) = 1;
    *(_DWORD *)(*(_DWORD *)(v11 + 120) + 56) = -1;
    *(_BYTE *)(*(_DWORD *)(v11 + 120) + 96) = 1;
    sub_44AF40(v11);
  }
  if ( !*(_DWORD *)(*(_DWORD *)(v11 + 4) + 388) )
  {
    *(_DWORD *)(*(_DWORD *)(v11 + 120) + 12) = 5;
    *(_DWORD *)(*(_DWORD *)(v11 + 120) + 36) = *(_DWORD *)(*(_DWORD *)(v11 + 4) + 392);
    *(_DWORD *)(*(_DWORD *)(v11 + 120) + 28) = 1;
    *(_DWORD *)(*(_DWORD *)(v11 + 120) + 48) = *(_DWORD *)(*(_DWORD *)(v11 + 4) + 396);
    *(_BYTE *)(*(_DWORD *)(v11 + 120) + 44) = 1;
    *(_DWORD *)(*(_DWORD *)(v11 + 120) + 56) = -1;
    *(_DWORD *)(*(_DWORD *)(v11 + 120) + 80) = 0;
    *(_DWORD *)(*(_DWORD *)(v11 + 120) + 84) = 0;
    *(_DWORD *)(*(_DWORD *)(v11 + 120) + 88) = 1065353216;
    *(_DWORD *)(*(_DWORD *)(v11 + 120) + 92) = 1065353216;
    sub_44AF40(v11);
  }
  v32 = *(_DWORD *)(v11 + 4);
  *(_DWORD *)(v11 + 128) = 0;
  v33 = *(_DWORD *)(v32 + 336);
  if ( v33 )
    *(_DWORD *)(v11 + 128) = sub_44E3D0(v33, v11 + 12);
  *(_DWORD *)(v11 + 132) = 0;
  if ( *(_DWORD *)(a2 + 348) )
  {
    v69 = operator new(0x7Cu);
    v68 = 0;
    if ( v69 )
    {
      LOBYTE(v34) = *(_BYTE *)(a2 + 381);
      v35 = sub_463B30(
              *(_DWORD *)(a2 + 348),
              *(_DWORD *)(a2 + 352),
              *(_DWORD *)(a2 + 356),
              *(_DWORD *)(a2 + 360),
              *(_DWORD *)(a2 + 364),
              *(float *)(a2 + 368),
              *(_DWORD *)(a2 + 372),
              *(_DWORD *)(a2 + 376),
              *(_BYTE *)(a2 + 380),
              v34,
              *(_DWORD *)(a2 + 384));
    }
    else
    {
      v35 = 0;
    }
    *(_DWORD *)(v11 + 132) = v35;
    v68 = -1;
    sub_4010D0(&v56, v11 + 12);
    v36 = (float *)(*(_DWORD *)(v11 + 132) + 84);
    *v36 = v56;
    v36[1] = v57;
    v36[2] = v58;
    v37 = *(_DWORD *)(v11 + 132);
    v38 = this;
    sub_428680(this, v37);
  }
  else
  {
    v38 = this;
  }
  if ( !a6
    && (*(_BYTE *)(dword_4F5CC4 + 936) || *(_BYTE *)(dword_4F5CC4 + 937))
    && a5
    && (*(_DWORD *)(a2 + 8) != *((_DWORD *)v38 + 7) || *((float *)v38 + 6) > 0.1) )
  {
    *((_DWORD *)v38 + 6) = 0;
    *((_DWORD *)v38 + 7) = *(_DWORD *)(a2 + 8);
    v61 = a5;
    v62 = *a3;
    v39 = a3[2];
    v63 = a3[1];
    v64 = v39;
    v40 = a4[1];
    v41 = a4[2];
    v65 = *a4;
    v42 = *(_DWORD *)(a2 + 8);
    v66 = v40;
    v60 = v42;
    v67 = v41;
    sub_4117A0((_DWORD *)dword_4F5CC4, (_DWORD *)0x701, v59, 35, 8, 1000);
  }
  return 1;
}
