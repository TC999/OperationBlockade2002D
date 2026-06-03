#include "common.h"

//----- (0040EDB0) --------------------------------------------------------
int __cdecl sub_40EDB0(int self, int a2)
{
  int v3; // ecx
  double v4; // st7
  double v5; // st7
  float *v6; // esi
  float v7; // eax
  double v8; // st7
  double v9; // st7
  double v10; // st7
  double v11; // st7
  double v12; // st7
  double v13; // st6
  double v14; // st7
  double v15; // st6
  double v16; // st7
  float v17; // ecx
  float v18; // edx
  float v19; // eax
  int v20; // ecx
  int v21; // edx
  float v23; // [esp+0h] [ebp-9Ch]
  float v24; // [esp+0h] [ebp-9Ch]
  float v25; // [esp+0h] [ebp-9Ch]
  float v26; // [esp+0h] [ebp-9Ch]
  float v27; // [esp+4h] [ebp-98h]
  float v28; // [esp+4h] [ebp-98h]
  float v29; // [esp+4h] [ebp-98h]
  float v30; // [esp+4h] [ebp-98h]
  float v31; // [esp+8h] [ebp-94h]
  float v32; // [esp+8h] [ebp-94h]
  float v33; // [esp+8h] [ebp-94h]
  float v34; // [esp+8h] [ebp-94h]
  float v35; // [esp+8h] [ebp-94h]
  float v36; // [esp+8h] [ebp-94h]
  float v37; // [esp+14h] [ebp-88h]
  float v38; // [esp+14h] [ebp-88h]
  float v39; // [esp+14h] [ebp-88h]
  float v40; // [esp+18h] [ebp-84h]
  float v41; // [esp+18h] [ebp-84h]
  float v42; // [esp+18h] [ebp-84h]
  float v43; // [esp+18h] [ebp-84h]
  int v44; // [esp+1Ch] [ebp-80h]
  float v45; // [esp+1Ch] [ebp-80h]
  float v46; // [esp+20h] [ebp-7Ch]
  float v47; // [esp+20h] [ebp-7Ch]
  float v48; // [esp+20h] [ebp-7Ch]
  float v49; // [esp+24h] [ebp-78h]
  float v50; // [esp+24h] [ebp-78h]
  float v51; // [esp+24h] [ebp-78h]
  int v52; // [esp+28h] [ebp-74h] BYREF
  float v53; // [esp+2Ch] [ebp-70h]
  float v54; // [esp+30h] [ebp-6Ch]
  float v55; // [esp+34h] [ebp-68h]
  float v56; // [esp+38h] [ebp-64h]
  float v57; // [esp+3Ch] [ebp-60h]
  int v58; // [esp+40h] [ebp-5Ch] BYREF
  float v59; // [esp+44h] [ebp-58h]
  float v60; // [esp+48h] [ebp-54h]
  float v61; // [esp+4Ch] [ebp-50h]
  float v62; // [esp+50h] [ebp-4Ch]
  float v63; // [esp+54h] [ebp-48h]
  float v64; // [esp+58h] [ebp-44h]
  int v65[16]; // [esp+5Ch] [ebp-40h] BYREF
  float v66; // [esp+A0h] [ebp+4h]

  v40 = 0.0;
  v3 = dword_520970;
  v61 = 0.0;
  v66 = *(float *)(dword_520970 + 68);
  if ( !*(_BYTE *)(dword_520970 + 296) )
  {
    v37 = *(float *)(dword_520970 + 24);
    v4 = sub_408F80(0, 0);
    if ( v37 == 0.0 )
      v40 = 0.0;
    else
      v40 = v4 / v37;
    v38 = *(float *)(dword_520970 + 24);
    v5 = sub_408F80(0, 1);
    if ( v38 == 0.0 )
      v61 = 0.0;
    else
      v61 = v5 / v38;
    v3 = dword_520970;
  }
  v39 = 1.0;
  if ( !*(_BYTE *)(v3 + 296) )
  {
    if ( sub_408F40(42) || sub_408F40(54) )
      v39 = 2.5;
    if ( sub_408F40(29) || sub_408F40(157) )
      v39 = v39 * 20.0;
  }
  v6 = (float *)(self + 32);
  v7 = *(float *)(self + 396);
  v49 = *(float *)(self + 400);
  *(float *)(self + 32) = *(float *)(self + 392);
  *(float *)(self + 36) = v7;
  *(float *)(self + 40) = v49;
  *(float *)&v52 = *(float *)(self + 44) - *(float *)(self + 32);
  v53 = *(float *)(self + 48) - *(float *)(self + 36);
  v54 = *(float *)(self + 52) - *(float *)(self + 40);
  sub_46B970((int)(uintptr_t)&v52, (int)(uintptr_t)&v52);
  if ( *(float *)&v52 < 0.0000099999997
    && *(float *)&v52 > -0.0000099999997
    && v53 < 0.0000099999997
    && v53 > -0.0000099999997 )
  {
    if ( (v8 = v54 - 1.0, v8 < 0.0000099999997) && v8 > -0.0000099999997
      || (v9 = v54 - -1.0, v9 < 0.0000099999997) && v9 > -0.0000099999997 )
    {
      v54 = 0.0;
      *(float *)&v52 = 0.0;
      v53 = 1.0;
    }
  }
  v31 = v40 * -0.5 * 0.017453292;
  sub_401000((float *)&v52, v31);
  v60 = 0.0;
  *(float *)&v44 = v53 - 0.0;
  v58 = v44;
  v46 = 0.0 - *(float *)&v52;
  v59 = v46;
  sub_46B970((int)(uintptr_t)&v58, (int)(uintptr_t)&v58);
  v10 = v61;
  if ( *(_BYTE *)(self + 416) )
    v11 = v10 * 0.5 * 0.017453292;
  else
    v11 = v10 * -0.5 * 0.017453292;
  v32 = v11;
  sub_46BFED((int)v65, (int)&v58, v32);
  sub_46C5C5((float *)(void *)&v52, (float *)(void *)&v52, (float *)(void *)v65);
  v45 = v59 * v54 - v60 * v53;
  v12 = v60 * *(float *)&v52;
  v13 = *(float *)&v58 * v54;
  *(float *)(self + 56) = v45;
  v47 = v12 - v13;
  v14 = *(float *)&v58 * v53;
  v15 = v59 * *(float *)&v52;
  *(float *)(self + 60) = v47;
  v50 = v14 - v15;
  *(float *)(self + 64) = v50;
  sub_46B970(self + 56, self + 56);
  if ( !*(_BYTE *)(dword_520970 + 296) )
  {
    if ( sub_408F40(17) )
    {
      v41 = *(float *)(self + 412);
      v48 = v53 * v39;
      v51 = v54 * v39;
      v56 = v48 * v41;
      v57 = v51 * v41;
      v47 = v56 * v66;
      v50 = v57 * v66;
      *v6 = *(float *)&v52 * v39 * v41 * v66 + *v6;
      *(float *)(self + 36) = v47 + *(float *)(self + 36);
      *(float *)(self + 40) = v50 + *(float *)(self + 40);
    }
    if ( sub_408F40(31) )
    {
      v42 = *(float *)(self + 412);
      v56 = v53 * v39;
      v57 = v54 * v39;
      v47 = v56 * v42;
      v50 = v57 * v42;
      v56 = v47 * v66;
      v57 = v50 * v66;
      *v6 = *v6 - *(float *)&v52 * v39 * v42 * v66;
      *(float *)(self + 36) = *(float *)(self + 36) - v56;
      *(float *)(self + 40) = *(float *)(self + 40) - v57;
    }
    if ( sub_408F40(30) )
    {
      v43 = *(float *)(self + 412);
      v56 = v59 * v39;
      v57 = v60 * v39;
      v47 = v56 * v43;
      v50 = v57 * v43;
      v56 = v47 * v66;
      v57 = v50 * v66;
      *v6 = *v6 - *(float *)&v58 * v39 * v43 * v66;
      *(float *)(self + 36) = *(float *)(self + 36) - v56;
      *(float *)(self + 40) = *(float *)(self + 40) - v57;
    }
    if ( sub_408F40(32) )
    {
      v33 = v60 * v39;
      v27 = v59 * v39;
      v23 = *(float *)&v58 * v39;
      sub_40F4A0((_DWORD *)&v62, LODWORD(v23), LODWORD(v27), LODWORD(v33));
      v16 = *(float *)(self + 412);
      v34 = v57 * v16;
      v28 = v56 * v16;
      v24 = v55 * v16;
      sub_40F4A0((_DWORD *)&v62, LODWORD(v24), LODWORD(v28), LODWORD(v34));
      v35 = v50 * v66;
      v29 = v47 * v66;
      v25 = v45 * v66;
      sub_40F4A0((_DWORD *)&v62, LODWORD(v25), LODWORD(v29), LODWORD(v35));
      *v6 = v62 + *v6;
      *(float *)(self + 36) = v63 + *(float *)(self + 36);
      *(float *)(self + 40) = v64 + *(float *)(self + 40);
    }
    if ( sub_408F40(16) )
      *(float *)(self + 40) = v39 * *(float *)(self + 412) * v66 + *(float *)(self + 40);
    if ( sub_408F40(44) )
      *(float *)(self + 40) = *(float *)(self + 40) - v39 * *(float *)(self + 412) * v66;
  }
  v36 = v54 + *(float *)(self + 40);
  v30 = v53 + *(float *)(self + 36);
  v26 = *(float *)&v52 + *v6;
  sub_40F4A0((_DWORD *)&v62, LODWORD(v26), LODWORD(v30), LODWORD(v36));
  v17 = v63;
  v18 = v64;
  *(float *)(self + 44) = v62;
  v19 = *v6;
  *(float *)(self + 48) = v17;
  v20 = *(_DWORD *)(self + 36);
  *(float *)(self + 392) = v19;
  *(float *)(self + 52) = v18;
  v21 = *(_DWORD *)(self + 40);
  *(_DWORD *)(self + 396) = v20;
  *(_DWORD *)(self + 400) = v21;
  return sub_428620((_DWORD *)self, LODWORD(v66));
}
