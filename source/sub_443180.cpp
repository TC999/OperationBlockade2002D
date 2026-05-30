//----- (00443180) --------------------------------------------------------
__int16 __cdecl sub_443180(_DWORD *self, int a2)
{
  unsigned int v2; // eax
  int v3; // edx

  if ( *(_WORD *)(a2 + 12) == 513 )
  {
    LOWORD(v2) = (unsigned __int16)sub_442F80(
                                     self,
                                     *(_WORD **)(*(_DWORD *)(*(_DWORD *)(dword_520970 + 200) + 20)
                                               + 4 * *(unsigned __int16 *)(*(_DWORD *)(a2 + 16) + 6)));
  }
  else
  {
    v2 = *(unsigned __int16 *)(*(_DWORD *)(a2 + 16) + 6);
    v3 = self[6];
    if ( v3 && v2 < (self[7] - v3) >> 2 )
      LOWORD(v2) = (*(int (__cdecl **)(_DWORD, int))(**(_DWORD **)(v3 + 4 * v2) + 28))(*(_DWORD *)(v3 + 4 * v2), a2);
  }
  return v2;
}
