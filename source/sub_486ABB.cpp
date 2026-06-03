//----- (00486ABB) --------------------------------------------------------
int __cdecl sub_486ABB(__m64 *a1, __m64 *a2, __m64 *a3, int a4, int a5, int a6)
{
  __m64 v6; // mm0
  __m64 v7; // mm2
  __m64 v8; // mm4
  __m64 v9; // mm5
  __m64 v10; // mm0
  __m64 v11; // mm6
  __m64 v12; // mm0
  __m64 v13; // mm6
  __m64 v14; // mm4
  __m64 v15; // mm3
  __m64 v16; // mm5
  __m64 v17; // mm6
  __m64 v18; // mm1
  __m64 v19; // mm0
  __m64 v20; // mm1
  __m64 v21; // mm6
  __m64 v22; // mm0
  __m64 v23; // mm6
  __m64 v24; // mm2
  __m64 v25; // mm1
  __m64 v26; // mm0
  __m64 v27; // mm2
  __m64 v28; // mm1
  __m64 v29; // mm3
  __m64 v30; // mm6
  __m64 v31; // mm4
  __m64 v32; // mm5
  __m64 v33; // mm7
  __m64 v34; // mm0
  __m64 v35; // mm2
  __m64 v36; // mm4
  __m64 v37; // mm1
  __m64 v38; // mm5
  __m64 v39; // mm3
  __m64 v40; // mm0
  __m64 v41; // mm7
  __m64 v42; // mm6
  __m64 v43; // mm1
  __m64 v44; // mm5
  __m64 v45; // mm2
  __m64 v46; // mm4
  __m64 v47; // mm6
  __m64 v48; // mm0
  __m64 v49; // mm1
  __m64 v50; // mm0
  __m64 v51; // mm2
  __m64 v52; // mm0
  __m64 v53; // mm1
  __m64 v54; // mm4
  __m64 v55; // mm7
  __m64 v56; // mm1
  __m64 v57; // mm0
  __m64 v58; // mm6
  __m64 v59; // mm2
  __m64 v60; // mm6
  __m64 v61; // mm0
  __m64 v62; // mm3
  __m64 v63; // mm1
  int result; // eax
  __m64 v65; // mm1
  __m64 v66; // mm4
  __m64 v67; // mm2
  __m64 v68; // mm5
  __m64 v69; // mm7
  __m64 v70; // mm5
  __m64 v71; // mm3
  __m64 v72; // mm4
  __m64 v73; // mm7
  __m64 v74; // mm5
  __m64 v75; // mm3
  __m64 v76; // mm5
  __m64 v77; // mm1
  __m64 v78; // mm0
  __m64 v79; // mm1
  __m64 v80; // mm3
  __m64 v81; // mm2
  __m64 v82; // mm1
  __m64 v83; // mm0
  int v84; // edi
  __m64 v85; // mm3
  unsigned int v86; // eax
  __m64 v87; // mm4
  __m64 v88; // mm2
  __m64 v89; // [esp+Ch] [ebp-FCh]
  __m64 v90; // [esp+14h] [ebp-F4h]
  __m64 v91; // [esp+1Ch] [ebp-ECh]
  __m64 v92; // [esp+24h] [ebp-E4h]
  __m64 v93; // [esp+2Ch] [ebp-DCh]
  __m64 v94; // [esp+3Ch] [ebp-CCh]
  __m64 v95; // [esp+44h] [ebp-C4h]
  __m64 v96; // [esp+4Ch] [ebp-BCh]
  __m64 v97; // [esp+5Ch] [ebp-ACh]
  __m64 v98; // [esp+6Ch] [ebp-9Ch]
  __m64 v99; // [esp+74h] [ebp-94h]
  __m64 v100; // [esp+7Ch] [ebp-8Ch]
  __m64 v101; // [esp+84h] [ebp-84h]
  __m64 v102; // [esp+8Ch] [ebp-7Ch]
  __m64 v103; // [esp+9Ch] [ebp-6Ch]
  __m64 v104; // [esp+ACh] [ebp-5Ch]
  __m64 v105; // [esp+B4h] [ebp-54h]
  __m64 v106; // [esp+BCh] [ebp-4Ch]
  __m64 v107; // [esp+CCh] [ebp-3Ch]
  __m64 v108; // [esp+D4h] [ebp-34h]
  __m64 v109; // [esp+DCh] [ebp-2Ch]
  __m64 v110; // [esp+E4h] [ebp-24h]
  __m64 v111; // [esp+ECh] [ebp-1Ch]
  __m64 *v113; // [esp+F8h] [ebp-10h]
  __m64 *v114; // [esp+F8h] [ebp-10h]
  int v116; // [esp+100h] [ebp-8h]
  int v117; // [esp+104h] [ebp-4h]
  int v118; // [esp+104h] [ebp-4h]

  v117 = 2;
  v113 = a3;
  do
  {
    v6 = _m_pmullw(a1[4], a2[4]);
    v7 = _m_pmullw(a1[12], a2[12]);
    v8 = _m_pmaddwd(v6, _mm_set_pi32(0x187E, 0x187E));
    v9 = _m_pmaddwd(_m_psrlqi(v6, 0x10u), _mm_set_pi32(0x187E, 0x187E));
    v10 = _m_paddw(v6, v7);
    v11 = _m_psrlqi(v10, 0x10u);
    v12 = _m_pmaddwd(v10, _mm_set_pi32(0x1151, 0x1151));
    v13 = _m_pmaddwd(v11, _mm_set_pi32(0x1151, 0x1151));
    v14 = _m_paddd(v8, v12);
    v15 = _m_paddd(
            _m_paddd(
              _m_pxor(_m_pmaddwd(_m_psrlqi(v7, 0x10u), _mm_set_pi32(0x3B21, 0x3B21)), _mm_set_pi32(-1, -1)),
              _mm_set_pi32(1, 1)),
            v13);
    v16 = _m_paddd(v9, v13);
    v89 = _m_paddd(_m_paddd(_m_pxor(_m_pmaddwd(v7, _mm_set_pi32(0x3B21, 0x3B21)), _mm_set_pi32(-1, -1)), _mm_set_pi32(1, 1)), v12);
    v17 = _m_pmullw(a1[8], a2[8]);
    v18 = _m_pmullw(*a1, *a2);
    v19 = _m_paddw(v18, v17);
    v20 = _m_psubw(v18, v17);
    v21 = v19;
    v22 = _m_pslldi(_m_pmaddwd(v19, _mm_set_pi32(1, 1)), 0xDu);
    v23 = _m_pslldi(_m_pmaddwd(_m_psrlqi(v21, 0x10u), _mm_set_pi32(1, 1)), 0xDu);
    v24 = _m_pslldi(_m_pmaddwd(_m_psrlqi(v20, 0x10u), _mm_set_pi32(1, 1)), 0xDu);
    v91 = _m_psubd(v22, v14);
    v93 = _m_paddd(v16, v23);
    v94 = _m_psubd(v23, v16);
    v96 = _m_paddd(v14, v22);
    v25 = _m_pslldi(_m_pmaddwd(v20, _mm_set_pi32(1, 1)), 0xDu);
    v97 = _m_paddd(v15, v24);
    v98 = _m_psubd(v24, v15);
    v100 = _m_paddd(v89, v25);
    v102 = _m_psubd(v25, v89);
    v103 = _m_pmullw(a1[2], a2[2]);
    v104 = _m_pmullw(a1[14], a2[14]);
    v26 = _m_paddw(v104, v103);
    v106 = _m_pmullw(a1[10], a2[10]);
    v107 = _m_pmullw(a1[6], a2[6]);
    v27 = _m_paddw(v106, v107);
    v28 = _m_paddw(v104, v107);
    v29 = _m_paddw(v106, v103);
    v30 = _m_paddw(v28, v29);
    v109 = _m_pmaddwd(v30, _mm_set_pi32(0x25A1, 0x25A1));
    v31 = _m_psrlqi(v27, 0x10u);
    v110 = _m_pmaddwd(_m_psrlqi(v30, 0x10u), _mm_set_pi32(0x25A1, 0x25A1));
    v32 = _m_psrlqi(v28, 0x10u);
    v95 = _m_paddd(_m_pxor(_m_pmaddwd(v26, _mm_set_pi32(0x1CCD, 0x1CCD)), _mm_set_pi32(-1, -1)), _mm_set_pi32(1, 1));
    v33 = _m_pmaddwd(_m_psrlqi(v26, 0x10u), _mm_set_pi32(0x1CCD, 0x1CCD));
    v34 = _m_psrlqi(v29, 0x10u);
    v35 = _m_paddd(_m_pxor(_m_pmaddwd(v27, _mm_set_pi32(0x5203, 0x5203)), _mm_set_pi32(-1, -1)), _mm_set_pi32(1, 1));
    v36 = _m_paddd(_m_pxor(_m_pmaddwd(v31, _mm_set_pi32(0x5203, 0x5203)), _mm_set_pi32(-1, -1)), _mm_set_pi32(1, 1));
    v101 = _m_paddd(_m_pxor(v33, _mm_set_pi32(-1, -1)), _mm_set_pi32(1, 1));
    v37 = _m_paddd(_m_paddd(_m_pxor(_m_pmaddwd(v28, _mm_set_pi32(0x3EC5, 0x3EC5)), _mm_set_pi32(-1, -1)), _mm_set_pi32(1, 1)), v109);
    v38 = _m_paddd(_m_paddd(_m_pxor(_m_pmaddwd(v32, _mm_set_pi32(0x3EC5, 0x3EC5)), _mm_set_pi32(-1, -1)), _mm_set_pi32(1, 1)), v110);
    v39 = _m_paddd(_m_paddd(_m_pxor(_m_pmaddwd(v29, _mm_set_pi32(0xC7C, 0xC7C)), _mm_set_pi32(-1, -1)), _mm_set_pi32(1, 1)), v109);
    v40 = _m_paddd(_m_paddd(_m_pxor(_m_pmaddwd(v34, _mm_set_pi32(0xC7C, 0xC7C)), _mm_set_pi32(-1, -1)), _mm_set_pi32(1, 1)), v110);
    v111 = _m_paddd(v37, v35);
    v105 = _m_paddd(v38, v36);
    v92 = _m_paddd(_m_pmaddwd(v104, _mm_set_pi32(0x98E, 0x98E)), _m_paddd(v95, v37));
    v108 = _m_paddd(_m_pmaddwd(_m_psrlqi(v104, 0x10u), _mm_set_pi32(0x98E, 0x98E)), _m_paddd(v101, v38));
    v41 = _m_paddd(_m_pmaddwd(v103, _mm_set_pi32(0x300B, 0x300B)), _m_paddd(v39, v95));
    v42 = _m_paddd(_m_pmaddwd(_m_psrlqi(v103, 0x10u), _mm_set_pi32(0x300B, 0x300B)), _m_paddd(v40, v101));
    v99 = _m_paddd(_m_pmaddwd(v106, _mm_set_pi32(0x41B3, 0x41B3)), _m_paddd(v35, v39));
    v90 = _m_paddd(_m_pmaddwd(_m_psrlqi(v106, 0x10u), _mm_set_pi32(0x41B3, 0x41B3)), _m_paddd(v36, v40));
    v43 = _m_psradi(_m_paddd(_m_psubd(v93, v42), _mm_set_pi32(0x400, 0x400)), 0xBu);
    v44 = _m_paddd(_m_pmaddwd(v107, _mm_set_pi32(0x6254, 0x6254)), v111);
    v45 = _m_psradi(_m_paddd(_m_psubd(v96, v41), _mm_set_pi32(0x400, 0x400)), 0xBu);
    v46 = _m_paddd(_m_pmaddwd(_m_psrlqi(v107, 0x10u), _mm_set_pi32(0x6254, 0x6254)), v105);
    v113[14] = _m_punpckldq(_m_punpcklwd(v45, v43), _m_punpckhwd(v45, v43));
    v47 = _m_psradi(_m_paddd(_m_paddd(v42, v93), _mm_set_pi32(0x400, 0x400)), 0xBu);
    v48 = _m_psradi(_m_paddd(_m_paddd(v41, v96), _mm_set_pi32(0x400, 0x400)), 0xBu);
    *v113 = _m_punpckldq(_m_punpcklwd(v48, v47), _m_punpckhwd(v48, v47));
    v49 = _m_psradi(_m_paddd(_m_psubd(v97, v46), _mm_set_pi32(0x400, 0x400)), 0xBu);
    v50 = _m_psradi(_m_paddd(_m_psubd(v100, v44), _mm_set_pi32(0x400, 0x400)), 0xBu);
    v51 = _m_punpcklwd(v50, v49);
    v52 = _m_punpckhwd(v50, v49);
    v53 = _m_psradi(_m_paddd(_m_paddd(v44, v100), _mm_set_pi32(0x400, 0x400)), 0xBu);
    v113[12] = _m_punpckldq(v51, v52);
    v54 = _m_psradi(_m_paddd(_m_paddd(v46, v97), _mm_set_pi32(0x400, 0x400)), 0xBu);
    v113[2] = _m_punpckldq(_m_punpcklwd(v53, v54), _m_punpckhwd(v53, v54));
    v55 = _m_psradi(_m_paddd(_m_paddd(v98, v90), _mm_set_pi32(0x400, 0x400)), 0xBu);
    v56 = _m_psradi(_m_paddd(_m_paddd(v102, v99), _mm_set_pi32(0x400, 0x400)), 0xBu);
    v57 = _m_psradi(_m_paddd(_m_psubd(v98, v90), _mm_set_pi32(0x400, 0x400)), 0xBu);
    v113[4] = _m_punpckldq(_m_punpcklwd(v56, v55), _m_punpckhwd(v56, v55));
    v58 = _m_psradi(_m_paddd(_m_psubd(v102, v99), _mm_set_pi32(0x400, 0x400)), 0xBu);
    v59 = _m_punpckldq(_m_punpcklwd(v58, v57), _m_punpckhwd(v58, v57));
    v60 = _m_psradi(_m_paddd(_m_paddd(v91, v92), _mm_set_pi32(0x400, 0x400)), 0xBu);
    v61 = _m_psradi(_m_paddd(_m_paddd(v94, v108), _mm_set_pi32(0x400, 0x400)), 0xBu);
    v62 = _m_psradi(_m_paddd(_m_psubd(v91, v92), _mm_set_pi32(0x400, 0x400)), 0xBu);
    v113[10] = v59;
    v63 = _m_psradi(_m_paddd(_m_psubd(v94, v108), _mm_set_pi32(0x400, 0x400)), 0xBu);
    v113[6] = _m_punpckldq(_m_punpcklwd(v60, v61), _m_punpckhwd(v60, v61));
    ++a1;
    ++a2;
    v113[8] = _m_punpckldq(_m_punpcklwd(v62, v63), _m_punpckhwd(v62, v63));
    ++v113;
    result = --v117;
  }
  while ( v117 );
  v118 = 8;
  v114 = a3;
  v116 = 0;
  do
  {
    v65 = v114[1];
    v66 = _m_paddw(*v114, v65);
    v67 = _m_pmaddwd(v66, _mm_set_pi32(0x1151, 0));
    v68 = _m_pmaddwd(_m_punpckhdq(*v114, v65), _mm_set_pi32(0x3B21, 0x187E));
    v69 = _m_psradi(_m_pslldi(_m_punpckldq(v66, _m_psubw(*v114, v65)), 0x10u), 3u);
    v70 = _m_paddd(
            _m_punpckldq(v68, _m_psrlqi(_m_paddd(_m_pxor(v68, _mm_set_pi32(-1, -1)), _mm_set_pi32(1, 1)), 0x20u)),
            _m_punpckhdq(v67, v67));
    v71 = v66;
    v72 = _m_paddd(v69, v70);
    v73 = _m_psubd(v69, v70);
    v74 = _m_pmaddwd(_m_paddw(_m_punpckldq(v71, v71), v71), _mm_set_pi32(0x25A10000, 0));
    v75 = _m_paddd(
            _m_paddd(_m_pxor(_m_pmaddwd(v71, _mm_set_pi32(0x3EC50000, 0x0C7C0000)), _mm_set_pi32(-1, -1)), _mm_set_pi32(1, 1)),
            _m_punpckhdq(v74, v74));
    v76 = _m_paddd(
            _m_pxor(
              _m_pmaddwd(
                _m_paddw(
                  _m_punpckhdq(*v114, _m_punpckldq(*v114, *v114)),
                  v65),
                _mm_set_pi32(0x1CCD0000, 0x52030000)),
              _mm_set_pi32(-1, -1)),
            _mm_set_pi32(1, 1));
    v77 = _m_paddd(_m_pmaddwd(v65, _mm_set_pi32(0x098E0000, 0x41B30000)), _m_paddd(v76, v75));
    v78 = _m_paddd(
            _m_pmaddwd(*v114, _mm_set_pi32(0x62540000, 0x300B0000)),
            _m_paddd(_m_punpckhdq(v76, _m_punpckldq(v76, v76)), v75));
    v79 = _m_punpckhdq(v77, _m_punpckldq(v77, v77));
    v80 = _m_psubd(v72, v78);
    v81 = _m_psubd(v73, v79);
    v82 = _m_pand(_m_psradi(_m_paddd(_m_paddd(v79, v73), _mm_set_pi32(0x20000, 0x20000)), 0x12u), _mm_set_pi32(0x3FF, 0x3FF));
    v83 = _m_pand(_m_psradi(_m_paddd(_m_paddd(v78, v72), _mm_set_pi32(0x20000, 0x20000)), 0x12u), _mm_set_pi32(0x3FF, 0x3FF));
    *(_BYTE *)((char *)&result + 1) = *(_BYTE *)(a6 + _mm_cvtsi64_si32(v82));
    v84 = *(_DWORD *)(v116 + a4);
    *(_BYTE *)&result = *(_BYTE *)(a6 + _mm_cvtsi64_si32(_m_psrlqi(v82, 0x20u)));
    v116 += 4;
    v85 = _m_pand(_m_psradi(_m_paddd(v80, _mm_set_pi32(0x20000, 0x20000)), 0x12u), _mm_set_pi32(0x3FF, 0x3FF));
    v86 = result << 16;
    *(_BYTE *)&v86 = *(_BYTE *)(a6 + _mm_cvtsi64_si32(v83));
    *(_BYTE *)((char *)&v86 + 1) = *(_BYTE *)(a6 + _mm_cvtsi64_si32(_m_psrlqi(v83, 0x20u)));
    v87 = _mm_cvtsi32_si64(v86);
    v88 = _m_pand(_m_psradi(_m_paddd(v81, _mm_set_pi32(0x20000, 0x20000)), 0x12u), _mm_set_pi32(0x3FF, 0x3FF));
    *(_BYTE *)((char *)&v86 + 1) = *(_BYTE *)(a6 + _mm_cvtsi64_si32(v85));
    *(_BYTE *)&v86 = *(_BYTE *)(a6 + _mm_cvtsi64_si32(_m_psrlqi(v85, 0x20u)));
    v86 <<= 16;
    *(_BYTE *)&v86 = *(_BYTE *)(a6 + _mm_cvtsi64_si32(v88));
    *(_BYTE *)((char *)&v86 + 1) = *(_BYTE *)(a6 + _mm_cvtsi64_si32(_m_psrlqi(v88, 0x20u)));
    v114 += 2;
    *(__m64 *)(a5 + v84) = _m_punpckldq(v87, _mm_cvtsi32_si64(v86));
    result = v118 - 1;
    v118 = result;
  }
  while ( result );
  _m_empty();
  return result;
}
