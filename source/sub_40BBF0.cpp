//----- (0040BBF0) --------------------------------------------------------
void __cdecl sub_40BBF0(int a1, int a2)
{
  int v2; // edi
  int v3; // eax
  int v4; // edx
  int v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // edx
  _DWORD *v8; // ecx
  _DWORD *i; // eax

  v2 = a1;
  if ( a1 )
  {
    *(_DWORD *)a1 = *(_DWORD *)a2;
    *(_BYTE *)(a1 + 4) = *(_BYTE *)(a2 + 4);
    v3 = *(_DWORD *)(a2 + 8);
    if ( v3 )
      v4 = (*(_DWORD *)(a2 + 12) - v3) / 12;
    else
      v4 = 0;
    v5 = v4;
    if ( v4 < 0 )
      v5 = 0;
    v6 = (_DWORD *)operator new(12 * v5);
    *(_DWORD *)(a1 + 8) = (uint32)(uintptr_t)v6;
    v7 = *(_DWORD **)(a2 + 12);
    v8 = v6;
    for ( i = *(_DWORD **)(a2 + 8); i != v7; v8 += 3 )
    {
      if ( v8 )
      {
        *v8 = *i;
        v8[1] = i[1];
        v8[2] = i[2];
        v2 = a1;
      }
      i += 3;
    }
    *(_DWORD *)(v2 + 12) = (uint32)(uintptr_t)v8;
    *(_DWORD *)(v2 + 16) = (uint32)(uintptr_t)v8;
    *(_BYTE *)(v2 + 20) = *(_BYTE *)(a2 + 20);
  }
}
