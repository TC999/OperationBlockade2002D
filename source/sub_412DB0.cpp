//----- (00412DB0) --------------------------------------------------------
int __userpurge sub_412DB0(int a1, int a2, int a3)
{
  int result; // eax
  int v5; // edi
  _BYTE v7[4]; // [esp+14h] [ebp-4h] BYREF
  _DWORD *retaddr; // [esp+18h] [ebp+0h]

  result = *(_DWORD *)(a1 + 100);
  if ( result )
  {
    v5 = (unsigned __int8)*(_DWORD *)(a1 + 96)
       | (((unsigned __int8)*(_DWORD *)(a1 + 92) | (((result << 8) | (unsigned __int8)*(_DWORD *)(a1 + 88)) << 8)) << 8);
    if ( *(_BYTE *)(a1 + 112) )
    {
      (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, _BYTE *, _DWORD, int))(**(_DWORD **)(a1 + 116) + 44))(
        *(_DWORD *)(a1 + 116),
        0,
        0,
        v7,
        0,
        a2);
      *retaddr = *(_DWORD *)(a1 + 20);
      retaddr[1] = *(_DWORD *)(a1 + 24);
      if ( *(float *)(a1 + 64) != 0.0 )
        sub_4131D0(retaddr, retaddr + 1);
      retaddr[2] = *(_DWORD *)(a1 + 36);
      retaddr[3] = 1065353216;
      retaddr[4] = v5;
      retaddr[5] = *(_DWORD *)(a1 + 40);
      retaddr[6] = *(_DWORD *)(a1 + 44);
      retaddr[7] = *(_DWORD *)(a1 + 28);
      retaddr[8] = *(_DWORD *)(a1 + 24);
      if ( *(float *)(a1 + 64) != 0.0 )
        sub_4131D0(retaddr + 7, retaddr + 8);
      retaddr[9] = *(_DWORD *)(a1 + 36);
      retaddr[10] = 1065353216;
      retaddr[11] = v5;
      retaddr[12] = *(_DWORD *)(a1 + 48);
      retaddr[13] = *(_DWORD *)(a1 + 44);
      retaddr[14] = *(_DWORD *)(a1 + 20);
      retaddr[15] = *(_DWORD *)(a1 + 32);
      if ( *(float *)(a1 + 64) != 0.0 )
        sub_4131D0(retaddr + 14, retaddr + 15);
      retaddr[16] = *(_DWORD *)(a1 + 36);
      retaddr[17] = 1065353216;
      retaddr[18] = v5;
      retaddr[19] = *(_DWORD *)(a1 + 40);
      retaddr[20] = *(_DWORD *)(a1 + 52);
      retaddr[21] = *(_DWORD *)(a1 + 28);
      retaddr[22] = *(_DWORD *)(a1 + 32);
      if ( *(float *)(a1 + 64) != 0.0 )
        sub_4131D0(retaddr + 21, retaddr + 22);
      retaddr[23] = *(_DWORD *)(a1 + 36);
      retaddr[24] = 1065353216;
      retaddr[25] = v5;
      retaddr[26] = *(_DWORD *)(a1 + 48);
      retaddr[27] = *(_DWORD *)(a1 + 52);
      (*(void (__cdecl **)(_DWORD))(**(_DWORD **)(a1 + 116) + 48))(*(_DWORD *)(a1 + 116));
      *(_BYTE *)(a1 + 112) = 0;
    }
    sub_41BC00(1, (*(_BYTE *)(a1 + 105) != 0) + 1, 1, 0, 1, -1, 0);
    (*(void (__stdcall **)(_DWORD, _DWORD, int, _DWORD))(**(_DWORD **)ArgList + 252))(*(_DWORD *)ArgList, 0, 11, 0);
    (*(void (__stdcall **)(_DWORD, _DWORD, int, _DWORD))(**(_DWORD **)ArgList + 252))(*(_DWORD *)ArgList, 0, 24, 0);
    sub_41BEF0(0, *(_DWORD *)(a1 + 108), *(_BYTE *)(a1 + 104) != 0, 1);
    sub_41BEF0(1, 0, -1, -1);
    (*(void (__stdcall **)(_DWORD, int))(**(_DWORD **)ArgList + 304))(*(_DWORD *)ArgList, 324);
    (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, int))(**(_DWORD **)ArgList + 332))(
      *(_DWORD *)ArgList,
      0,
      *(_DWORD *)(a1 + 116),
      28);
    (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)ArgList + 340))(
      *(_DWORD *)ArgList,
      *(_DWORD *)(a1 + 120),
      0);
    (*(void (__stdcall **)(_DWORD, int, _DWORD, int, _DWORD, int))(**(_DWORD **)ArgList + 284))(
      *(_DWORD *)ArgList,
      4,
      0,
      4,
      0,
      2);
    *(float *)dword_520A20 = *(float *)dword_520A20 + 1.0;
    return 2;
  }
  return result;
}
