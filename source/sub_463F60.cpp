#include "common.h"

extern int __cdecl sub_408F30(_DWORD *self);
extern _DWORD *__cdecl sub_463EB0(_DWORD *a1, float a2, _DWORD *a3);

//----- (00463F60) --------------------------------------------------------
void __cdecl sub_463F60(int a1, int a2, float a3)
{
  double v4; // st7
  int v5; // ecx
  int v6; // edx
  int v7; // eax
  double v8; // st7
  int v9; // eax
  double v10; // st7
  int v11; // ecx
  int v12; // eax
  _DWORD *v13; // ecx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  float v17; // edx
  double v18; // st7
  double v19; // st7
  double v20; // st7
  double v21; // st6
  long double v22; // st6
  double v23; // st7
  double v24; // st6
  double v25; // st5
  double v26; // st4
  double v27; // st4
  double v28; // st3
  long double v29; // st2
  long double v30; // st2
  long double v31; // st4
  double v32; // st7
  long double v33; // st6
  long double v34; // st6
  bool v35; // zf
  long double v36; // st7
  double v37; // st6
  long double v38; // st7
  double v39; // st6
  unsigned int v40; // ecx
  double v41; // st6
  float *v42; // edx
  double v43; // st5
  float *v44; // eax
  float *v45; // eax
  float *v46; // eax
  int v47; // ecx
  int v48; // kr00_4
  int v49; // edx
  float *v50; // eax
  double v51; // st7
  double v52; // st7
  bool v53; // c3
  int v54; // eax
  double v55; // st7
  int v56; // [esp+14h] [ebp-64h] BYREF
  float *v57; // [esp+18h] [ebp-60h]
  float v58; // [esp+1Ch] [ebp-5Ch]
  float v59; // [esp+20h] [ebp-58h]
  float v60; // [esp+24h] [ebp-54h]
  int v61; // [esp+28h] [ebp-50h] BYREF
  float v62; // [esp+2Ch] [ebp-4Ch]
  float v63; // [esp+30h] [ebp-48h]
  float v64; // [esp+34h] [ebp-44h]
  float v65; // [esp+38h] [ebp-40h]
  int v66; // [esp+40h] [ebp-38h]
  float v67; // [esp+44h] [ebp-34h]
  float v68; // [esp+48h] [ebp-30h]
  float v69; // [esp+4Ch] [ebp-2Ch]
  float v70; // [esp+50h] [ebp-28h]
  float v71; // [esp+54h] [ebp-24h]
  int v72; // [esp+58h] [ebp-20h]
  float v73; // [esp+5Ch] [ebp-1Ch]
  float v74; // [esp+60h] [ebp-18h]
  int v75; // [esp+64h] [ebp-14h] BYREF
  float v76; // [esp+68h] [ebp-10h]
  float v77; // [esp+6Ch] [ebp-Ch]
  float v78; // [esp+70h] [ebp-8h]
  float v79; // [esp+74h] [ebp-4h]
  float retaddr; // [esp+78h] [ebp+0h]
  float v81; // [esp+80h] [ebp+8h]

  if ( (a3 >= 0.0000099999997 || a3 <= -0.0000099999997) && sub_408F30((_DWORD*)dword_520970) )
  {
    v4 = a3 + *(float *)(a1 + 76);
    *(float *)(a1 + 76) = v4;
    if ( v4 > *(float *)(a1 + 80) )
      *(_DWORD *)(a1 + 76) = *(_DWORD *)(a1 + 80);
    v5 = 0;
    if ( *(int *)(a1 + 64) > 0 )
    {
      v6 = 0;
      do
      {
        v7 = *(_DWORD *)(a1 + 24);
        v8 = a3 + *(float *)(v7 + v6 + 12);
        v9 = v6 + v7;
        ++v5;
        v6 += 16;
        *(float *)(v9 + 12) = v8;
      }
      while ( v5 < *(_DWORD *)(a1 + 64) );
    }
    v10 = a3 + *(float *)(a1 + 56);
    v11 = *(_DWORD *)(a1 + 64);
    *(float *)(a1 + 56) = v10;
    if ( !v11 || v10 > *(float *)(a1 + 60) )
    {
      v12 = *(_DWORD *)(a1 + 68);
      *(_DWORD *)(a1 + 56) = 0;
      if ( v11 < v12 )
        *(_DWORD *)(a1 + 64) = v11 + 1;
      memcpy((void *)(*(_DWORD *)(a1 + 24) + 16), *(const void **)(a1 + 24), 16 * (*(_DWORD *)(a1 + 64) + 0xFFFFFFF));
    }
    *(_DWORD *)(*(_DWORD *)(a1 + 24) + 12) = 0;
    v13 = *(_DWORD **)(a1 + 24);
    *v13 = *(_DWORD *)(a1 + 84);
    v13[1] = *(_DWORD *)(a1 + 88);
    v13[2] = *(_DWORD *)(a1 + 92);
    v14 = *(_DWORD *)(a1 + 100);
    v56 = 0;
    (*(void (__stdcall **)(int, _DWORD, int, int *, _DWORD, int))(*(_DWORD *)v14 + 44))(
      v14,
      0,
      24 * *(_DWORD *)(a1 + 104),
      &v56,
      0,
      a2);
    v15 = *(_DWORD *)(a1 + 104);
    v78 = 0.0;
    v79 = 0.0;
    retaddr = 0.0;
    memset(v57, 0, 4 * ((unsigned int)(24 * v15) >> 2));
    if ( sub_408F30((_DWORD*)dword_520970) )
    {
      v16 = sub_408F30((_DWORD*)dword_520970);
      v17 = *(float *)(v16 + 36);
      v78 = *(float *)(v16 + 32);
      v79 = v17;
      retaddr = *(float *)(v16 + 40);
    }
    *(_DWORD *)(a1 + 116) = 0;
    v81 = 0.0;
    while ( 1 )
    {
      v18 = *(float *)(a1 + 80);
      if ( v18 == 0.0 )
        v58 = 0.0;
      else
        v58 = (*(float *)(a1 + 80) - *(float *)(a1 + 76) + v81) / v18;
      *(float *)&v61 = 0.0;
      v62 = 0.0;
      v63 = 0.0;
      *(float *)&v75 = 0.0;
      v76 = 0.0;
      v77 = 0.0;
      sub_463EB0((_DWORD *)a1, v81, (uint32*)&v61);
      v19 = v81 + *(float *)(a1 + 72);
      if ( v19 <= *(float *)(a1 + 80) )
        v19 = *(float *)(a1 + 80);
      v60 = v19;
      sub_463EB0((_DWORD *)a1, v60, (uint32*)&v75);
      if ( *(_BYTE *)(a1 + 48) )
      {
        v20 = *(float *)&v61 - v78;
        v72 = v61;
        v73 = v62 - v79;
        v21 = v63 - retaddr;
        v74 = v21;
        v22 = sqrt(v21 * v74 + v73 * v73 + v20 * v20);
        if ( v22 >= 0.0000099999997 || v22 <= -0.0000099999997 )
          v59 = v22 == 0.0 ? 0.0 : 1.0 / v22;
        else
          v59 = 1.0 / 1.0;
        v23 = v20 * v59;
        v24 = v73 * v59;
        v25 = v74 * v59;
      }
      else
      {
        v23 = 0.0;
        v24 = 0.0;
        v25 = 1.0;
      }
      v26 = *(float *)(a1 + 44) - *(float *)(a1 + 40);
      v67 = v76;
      v68 = v77;
      v66 = v75;
      v60 = v26 * v58 + *(float *)(a1 + 40);
      v27 = *(float *)&v75 - *(float *)&v61;
      v67 = v76 - v62;
      v28 = v77 - v63;
      v29 = sqrt(v67 * v67 + v28 * v28 + v27 * v27);
      if ( v29 >= 0.0000099999997 || v29 <= -0.0000099999997 )
        v30 = v29 == 0.0 ? 0.0 : 1.0 / v29;
      else
        v30 = 1.0 / 1.0;
      *(float *)&v66 = v30 * v27;
      v67 = v67 * v30;
      v31 = v28 * v30;
      v64 = v31 * v24 - v67 * v25;
      v65 = v25 * *(float *)&v66 - v31 * v23;
      v32 = v23 * v67 - v24 * *(float *)&v66;
      v33 = sqrt(v32 * v32 + v65 * v65 + v64 * v64);
      if ( v33 >= 0.0000099999997 || v33 <= -0.0000099999997 )
        v34 = v33 == 0.0 ? 0.0 : 1.0 / v33;
      else
        v34 = 1.0 / 1.0;
      v35 = *(_BYTE *)(a1 + 49) == 0;
      v64 = v34 * v64;
      v65 = v65 * v34;
      v36 = v32 * v34;
      v37 = v60 * 0.5;
      v64 = v37 * v64;
      v65 = v65 * v37;
      v38 = v36 * v37;
      v39 = 1.0;
      if ( !v35 )
        v39 = 1.0 - v58;
      v40 = (unsigned __int8)*(_DWORD *)(a1 + 36)
          | (((unsigned __int8)*(_DWORD *)(a1 + 32)
            | (((unsigned __int8)*(_DWORD *)(a1 + 28) | ((unsigned int)(__int64)(v39 * 255.0) << 8)) << 8)) << 8);
      v41 = *(float *)(a1 + 52) == 0.0 ? v58 : v58 - *(float *)(dword_520970 + 72) * *(float *)(a1 + 52);
      v42 = v57;
      v43 = v64;
      *v57 = *(float *)&v61;
      v42[1] = v62;
      v42[2] = v63;
      v44 = v57;
      *v57 = v43 + *v57;
      v44[1] = v65 + v44[1];
      v44[2] = v38 + v44[2];
      v57[4] = 0.0;
      v57[5] = v41;
      *((_DWORD *)v57 + 3) = v40;
      v45 = v57 + 6;
      v57 = v45;
      *v45 = *(float *)&v61;
      v45[1] = v62;
      v45[2] = v63;
      v46 = v57;
      *v57 = *v57 - v64;
      v46[1] = v46[1] - v65;
      v46[2] = v46[2] - v38;
      v57[4] = 1.0;
      v57[5] = v41;
      *((_DWORD *)v57 + 3) = v40;
      v47 = *(_DWORD *)(a1 + 120);
      v57 += 6;
      v48 = *(_DWORD *)(a1 + 116);
      if ( v48 / 2 < v47 )
      {
        v70 = v62;
        v69 = *(float *)&v61;
        v49 = *(_DWORD *)(a1 + 96);
        v71 = v63;
        v50 = *(float **)(v49 + 4 * (v48 / 2));
        v70 = v62 + v76;
        v50 += 4;
        v71 = v63 + v77;
        v69 = (*(float *)&v75 + *(float *)&v61) * 0.5;
        v51 = v70 * 0.5;
        *v50 = v69;
        v70 = v51;
        v52 = v71 * 0.5;
        v50[1] = v70;
        v71 = v52;
        v50[2] = v71;
      }
      v53 = v81 == *(float *)(a1 + 76);
      v54 = *(_DWORD *)(a1 + 116) + 2;
      *(_DWORD *)(a1 + 116) = v54;
      if ( v53 )
        break;
      v55 = v81 + *(float *)(a1 + 72);
      v81 = v55;
      if ( v55 > *(float *)(a1 + 76) )
        v81 = *(float *)(a1 + 76);
    }
    *(_DWORD *)(a1 + 116) = v54 - 2;
    (*(void (__cdecl **)(_DWORD))(**(_DWORD **)(a1 + 100) + 48))(*(_DWORD *)(a1 + 100));
  }
}
