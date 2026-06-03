//----- (0042FC10) --------------------------------------------------------
unsigned int __cdecl sub_42FC10(_DWORD *self, int a2)
{
  __int16 v2; // ax
  int v4; // edi
  unsigned int result; // eax
  int v6; // ecx
  int v7; // ecx
  float v8; // [esp+0h] [ebp-14h]

  v2 = *(_WORD *)(a2 + 12);
  if ( v2 == 257 )
  {
    v4 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(dword_520970 + 200) + 20) + 4 * *(_DWORD *)(*(_DWORD *)(a2 + 16) + 6));
    v8 = fabs((double)rand() * 0.000030518509);
    return sub_42FCC0((_DWORD *)v4, LODWORD(v8), -1, -1);
  }
  else
  {
    result = v2 & 0xFF00;
    if ( result == 256 )
    {
      v6 = self[6];
      for ( result = 0; v6 && result < (self[7] - v6) >> 2; ++result )
      {
        if ( *(_DWORD *)(*(_DWORD *)(self[6] + 4 * result) + 392) == *(__int16 *)(*(_DWORD *)(a2 + 16) + 6) )
        {
          v7 = *(_DWORD *)(self[6] + 4 * result);
          return (*(int (__cdecl **)(int, int))(*(_DWORD *)v7 + 28))(v7, a2);
        }
      }
    }
  }
  return result;
}
