//----- (00465D90) --------------------------------------------------------
int __thiscall sub_465D90(_DWORD *this, int a2)
{
  int result; // eax
  int v3; // edx

  if ( *(_WORD *)(a2 + 12) == 2049 )
    return sub_465E00(
             *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(dword_520970 + 200) + 20) + 4 * *(_DWORD *)(*(_DWORD *)(a2 + 16) + 6)),
             *(_DWORD *)(*(_DWORD *)(a2 + 16) + 10));
  result = *(__int16 *)(*(_DWORD *)(a2 + 16) + 6);
  if ( result >= 0 )
  {
    v3 = this[6];
    if ( v3 )
    {
      if ( result < (unsigned int)((this[7] - v3) >> 2) )
        return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(v3 + 4 * result) + 28))(
                 *(_DWORD *)(v3 + 4 * result),
                 a2);
    }
  }
  return result;
}
