//----- (00465D90) --------------------------------------------------------
int __cdecl sub_465D90(_DWORD *self, int a2)
{
  int result; // eax
  int v3; // edx

  if ( *(_WORD *)(a2 + 12) == 2049 )
  {
    int v_entity = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(dword_520970 + 200) + 20) + 4 * *(_DWORD *)(*(_DWORD *)(a2 + 16) + 6));
    return sub_465E00((_DWORD *)v_entity, *(_DWORD *)(v_entity + 412), *(_DWORD *)(*(_DWORD *)(a2 + 16) + 10));
  }
  result = *(__int16 *)(*(_DWORD *)(a2 + 16) + 6);
  if ( result >= 0 )
  {
    v3 = self[6];
    if ( v3 )
    {
      if ( result < (unsigned int)((self[7] - v3) >> 2) )
        return (*(int (__cdecl **)(_DWORD, int))(**(_DWORD **)(v3 + 4 * result) + 28))(
                 *(_DWORD *)(v3 + 4 * result),
                 a2);
    }
  }
  return result;
}
