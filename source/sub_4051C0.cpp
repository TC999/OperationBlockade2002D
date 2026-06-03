#include "common.h"

//----- (004051C0) --------------------------------------------------------
int __cdecl sub_4051C0(_DWORD *a1, int a2, int a3)
{
  float v3; // esi
  int result; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // ebx
  int v8; // edi
  int v9; // ebp
  int v10; // ebp
  double v11; // st7
  int v12; // esi
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  float *v16; // eax
  double v17; // st7
  double v18; // st7
  double v19; // st7
  float *v20; // ecx
  float *v21; // eax
  float v22; // edi
  float *v23; // ecx
  float *v24; // eax
  int v25; // ecx
  int v26; // ecx
  int v27; // eax
  float v30; // [esp+30h] [ebp-190h] BYREF
  float v31; // [esp+34h] [ebp-18Ch]
  float v32; // [esp+38h] [ebp-188h]
  float v33; // [esp+3Ch] [ebp-184h] BYREF
  float v34; // [esp+40h] [ebp-180h]
  float v35; // [esp+44h] [ebp-17Ch]
  int v35_int; // 临时变量，用于替代LODWORD(v35)的自增操作
  int v36; // [esp+48h] [ebp-178h] BYREF
  int v37; // [esp+4Ch] [ebp-174h]
  int v38; // [esp+50h] [ebp-170h]
  float *v39; // [esp+54h] [ebp-16Ch]
  int v40; // [esp+58h] [ebp-168h]
  int v41; // [esp+5Ch] [ebp-164h] BYREF
  float *v42; // [esp+60h] [ebp-160h]
  float *v43; // [esp+64h] [ebp-15Ch]
  float v44; // [esp+6Ch] [ebp-154h] BYREF
  float v45; // [esp+70h] [ebp-150h]
  float v46; // [esp+74h] [ebp-14Ch]
  float v47; // [esp+78h] [ebp-148h] BYREF
  float v48; // [esp+7Ch] [ebp-144h]
  float v49; // [esp+80h] [ebp-140h]
  int v50; // [esp+84h] [ebp-13Ch]
  int v51; // [esp+88h] [ebp-138h]
  float v52; // [esp+8Ch] [ebp-134h]
  float v53; // [esp+98h] [ebp-128h]
  float v54; // [esp+9Ch] [ebp-124h] BYREF
  float v55[3]; // [esp+A0h] [ebp-120h] BYREF
  float v56[3]; // [esp+ACh] [ebp-114h] BYREF
  float v57; // [esp+B8h] [ebp-108h] BYREF
  float v58; // [esp+BCh] [ebp-104h]
  _BYTE v59[64]; // [esp+C0h] [ebp-100h] BYREF
  _BYTE v60[64]; // [esp+100h] [ebp-C0h] BYREF
  _BYTE v61[64]; // [esp+140h] [ebp-80h] BYREF
  _BYTE v62[64]; // [esp+180h] [ebp-40h] BYREF

  v3 = (float)(uintptr_t)a1;
  v48 = v3;
  sub_406BE0((uint32 *)v59);
  sub_406BE0((uint32 *)v60);
  sub_406BE0((uint32 *)v61);
  sub_406BE0((uint32 *)v62);
  result = *(_DWORD *)(LODWORD(v3) + 8);
  v5 = 0;
  v38 = 0;
  if ( result > 0 )
  {
    v6 = 0;
    v50 = 0;
    do
    {
      v7 = *(_DWORD *)(LODWORD(v3) + 4) + v6;
      if ( *(_BYTE *)(v7 + 81) )
      {
        v8 = v5 + 1;
        v42 = (float *)(v5 + 1);
        if ( v5 + 1 < result )
        {
          v9 = v6 + 172;
          v51 = v6 + 172;
          do
          {
            v10 = *(_DWORD *)(LODWORD(v3) + 4) + v9;
            if ( v7 != v10 && *(_BYTE *)(v10 + 81) )
            {
              sub_404F60((_DWORD *)LODWORD(v3), v5, v59, &v57);
              sub_404F60((_DWORD *)LODWORD(v3), v8, v60, &v54);
              qmemcpy(v61, v59, sizeof(v61));
              sub_46B9FD((float *)v61, (float *)0, (float *)v61);
              qmemcpy(v62, v60, sizeof(v62));
              sub_46B9FD((float *)v62, (float *)0, (float *)v62);
              sub_408A30((_DWORD *)(uintptr_t)(v7 + 60), 0);
              sub_46C5C5(v55, v55, (float *)v59);
              v58 = v57 * *(float *)(v7 + 72);
              sub_408A30((_DWORD *)(uintptr_t)(v10 + 60), 0);
              sub_46C5C5(v56, v56, (float *)v60);
              v11 = v54 * *(float *)(v10 + 72);
              v34 = v56[0] - v55[0];
              v52 = v56[1] - v55[1];
              v49 = v56[2] - v55[2];
              if ( (v11 + v58) * (v11 + v58) >= v49 * v49 + v52 * v52 + v34 * v34 )
              {
                v12 = 0;
                LODWORD(v35) = v7 + 84;
                v13 = *(_DWORD *)(v7 + 36);
                v37 = 0;
                (*(void (__stdcall **)(int, _DWORD, _DWORD, int *, _DWORD, int))(*(_DWORD *)v13 + 44))(
                  v13,
                  0,
                  0,
                  &v36,
                  0,
                  a3);
                v35 = 0.0;
                v35_int = 0;
                v38 = v37;
                if ( *(int *)(v7 + 40) > 0 )
                {
                  do
                  {
                    v40 = v10 + 84;
                    v14 = *(_DWORD *)(v10 + 36);
                    v42 = 0;
                    (*(void (__stdcall **)(int, _DWORD, _DWORD, int *, _DWORD, int))(*(_DWORD *)v14 + 44))(
                      v14,
                      0,
                      0,
                      &v41,
                      0,
                      a2);
                    v15 = *(_DWORD *)(v10 + 40);
                    v16 = v42;
                    v43 = v42;
                    if ( v15 > 0 )
                    {
                      do
                      {
                        v47 = 0.0;
                        v48 = 0.0;
                        v49 = 0.0;
                        v44 = 0.0;
                        v45 = 0.0;
                        v46 = 0.0;
                        v47 = *v39;
                        v48 = v39[1];
                        v49 = v39[2];
                        v44 = *v16;
                        v45 = v16[1];
                        v46 = v16[2];
                        sub_46C5C5(&v47, &v47, (float *)&v59[8]);
                        sub_46C5C5(&v44, &v44, (float *)&v60[8]);
                        v17 = v47 - v44;
                        if ( v17 < 0.0000099999997 && v17 > -0.0000099999997 )
                        {
                          v18 = v48 - v45;
                          if ( v18 < 0.0000099999997 && v18 > -0.0000099999997 )
                          {
                            v19 = v49 - v46;
                            if ( v19 < 0.0000099999997 && v19 > -0.0000099999997 )
                            {
                              v30 = 0.0;
                              v31 = 0.0;
                              v32 = 0.0;
                              v20 = (float *)((char *)v39 + *(_DWORD *)(v37 + 4));
                              v30 = *v20;
                              v31 = v20[1];
                              v32 = v20[2];
                              sub_46B976((int)(uintptr_t)&v30, (int)&v30, (int)&v59[8]);
                              v33 = 0.0;
                              v34 = 0.0;
                              v35 = 0.0;
                              v21 = (float *)((char *)v43 + *(_DWORD *)(v41 + 4));
                              v33 = *v21;
                              v34 = v21[1];
                              v35 = v21[2];
                              sub_46B976((int)(uintptr_t)&v33, (int)&v33, (int)&v60[8]);
                              v53 = (v33 + v30) * 0.5;
                              v22 = v53;
                              v30 = v53;
                              v54 = (v34 + v31) * 0.5;
                              v31 = v54;
                              v55[0] = (v35 + v32) * 0.5;
                              v32 = v55[0];
                              sub_46B976((int)(uintptr_t)&v30, (int)&v30, (int)&v61[8]);
                              v23 = (float *)((char *)v39 + *(_DWORD *)(v37 + 4));
                              *v23 = v30;
                              v23[1] = v31;
                              v23[2] = v32;
                              v34 = v54;
                              v35 = v55[0];
                              v33 = v22;
                              sub_46B976((int)(uintptr_t)&v33, (int)&v33, (int)&v62[8]);
                              v24 = (float *)((char *)v43 + *(_DWORD *)(v41 + 4));
                              *v24 = v33;
                              v24[1] = v34;
                              v24[2] = v35;
                            }
                          }
                        }
                        v25 = *(_DWORD *)(v10 + 40);
                        v16 = (float *)((char *)v43 + *(_DWORD *)(v41 + 84));
                        ++v12;
                        v43 = v16;
                      }
                      while ( v12 < v25 );
                      v12 = 0;
                    }
                    a2 = *(_DWORD *)(v10 + 36);
                    (*(void (**)(void))(*(_DWORD *)a2 + 48))();
                    v26 = *(_DWORD *)(v7 + 40);
                    v38 += *(_DWORD *)(v36 + 84);
                    ++v35_int;
                  }
                  while ( v35_int < v26 );
                }
                a3 = *(_DWORD *)(v7 + 36);
                (*(void (**)(void))(*(_DWORD *)a3 + 48))();
              }
              v8 = (int)v42;
              v3 = v48;
            }
            v27 = *(_DWORD *)(LODWORD(v3) + 8);
            v5 = v38;
            ++v8;
            v9 = v51 + 172;
            v42 = (float *)v8;
            v51 += 172;
          }
          while ( v8 < v27 );
          v6 = v50;
        }
      }
      result = *(_DWORD *)(LODWORD(v3) + 8);
      ++v5;
      v6 += 172;
      v38 = v5;
      v50 = v6;
    }
    while ( v5 < result );
  }
  return result;
}
