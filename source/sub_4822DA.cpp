//----- (004822DA) --------------------------------------------------------
extern __int64 qword_4B15B0;
extern __int64 qword_4B15B8;
extern __int64 qword_4B15C0;
extern __int64 qword_4B15C8;
extern __int64 qword_4B15D0;
extern __int64 qword_522318;

_BYTE *__cdecl sub_4822DA(_DWORD *a1, _DWORD *a2, int a3, int *a4, int a5)
{
  _DWORD *v5; // eax
  unsigned int v6; // ebx
  int v7; // esi
  int v8; // ecx
  _BYTE *result; // eax
  int v10; // eax
  unsigned int *v11; // edx
  unsigned int *v12; // ecx
  int v13; // eax
  unsigned int *v14; // eax
  unsigned int *v15; // ebx
  unsigned int v16; // edi
  int v17; // edx
  __m64 v18; // mm0
  __m64 v19; // mm3
  __m64 v20; // mm4
  __m64 v21; // mm6
  __m64 v22; // mm2
  __m64 v23; // mm5
  __m64 v24; // mm6
  __m64 v25; // mm7
  __m64 v26; // mm1
  __m64 v27; // mm0
  __m64 v28; // mm1
  __m64 v29; // mm4
  __m64 v30; // mm0
  __m64 v31; // mm3
  __m64 v32; // mm2
  __m64 v33; // mm3
  _BYTE *v34; // ecx
  int v35; // edx
  int v36; // edi
  int v37; // edx
  bool v38; // zf
  _DWORD *v39; // edi
  int v40; // edx
  int *v41; // eax
  unsigned __int8 *v42; // ecx
  int v43; // edx
  int v44; // edx
  int v45; // ebx
  unsigned int v46; // [esp+Ch] [ebp-34h]
  int v47; // [esp+Ch] [ebp-34h]
  int v48; // [esp+10h] [ebp-30h]
  int v49; // [esp+10h] [ebp-30h]
  int v50; // [esp+14h] [ebp-2Ch]
  int v51; // [esp+18h] [ebp-28h]
  _BYTE *v52; // [esp+1Ch] [ebp-24h]
  int v53; // [esp+20h] [ebp-20h]
  int v54; // [esp+24h] [ebp-1Ch]
  unsigned int v55; // [esp+24h] [ebp-1Ch]
  unsigned int v56; // [esp+28h] [ebp-18h]
  int v57; // [esp+28h] [ebp-18h]
  unsigned int v58; // [esp+2Ch] [ebp-14h]
  int v59; // [esp+30h] [ebp-10h]
  unsigned int v60; // [esp+34h] [ebp-Ch]
  unsigned int *v61; // [esp+38h] [ebp-8h]
  int v62; // [esp+38h] [ebp-8h]
  int v63; // [esp+38h] [ebp-8h]
  int v64; // [esp+38h] [ebp-8h]
  unsigned int *v65; // [esp+3Ch] [ebp-4h]
  char *v66; // [esp+3Ch] [ebp-4h]
  int v67; // [esp+3Ch] [ebp-4h]
  int v68; // [esp+3Ch] [ebp-4h]
  unsigned int *v69; // [esp+48h] [ebp+8h]
  int v70; // [esp+48h] [ebp+8h]
  unsigned __int8 *v71; // [esp+48h] [ebp+8h]

  v5 = (_DWORD *)a1[104];
  v6 = a1[23];
  v7 = a1[71];
  v53 = v5[2];
  v50 = v5[3];
  v8 = v5[4];
  result = (_BYTE *)v5[5];
  v58 = v6;
  v60 = v6 & 0xFFFFFFF8;
  v51 = v8;
  v52 = result;
  if ( byte_4B15AC )
  {
    if ( a5 - 1 >= 0 )
    {
      v46 = 3 * (v6 & 0xFFFFFFF8);
      v10 = 4 * a3;
      v54 = a5;
      while ( 1 )
      {
        v65 = *(unsigned int **)(v10 + *a2);
        v11 = *(unsigned int **)(v10 + a2[1]);
        v12 = *(unsigned int **)(v10 + a2[2]);
        v48 = v10 + 4;
        v13 = *a4++;
        v69 = v11;
        v61 = v12;
        v59 = v13;
        v14 = v65;
        v15 = v11;
        v16 = v60 >> 2;
        v17 = v59;
        do
        {
          v18 = _m_punpcklbw(_mm_cvtsi32_si64(*v14), _mm_cvtsi32_si64(0));
          v19 = _m_psubsw(_m_punpcklbw(_mm_cvtsi32_si64(*v12), _mm_cvtsi32_si64(0)), *(__m64*)&qword_4B15B0);
          v20 = _m_psubsw(_m_punpcklbw(_mm_cvtsi32_si64(*v15), _mm_cvtsi32_si64(0)), *(__m64*)&qword_4B15B0);
          v21 = _m_psllwi(v18, 8u);
          v22 = _m_psradi(_m_paddd(_m_pmaddwd(_m_punpcklwd(v20, v19), *(__m64*)&qword_4B15B8), _m_punpcklwd(v21, _mm_cvtsi32_si64(0))), 8u);
          v23 = _m_psradi(_m_paddd(_m_pmaddwd(_m_punpckhwd(v20, v19), *(__m64*)&qword_4B15B8), _m_punpckhwd(v21, _mm_cvtsi32_si64(0))), 8u);
          v24 = _m_psradi(_m_pmaddwd(_m_punpcklwd(v19, v18), *(__m64*)&qword_4B15C0), 8u);
          v25 = _m_pmaddwd(_m_punpckhwd(v20, v18), *(__m64*)&qword_4B15C8);
          v26 = _m_pmaddwd(_m_punpckhwd(v19, v18), *(__m64*)&qword_4B15C0);
          v27 = _m_psradi(_m_pmaddwd(_m_punpcklwd(v20, v18), *(__m64*)&qword_4B15C8), 8u);
          v28 = _m_psradi(v26, 8u);
          v29 = _m_psradi(v25, 8u);
          v30 = _m_packuswb(
                  _m_packssdw(_m_punpckldq(v24, v22), _m_punpckldq(v27, _mm_cvtsi32_si64((unsigned int)qword_522318))),
                  _m_packssdw(_m_punpckhdq(v24, v22), _m_punpckhdq(v27, *(__m64*)&qword_522318)));
          v31 = _m_psrlqi(_m_pand(v30, *(__m64*)&qword_4B15D0), 8u);
          v17 += 12;
          v32 = _m_packuswb(
                  _m_packssdw(_m_punpckldq(v28, v23), _m_punpckldq(v29, _mm_cvtsi32_si64((unsigned int)qword_522318))),
                  _m_packssdw(_m_punpckhdq(v28, v23), _m_punpckhdq(v29, *(__m64*)&qword_522318)));
          ++v14;
          *(_DWORD *)(v17 - 12) = _mm_cvtsi64_si32(_m_por(v30, v31));
          v33 = _m_punpcklwd(_m_psrlqi(v31, 0x20u), v32);
          ++v12;
          *(_DWORD *)(v17 - 8) = _mm_cvtsi64_si32(v33);
          ++v15;
          *(_DWORD *)(v17 - 4) = _mm_cvtsi64_si32(_m_por(_m_psrlqi(v32, 0x18u), _m_psrlqi(v33, 0x30u)));
          --v16;
        }
        while ( v16 );
        result = (_BYTE *)v60;
        v34 = (_BYTE *)(v46 + v59);
        if ( v60 < v58 )
        {
          v35 = (char *)v65 - (char *)v69;
          result = (_BYTE*)((char *)v69 + v60);
          v66 = (char *)((char *)v65 - (char *)v69);
          v62 = (char *)v61 - (char *)v69;
          v56 = v58 - v60;
          while ( 1 )
          {
            v70 = (unsigned __int8)result[v35];
            v36 = 4 * (unsigned __int8)result[v62];
            v37 = 4 * (unsigned __int8)*result;
            *v34 = *(_BYTE *)(v70 + *(_DWORD *)(v36 + v53) + v7);
            v34 += 3;
            *(v34 - 2) = *(_BYTE *)(v70 + ((*(_DWORD *)(v36 + v51) + *(_DWORD *)&v52[v37]) >> 16) + v7);
            ++result;
            v38 = v56-- == 1;
            *(v34 - 1) = *(_BYTE *)(v70 + *(_DWORD *)(v37 + v50) + v7);
            if ( v38 )
              break;
            v35 = (int)v66;
          }
        }
        if ( !--v54 )
          break;
        v10 = v48;
      }
    }
    _m_empty();
  }
  else
  {
    result = (_BYTE *)(a5 - 1);
    if ( a5 - 1 >= 0 )
    {
      v39 = a2;
      v40 = 4 * a3;
      v57 = a5;
      do
      {
        v67 = *(_DWORD *)(v40 + *v39);
        v71 = *(unsigned __int8 **)(v40 + v39[1]);
        v63 = *(_DWORD *)(v40 + v39[2]);
        v41 = a4++;
        result = (_BYTE *)*v41;
        v40 += 4;
        v49 = v40;
        if ( v6 )
        {
          v42 = v71;
          v68 = v67 - (_DWORD)v71;
          v43 = v63 - (_DWORD)v71;
          v64 = v63 - (_DWORD)v71;
          v55 = v6;
          while ( 1 )
          {
            v44 = v42[v43];
            v45 = v42[v68];
            v47 = *v42;
            *result = *(_BYTE *)(v45 + *(_DWORD *)(4 * v44 + v53) + v7);
            result += 3;
            *(result - 2) = *(_BYTE *)(v45 + ((*(_DWORD *)(4 * v44 + v51) + *(_DWORD *)&v52[4 * v47]) >> 16) + v7);
            ++v42;
            v38 = v55-- == 1;
            *(result - 1) = *(_BYTE *)(v45 + *(_DWORD *)(4 * v47 + v50) + v7);
            if ( v38 )
              break;
            v43 = v64;
          }
          v40 = v49;
          v39 = a2;
          v6 = v58;
        }
        --v57;
      }
      while ( v57 );
    }
  }
  return result;
}
