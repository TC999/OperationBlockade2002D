//----- (00409BE0) --------------------------------------------------------
// positive sp value has been detected, the output may be wrong!
char __userpurge sub_409BE0@<al>(
        int a1@<ecx>,
        int a2@<ebx>,
        int a3@<ebp>,
        int a4@<edi>,
        int a5@<esi>,
        float a6,
        float a7,
        float a8,
        float a9,
        float a10,
        int a11,
        float a12,
        float a13,
        int a14)
{
  double v15; // st6
  int v16; // edi
  double v17; // st7
  __int64 v18; // rax
  _DWORD *v19; // ebp
  _DWORD *v21; // edi
  int i; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v31; // [esp+50h] [ebp-4h]
  float retaddr; // [esp+54h] [ebp+0h] BYREF
  int j; // [esp+58h] [ebp+4h]
  int k; // [esp+58h] [ebp+4h]
  int m; // [esp+58h] [ebp+4h]
  int n; // [esp+58h] [ebp+4h]
  _WORD *v37; // [esp+64h] [ebp+10h]
  _WORD *v38; // [esp+64h] [ebp+10h]

  *(float *)(a1 + 64) = a10;
  *(float *)(a1 + 28) = a7;
  *(float *)(a1 + 20) = retaddr;
  *(float *)(a1 + 24) = a6;
  *(float *)(a1 + 32) = a8;
  *(float *)(a1 + 36) = a9;
  if ( a9 == 0.0 )
    v15 = 0.0;
  else
    v15 = (a8 - a7) / a9;
  v16 = (__int64)(v15 + 1.0);
  *(_DWORD *)(a1 + 40) = v16;
  if ( a9 == 0.0 )
    v17 = 0.0;
  else
    v17 = (a6 - retaddr) / a9;
  v18 = (__int64)(v17 + 1.0);
  *(_DWORD *)(a1 + 44) = v18;
  LODWORD(v18) = 2 * (v16 + v18);
  v19 = (_DWORD *)(a1 + 48);
  *(_DWORD *)(a1 + 56) = v18;
  *(_DWORD *)(a1 + 60) = v18;
  if ( (*(int (__stdcall **)(_DWORD, _DWORD, int, int, int, int))(**(_DWORD **)ArgList + 92))(
         *(_DWORD *)ArgList,
         16 * v18,
         8,
         66,
         1,
         a1 + 48) < 0 )
    return 0;
  v21 = (_DWORD *)(a1 + 52);
  if ( (*(int (__stdcall **)(_DWORD, int, int, int, int, int))(**(_DWORD **)ArgList + 96))(
         *(_DWORD *)ArgList,
         2 * *(_DWORD *)(a1 + 60),
         8,
         101,
         1,
         a1 + 52) < 0 )
    return 0;
  (*(void (__stdcall **)(_DWORD, _DWORD, int, float *, _DWORD, int, int, int, int))(*(_DWORD *)*v21 + 44))(
    *v21,
    0,
    2 * *(_DWORD *)(a1 + 60),
    &retaddr,
    0,
    a4,
    a5,
    a3,
    a2);
  for ( i = 0; i < *(_DWORD *)(a1 + 40); LODWORD(a9) = v37 + 1 )
  {
    *(_WORD *)LODWORD(a9) = i;
    v37 = (_WORD *)(LODWORD(a9) + 2);
    *v37 = *(_WORD *)(a1 + 40) + i++;
  }
  v23 = 2 * *(_DWORD *)(a1 + 40);
  if ( v23 < v23 + *(_DWORD *)(a1 + 44) )
  {
    do
    {
      *(_WORD *)LODWORD(a9) = v23;
      v38 = (_WORD *)(LODWORD(a9) + 2);
      *v38 = *(_WORD *)(a1 + 44) + v23;
      LODWORD(a9) = v38 + 1;
      ++v23;
    }
    while ( v23 < *(_DWORD *)(a1 + 44) + 2 * *(_DWORD *)(a1 + 40) );
  }
  (*(void (__stdcall **)(_DWORD, int))(*(_DWORD *)*v21 + 48))(*v21, v31);
  if ( (*(int (__cdecl **)(_DWORD, _DWORD, _DWORD, int *, _DWORD))(*(_DWORD *)*v19 + 44))(*v19, 0, 0, &a14, 0) < 0 )
    return 0;
  v24 = 0;
  for ( j = 0; v24 < *(_DWORD *)(a1 + 40); j = v24 )
  {
    *(float *)LODWORD(a9) = (double)j * *(float *)(a1 + 36) + *(float *)(a1 + 20);
    *(_DWORD *)(LODWORD(a9) + 4) = *(_DWORD *)(a1 + 32);
    *(_DWORD *)(LODWORD(a9) + 8) = 0;
    *(_DWORD *)(LODWORD(a9) + 12) = *(_DWORD *)(a1 + 64);
    ++v24;
    LODWORD(a9) += 16;
  }
  v25 = 0;
  for ( k = 0; v25 < *(_DWORD *)(a1 + 40); k = v25 )
  {
    *(float *)LODWORD(a9) = (double)k * *(float *)(a1 + 36) + *(float *)(a1 + 20);
    *(_DWORD *)(LODWORD(a9) + 4) = *(_DWORD *)(a1 + 28);
    *(_DWORD *)(LODWORD(a9) + 8) = 0;
    *(_DWORD *)(LODWORD(a9) + 12) = *(_DWORD *)(a1 + 64);
    ++v25;
    LODWORD(a9) += 16;
  }
  v26 = 0;
  for ( m = 0; v26 < *(_DWORD *)(a1 + 44); m = v26 )
  {
    *(_DWORD *)LODWORD(a9) = *(_DWORD *)(a1 + 24);
    *(float *)(LODWORD(a9) + 4) = (double)m * *(float *)(a1 + 36) + *(float *)(a1 + 28);
    *(_DWORD *)(LODWORD(a9) + 8) = 0;
    *(_DWORD *)(LODWORD(a9) + 12) = *(_DWORD *)(a1 + 64);
    ++v26;
    LODWORD(a9) += 16;
  }
  v27 = 0;
  for ( n = 0; v27 < *(_DWORD *)(a1 + 44); n = v27 )
  {
    *(_DWORD *)LODWORD(a9) = *(_DWORD *)(a1 + 20);
    *(float *)(LODWORD(a9) + 4) = (double)n * *(float *)(a1 + 36) + *(float *)(a1 + 28);
    *(_DWORD *)(LODWORD(a9) + 8) = 0;
    *(_DWORD *)(LODWORD(a9) + 12) = *(_DWORD *)(a1 + 64);
    ++v27;
    LODWORD(a9) += 16;
  }
  (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*v19 + 48))(*v19);
  sub_409960((_DWORD *)dword_520970, a1)[3] = 2;
  return 1;
}
