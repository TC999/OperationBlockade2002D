//----- (00486ABB) --------------------------------------------------------
int __cdecl sub_486ABB(int *a1, int *a2, int *a3, int a4, int a5, int a6)
{
  int v6; // mm0
  int v7; // mm2
  int v8; // mm4
  int v9; // mm5
  int v10; // mm0
  int v11; // mm6
  int v12; // mm0
  int v13; // mm6
  int v14; // mm4
  int v15; // mm3
  int v16; // mm5
  int v17; // mm6
  int v18; // mm1
  int v19; // mm0
  int v20; // mm1
  int v21; // mm6
  int v22; // mm0
  int v23; // mm6
  int v24; // mm2
  int v25; // mm1
  int v26; // mm0
  int v27; // mm2
  int v28; // mm1
  int v29; // mm3
  int v30; // mm6
  int v31; // mm4
  int v32; // mm5
  int v33; // mm7
  int v34; // mm0
  int v35; // mm2
  int v36; // mm4
  int v37; // mm1
  int v38; // mm5
  int v39; // mm3
  int v40; // mm0
  int v41; // mm7
  int v42; // mm6
  int v43; // mm1
  int v44; // mm5
  int v45; // mm2
  int v46; // mm4
  int v47; // mm6
  int v48; // mm0
  int v49; // mm1
  int v50; // mm0
  int v51; // mm2
  int v52; // mm0
  int v53; // mm1
  int v54; // mm4
  int v55; // mm7
  int v56; // mm1
  int v57; // mm0
  int v58; // mm6
  int v59; // mm2
  int v60; // mm6
  int v61; // mm0
  int v62; // mm3
  int v63; // mm1
  int result; // eax
  int v65; // mm1
  int v66; // mm4
  int v67; // mm2
  int v68; // mm5
  int v69; // mm7
  int v70; // mm5
  int v71; // mm3
  int v72; // mm4
  int v73; // mm7
  int v74; // mm5
  int v75; // mm3
  int v76; // mm5
  int v77; // mm1
  int v78; // mm0
  int v79; // mm1
  int v80; // mm3
  int v81; // mm2
  int v82; // mm1
  int v83; // mm0
  int v84; // edi
  int v85; // mm3
  unsigned int v86; // eax
  int v87; // mm4
  int v88; // mm2
  int v89; // [esp+Ch] [ebp-FCh]
  int v90; // [esp+14h] [ebp-F4h]
  int v91; // [esp+1Ch] [ebp-ECh]
  int v92; // [esp+24h] [ebp-E4h]
  int v93; // [esp+2Ch] [ebp-DCh]
  int v94; // [esp+3Ch] [ebp-CCh]
  int v95; // [esp+44h] [ebp-C4h]
  int v96; // [esp+4Ch] [ebp-BCh]
  int v97; // [esp+5Ch] [ebp-ACh]
  int v98; // [esp+6Ch] [ebp-9Ch]
  int v99; // [esp+74h] [ebp-94h]
  int v100; // [esp+7Ch] [ebp-8Ch]
  int v101; // [esp+84h] [ebp-84h]
  int v102; // [esp+8Ch] [ebp-7Ch]
  int v103; // [esp+9Ch] [ebp-6Ch]
  int v104; // [esp+ACh] [ebp-5Ch]
  int v105; // [esp+B4h] [ebp-54h]
  int v106; // [esp+BCh] [ebp-4Ch]
  int v107; // [esp+CCh] [ebp-3Ch]
  int v108; // [esp+D4h] [ebp-34h]
  int v109; // [esp+DCh] [ebp-2Ch]
  int v110; // [esp+E4h] [ebp-24h]
  int v111; // [esp+ECh] [ebp-1Ch]
  int *v113; // [esp+F8h] [ebp-10h]
  int *v114; // [esp+F8h] [ebp-10h]
  int v116; // [esp+100h] [ebp-8h]
  int v117; // [esp+104h] [ebp-4h]
  int v118; // [esp+104h] [ebp-4h]

  v117 = 2;
  v113 = a3;
  do
  {
    v6 = _m_pmullw(a1[4], a2[4]);
    v7 = _m_pmullw(a1[12], a2[12]);
    v8 = _m_pmaddwd(v6, (int)0x187E0000187ELL);
    v9 = _m_pmaddwd(_m_psrlqi(v6, 0x10u), (int)0x187E0000187ELL);
    v10 = _m_paddw(v6, v7);
    v11 = _m_psrlqi(v10, 0x10u);
    v12 = _m_pmaddwd(v10, (int)0x115100001151LL);
    v13 = _m_pmaddwd(v11, (int)0x115100001151LL);
    v14 = _m_paddd(v8, v12);
    v15 = _m_paddd(
            _m_paddd(
              _m_pxor(_m_pmaddwd(_m_psrlqi(v7, 0x10u), (int)0x3B2100003B21LL), (int)-1LL),
              (int)0x100000001LL),
            v13);
    v16 = _m_paddd(v9, v13);
    v89 = _m_paddd(_m_paddd(_m_pxor(_m_pmaddwd(v7, (int)0x3B2100003B21LL), (int)-1LL), (int)0x100000001LL), v12);
    v17 = _m_pmullw(a1[8], a2[8]);
    v18 = _m_pmullw((int)a1->m64_u64, (int)a2->m64_u64);
    v19 = _m_paddw(v18, v17);
    v20 = _m_psubw(v18, v17);
    v21 = v19;
    v22 = _m_pslldi(_m_pmaddwd(v19, (int)0x100000001LL), 0xDu);
    v23 = _m_pslldi(_m_pmaddwd(_m_psrlqi(v21, 0x10u), (int)0x100000001LL), 0xDu);
    v24 = _m_pslldi(_m_pmaddwd(_m_psrlqi(v20, 0x10u), (int)0x100000001LL), 0xDu);
    v91 = _m_psubd(v22, v14);
    v93 = _m_paddd(v16, v23);
    v94 = _m_psubd(v23, v16);
    v96 = _m_paddd(v14, v22);
    v25 = _m_pslldi(_m_pmaddwd(v20, (int)0x100000001LL), 0xDu);
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
    v109 = _m_pmaddwd(v30, (int)0x25A1000025A1LL);
    v31 = _m_psrlqi(v27, 0x10u);
    v110 = _m_pmaddwd(_m_psrlqi(v30, 0x10u), (int)0x25A1000025A1LL);
    v32 = _m_psrlqi(v28, 0x10u);
    v95 = _m_paddd(_m_pxor(_m_pmaddwd(v26, (int)0x1CCD00001CCDLL), (int)-1LL), (int)0x100000001LL);
    v33 = _m_pmaddwd(_m_psrlqi(v26, 0x10u), (int)0x1CCD00001CCDLL);
    v34 = _m_psrlqi(v29, 0x10u);
    v35 = _m_paddd(_m_pxor(_m_pmaddwd(v27, (int)0x520300005203LL), (int)-1LL), (int)0x100000001LL);
    v36 = _m_paddd(_m_pxor(_m_pmaddwd(v31, (int)0x520300005203LL), (int)-1LL), (int)0x100000001LL);
    v101 = _m_paddd(_m_pxor(v33, (int)-1LL), (int)0x100000001LL);
    v37 = _m_paddd(_m_paddd(_m_pxor(_m_pmaddwd(v28, (int)0x3EC500003EC5LL), (int)-1LL), (int)0x100000001LL), v109);
    v38 = _m_paddd(_m_paddd(_m_pxor(_m_pmaddwd(v32, (int)0x3EC500003EC5LL), (int)-1LL), (int)0x100000001LL), v110);
    v39 = _m_paddd(_m_paddd(_m_pxor(_m_pmaddwd(v29, (int)0xC7C00000C7CLL), (int)-1LL), (int)0x100000001LL), v109);
    v40 = _m_paddd(_m_paddd(_m_pxor(_m_pmaddwd(v34, (int)0xC7C00000C7CLL), (int)-1LL), (int)0x100000001LL), v110);
    v111 = _m_paddd(v37, v35);
    v105 = _m_paddd(v38, v36);
    v92 = _m_paddd(_m_pmaddwd(v104, (int)0x98E0000098ELL), _m_paddd(v95, v37));
    v108 = _m_paddd(_m_pmaddwd(_m_psrlqi(v104, 0x10u), (int)0x98E0000098ELL), _m_paddd(v101, v38));
    v41 = _m_paddd(_m_pmaddwd(v103, (int)0x300B0000300BLL), _m_paddd(v39, v95));
    v42 = _m_paddd(_m_pmaddwd(_m_psrlqi(v103, 0x10u), (int)0x300B0000300BLL), _m_paddd(v40, v101));
    v99 = _m_paddd(_m_pmaddwd(v106, (int)0x41B3000041B3LL), _m_paddd(v35, v39));
    v90 = _m_paddd(_m_pmaddwd(_m_psrlqi(v106, 0x10u), (int)0x41B3000041B3LL), _m_paddd(v36, v40));
    v43 = _m_psradi(_m_paddd(_m_psubd(v93, v42), (int)0x40000000400LL), 0xBu);
    v44 = _m_paddd(_m_pmaddwd(v107, (int)0x625400006254LL), v111);
    v45 = _m_psradi(_m_paddd(_m_psubd(v96, v41), (int)0x40000000400LL), 0xBu);
    v46 = _m_paddd(_m_pmaddwd(_m_psrlqi(v107, 0x10u), (int)0x625400006254LL), v105);
    v113[14].m64_u64 = (unsigned __int64)_m_punpckldq(_m_punpcklwd(v45, v43), _m_punpckhwd(v45, v43));
    v47 = _m_psradi(_m_paddd(_m_paddd(v42, v93), (int)0x40000000400LL), 0xBu);
    v48 = _m_psradi(_m_paddd(_m_paddd(v41, v96), (int)0x40000000400LL), 0xBu);
    v113->m64_u64 = (unsigned __int64)_m_punpckldq(_m_punpcklwd(v48, v47), _m_punpckhwd(v48, v47));
    v49 = _m_psradi(_m_paddd(_m_psubd(v97, v46), (int)0x40000000400LL), 0xBu);
    v50 = _m_psradi(_m_paddd(_m_psubd(v100, v44), (int)0x40000000400LL), 0xBu);
    v51 = _m_punpcklwd(v50, v49);
    v52 = _m_punpckhwd(v50, v49);
    v53 = _m_psradi(_m_paddd(_m_paddd(v44, v100), (int)0x40000000400LL), 0xBu);
    v113[12].m64_u64 = (unsigned __int64)_m_punpckldq(v51, v52);
    v54 = _m_psradi(_m_paddd(_m_paddd(v46, v97), (int)0x40000000400LL), 0xBu);
    v113[2].m64_u64 = (unsigned __int64)_m_punpckldq(_m_punpcklwd(v53, v54), _m_punpckhwd(v53, v54));
    v55 = _m_psradi(_m_paddd(_m_paddd(v98, v90), (int)0x40000000400LL), 0xBu);
    v56 = _m_psradi(_m_paddd(_m_paddd(v102, v99), (int)0x40000000400LL), 0xBu);
    v57 = _m_psradi(_m_paddd(_m_psubd(v98, v90), (int)0x40000000400LL), 0xBu);
    v113[4].m64_u64 = (unsigned __int64)_m_punpckldq(_m_punpcklwd(v56, v55), _m_punpckhwd(v56, v55));
    v58 = _m_psradi(_m_paddd(_m_psubd(v102, v99), (int)0x40000000400LL), 0xBu);
    v59 = _m_punpckldq(_m_punpcklwd(v58, v57), _m_punpckhwd(v58, v57));
    v60 = _m_psradi(_m_paddd(_m_paddd(v91, v92), (int)0x40000000400LL), 0xBu);
    v61 = _m_psradi(_m_paddd(_m_paddd(v94, v108), (int)0x40000000400LL), 0xBu);
    v62 = _m_psradi(_m_paddd(_m_psubd(v91, v92), (int)0x40000000400LL), 0xBu);
    v113[10].m64_u64 = (unsigned __int64)v59;
    v63 = _m_psradi(_m_paddd(_m_psubd(v94, v108), (int)0x40000000400LL), 0xBu);
    v113[6].m64_u64 = (unsigned __int64)_m_punpckldq(_m_punpcklwd(v60, v61), _m_punpckhwd(v60, v61));
    ++a1;
    ++a2;
    v113[8].m64_u64 = (unsigned __int64)_m_punpckldq(_m_punpcklwd(v62, v63), _m_punpckhwd(v62, v63));
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
    v66 = _m_paddw((int)v114->m64_u64, v65);
    v67 = _m_pmaddwd(v66, (int)0x115100000000LL);
    v68 = _m_pmaddwd(_m_punpckhdq((int)v114->m64_u64, v65), (int)0x3B210000187ELL);
    v69 = _m_psradi(_m_pslldi(_m_punpckldq(v66, _m_psubw((int)v114->m64_u64, v65)), 0x10u), 3u);
    v70 = _m_paddd(
            _m_punpckldq(v68, _m_psrlqi(_m_paddd(_m_pxor(v68, (int)-1LL), (int)0x100000001LL), 0x20u)),
            _m_punpckhdq(v67, v67));
    v71 = v66;
    v72 = _m_paddd(v69, v70);
    v73 = _m_psubd(v69, v70);
    v74 = _m_pmaddwd(_m_paddw(_m_punpckldq(v71, v71), v71), (int)0x25A1000000000000LL);
    v75 = _m_paddd(
            _m_paddd(_m_pxor(_m_pmaddwd(v71, (int)0x3EC500000C7C0000LL), (int)-1LL), (int)0x100000001LL),
            _m_punpckhdq(v74, v74));
    v76 = _m_paddd(
            _m_pxor(
              _m_pmaddwd(
                _m_paddw(
                  _m_punpckhdq((int)v114->m64_u64, _m_punpckldq((int)v114->m64_u64, (int)v114->m64_u64)),
                  v65),
                (int)0x1CCD000052030000LL),
              (int)-1LL),
            (int)0x100000001LL);
    v77 = _m_paddd(_m_pmaddwd(v65, (int)0x98E000041B30000LL), _m_paddd(v76, v75));
    v78 = _m_paddd(
            _m_pmaddwd((int)v114->m64_u64, (int)0x62540000300B0000LL),
            _m_paddd(_m_punpckhdq(v76, _m_punpckldq(v76, v76)), v75));
    v79 = _m_punpckhdq(v77, _m_punpckldq(v77, v77));
    v80 = _m_psubd(v72, v78);
    v81 = _m_psubd(v73, v79);
    v82 = _m_pand(_m_psradi(_m_paddd(_m_paddd(v79, v73), (int)0x2000000020000LL), 0x12u), (int)0x3FF000003FFLL);
    v83 = _m_pand(_m_psradi(_m_paddd(_m_paddd(v78, v72), (int)0x2000000020000LL), 0x12u), (int)0x3FF000003FFLL);
    BYTE1(result) = *(_BYTE *)(a6 + _mm_cvtsi64_si32(v82));
    v84 = *(_DWORD *)(v116 + a4);
    LOBYTE(result) = *(_BYTE *)(a6 + _mm_cvtsi64_si32(_m_psrlqi(v82, 0x20u)));
    v116 += 4;
    v85 = _m_pand(_m_psradi(_m_paddd(v80, (int)0x2000000020000LL), 0x12u), (int)0x3FF000003FFLL);
    v86 = result << 16;
    LOBYTE(v86) = *(_BYTE *)(a6 + _mm_cvtsi64_si32(v83));
    BYTE1(v86) = *(_BYTE *)(a6 + _mm_cvtsi64_si32(_m_psrlqi(v83, 0x20u)));
    v87 = _mm_cvtsi32_si64(v86);
    v88 = _m_pand(_m_psradi(_m_paddd(v81, (int)0x2000000020000LL), 0x12u), (int)0x3FF000003FFLL);
    BYTE1(v86) = *(_BYTE *)(a6 + _mm_cvtsi64_si32(v85));
    LOBYTE(v86) = *(_BYTE *)(a6 + _mm_cvtsi64_si32(_m_psrlqi(v85, 0x20u)));
    v86 <<= 16;
    LOBYTE(v86) = *(_BYTE *)(a6 + _mm_cvtsi64_si32(v88));
    BYTE1(v86) = *(_BYTE *)(a6 + _mm_cvtsi64_si32(_m_psrlqi(v88, 0x20u)));
    v114 += 2;
    *(int *)(a5 + v84) = _m_punpckldq(v87, _mm_cvtsi32_si64(v86));
    result = v118 - 1;
    v118 = result;
  }
  while ( result );
  _m_empty();
  return result;
}
