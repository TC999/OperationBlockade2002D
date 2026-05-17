//----- (0046B982) --------------------------------------------------------
int __stdcall sub_46B982(int a1, int a2)
{
  int result; // eax
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx

  result = a1;
  if ( !a1 || !a2 )
    return 0;
  v3 = *(_DWORD *)(a2 + 16);
  *(float *)(a1 + 16) = *(float *)(a2 + 4);
  *(_DWORD *)(a1 + 4) = v3;
  v4 = *(_DWORD *)(a2 + 32);
  *(float *)(a1 + 32) = *(float *)(a2 + 8);
  *(_DWORD *)(a1 + 8) = v4;
  v5 = *(_DWORD *)(a2 + 48);
  *(float *)(a1 + 48) = *(float *)(a2 + 12);
  *(_DWORD *)(a1 + 12) = v5;
  v6 = *(_DWORD *)(a2 + 36);
  *(float *)(a1 + 36) = *(float *)(a2 + 24);
  *(_DWORD *)(a1 + 24) = v6;
  v7 = *(_DWORD *)(a2 + 52);
  *(float *)(a1 + 52) = *(float *)(a2 + 28);
  *(_DWORD *)(a1 + 28) = v7;
  v8 = *(_DWORD *)(a2 + 56);
  *(float *)(a1 + 56) = *(float *)(a2 + 44);
  *(_DWORD *)(a1 + 44) = v8;
  if ( a1 != a2 )
  {
    *(_DWORD *)a1 = *(_DWORD *)a2;
    *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 20);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
    *(_DWORD *)(a1 + 60) = *(_DWORD *)(a2 + 60);
  }
  return result;
}
