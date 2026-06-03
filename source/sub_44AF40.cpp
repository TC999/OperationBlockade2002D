//----- (0044AF40) --------------------------------------------------------
int __stdcall sub_44AF40(int a1)
{
  int v1; // eax
  int v2; // eax
  double v3; // st7
  double v4; // st7
  double v5; // st6
  double v6; // st6
  double v7; // st5
  double v8; // st4
  float v9; // eax
  float v10; // ecx
  float v11; // edx
  double v12; // rt0
  double v13; // st5
  float v14; // eax
  float v15; // ecx
  float v16; // edx
  _DWORD *v18; // eax
  _DWORD *v19; // edx
  _DWORD *v20; // eax
  _DWORD *v21; // ecx
  char v22; // al
  double v23; // st7
  int v24; // edx
  double v25; // st7
  double v26; // st7
  float v27; // ecx
  float v28; // eax
  double v29; // st7
  int v30; // ecx
  double v31; // st7
  float v32; // eax
  float v33; // edx
  int v34; // eax
  double v35; // st7
  float v36; // edx
  float v37; // ecx
  float v38; // ecx
  int v39; // edx
  float v40; // eax
  char v41; // [esp+0h] [ebp-44h]
  float v42; // [esp+8h] [ebp-3Ch] BYREF
  float v43; // [esp+Ch] [ebp-38h]
  float v44; // [esp+10h] [ebp-34h]
  float v45; // [esp+14h] [ebp-30h] BYREF
  float v46; // [esp+18h] [ebp-2Ch]
  float v47; // [esp+1Ch] [ebp-28h]
  float v48; // [esp+20h] [ebp-24h]
  float v49; // [esp+24h] [ebp-20h]
  float v50; // [esp+28h] [ebp-1Ch]
  float v51; // [esp+2Ch] [ebp-18h] BYREF
  float v52; // [esp+30h] [ebp-14h]
  float v53; // [esp+34h] [ebp-10h]
  float v54; // [esp+38h] [ebp-Ch] BYREF
  float v55; // [esp+3Ch] [ebp-8h]
  float v56; // [esp+40h] [ebp-4h]

  v1 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 388);
  if ( v1 == 1 )
  {
    sub_41BC00((_DWORD *)dword_520A50, 1, 0, 1, 0, 1, -1, 1);
    if ( *(float *)(a1 + 100) == 0.0 )
    {
      v42 = *(float *)(a1 + 88);
      v43 = *(float *)(a1 + 92);
      v44 = *(float *)(a1 + 96);
      sub_46B970((int)&v42, (int)&v42);
      v50 = 0.0;
      v47 = 0.0;
      v48 = v43 - 0.0;
      v45 = v48;
      v49 = 0.0 - v42;
      v46 = v49;
      v54 = v49 * v44 - 0.0 * v43;
      v51 = v54;
      v55 = 0.0 * v42 - v48 * v44;
      v52 = v55;
      v56 = v48 * v43 - v49 * v42;
      v53 = v56;
      sub_46B970((int)&v45, (int)&v45);
      sub_46B970((int)&v51, (int)&v51);
      v2 = *(_DWORD *)(a1 + 4);
      v3 = *(float *)(v2 + 408);
      v42 = v3 * v42;
      v43 = v3 * v43;
      v4 = v3 * v44;
      v44 = v4;
      v5 = *(float *)(v2 + 408);
      v45 = v5 * v45;
      v46 = v5 * v46;
      v47 = v5 * v47;
      v6 = *(float *)(v2 + 408);
      v7 = v6 * v51;
      v8 = v6 * v52;
      v9 = v46;
      v10 = v47;
      *(float *)(a1 + 12) = v45;
      v11 = v42;
      *(float *)(a1 + 16) = v9;
      v52 = v8;
      v12 = v7;
      v13 = v6 * v53;
      v14 = v43;
      *(float *)(a1 + 20) = v10;
      v15 = v52;
      *(float *)(a1 + 28) = v11;
      *(_DWORD *)(a1 + 24) = 0;
      *(float *)(a1 + 32) = v14;
      v53 = v13;
      v16 = v53;
      *(_DWORD *)(a1 + 40) = 0;
      *(float *)(a1 + 36) = v4;
      *(float *)(a1 + 48) = v15;
      *(float *)(a1 + 52) = v16;
      *(float *)(a1 + 44) = v12;
      *(_DWORD *)(a1 + 56) = 0;
      *(_DWORD *)(a1 + 72) = 1065353216;
    }
    (*(void (__stdcall **)(_DWORD, int, int))(**(_DWORD **)ArgList + 148))(*(_DWORD *)ArgList, 256, a1 + 12);
    return sub_406110(
             *(_DWORD **)(*(_DWORD *)(a1 + 4) + 400),
             *(_DWORD *)(a1 + 4),
             *(_DWORD *)(*(_DWORD *)(a1 + 4) + 404),
             0,
             0,
             v41);
  }
  else if ( v1 )
  {
    if ( v1 == 2 )
    {
      v20 = (_DWORD *)sub_4010C0(a1 + 12);
      v21 = (_DWORD *)(*(_DWORD *)(a1 + 120) + 16);
      *v21 = *v20;
      v21[1] = v20[1];
      v21[2] = v20[2];
      sub_4010D0((_DWORD *)&v51, a1 + 12);
      sub_46B970((int)&v54, a1 + 88);
      v22 = *(_BYTE *)(a1 + 125);
      v23 = *(float *)(*(_DWORD *)(a1 + 4) + 412);
      v45 = v54 * v23;
      v46 = v55 * v23;
      v48 = v51 + v45;
      v49 = v52 + v46;
      v50 = v53 + v23 * v56;
      if ( v22 )
      {
        v42 = 0.0;
        v43 = 0.0;
        v44 = 1.0;
      }
      else
      {
        v47 = 0.0;
        v44 = 0.0;
        v45 = v55 - 0.0;
        v42 = v45;
        v46 = 0.0 - v54;
        v43 = v46;
        sub_46B970((int)&v42, (int)&v42);
      }
      v24 = *(_DWORD *)(a1 + 120) + 100;
      v25 = *(float *)(*(_DWORD *)(a1 + 4) + 416);
      v42 = v25 * v42;
      v43 = v25 * v43;
      v44 = v25 * v44;
      v45 = v48 - v42;
      v46 = v49 - v43;
      v26 = v50 - v44;
      v27 = v46;
      *(float *)v24 = v45;
      v47 = v26;
      v28 = v47;
      *(float *)(v24 + 4) = v27;
      v29 = v48;
      *(float *)(v24 + 8) = v28;
      v30 = *(_DWORD *)(a1 + 120) + 124;
      v45 = v29 + v42;
      v46 = v49 + v43;
      v31 = v50 + v44;
      v32 = v46;
      *(float *)v30 = v45;
      v47 = v31;
      v33 = v47;
      *(float *)(v30 + 4) = v32;
      *(float *)(v30 + 8) = v33;
      v34 = *(_DWORD *)(a1 + 120) + 136;
      v48 = v51 + v42;
      v49 = v52 + v43;
      v35 = v53 + v44;
      v36 = v49;
      *(float *)v34 = v48;
      v50 = v35;
      v37 = v50;
      *(float *)(v34 + 4) = v36;
      *(float *)(v34 + 8) = v37;
      v48 = v51 - v42;
      v49 = v52 - v43;
      v38 = v49;
      v39 = *(_DWORD *)(a1 + 120) + 112;
      v50 = v53 - v44;
      *(float *)v39 = v48;
      v40 = v50;
      *(float *)(v39 + 4) = v38;
      *(float *)(v39 + 8) = v40;
    }
    return 0;
  }
  else
  {
    v18 = (_DWORD *)sub_4010C0(a1 + 12);
    v19 = (_DWORD *)(*(_DWORD *)(a1 + 120) + 16);
    *v19 = *v18;
    v19[1] = v18[1];
    v19[2] = v18[2];
    return 0;
  }
}
