//----- (0044F3A0) --------------------------------------------------------
void __cdecl sub_44F3A0(int a1, int a2)
{
  int v2; // eax
  int v3; // edx
  int v4; // eax
  char *v5; // eax
  char *v6; // ebp
  char *v7; // edx
  char *i; // eax

  if ( a1 )
  {
    *(_DWORD *)a1 = *(_DWORD *)a2;
    *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
    *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
    *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
    *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
    *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 20);
    *(_BYTE *)(a1 + 24) = *(_BYTE *)(a2 + 24);
    v2 = *(_DWORD *)(a2 + 28);
    if ( v2 )
      v3 = (*(_DWORD *)(a2 + 32) - v2) / 268;
    else
      v3 = 0;
    v4 = v3;
    if ( v3 < 0 )
      v4 = 0;
    v5 = (char *)operator new(268 * v4);
    *(_DWORD *)(a1 + 28) = v5;
    v6 = *(char **)(a2 + 32);
    v7 = v5;
    for ( i = *(char **)(a2 + 28); i != v6; v7 += 268 )
    {
      if ( v7 )
        qmemcpy(v7, i, 0x10Cu);
      i += 268;
    }
    *(_DWORD *)(a1 + 32) = v7;
    *(_DWORD *)(a1 + 36) = v7;
  }
}
