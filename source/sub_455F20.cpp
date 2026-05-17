//----- (00455F20) --------------------------------------------------------
int __thiscall sub_455F20(int *this, int a2)
{
  __int16 v2; // ax
  int result; // eax
  int v4; // esi

  v2 = *(_WORD *)(a2 + 12);
  if ( v2 == 2305 )
    return sub_455850(
             this,
             *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(dword_520970 + 200) + 20) + 4 * *(_DWORD *)(*(_DWORD *)(a2 + 16) + 6)),
             (int *)(*(_DWORD *)(a2 + 16) + 14),
             *(_DWORD *)(*(_DWORD *)(a2 + 16) + 10));
  if ( v2 == 2306 )
    return sub_455DC0(this, *(_DWORD *)(*(_DWORD *)(a2 + 16) + 6));
  result = *(_DWORD *)(*(_DWORD *)(a2 + 16) + 6);
  if ( result >= 0 )
  {
    v4 = this[100];
    if ( v4 )
    {
      if ( result < (unsigned int)((this[101] - v4) >> 2) )
        return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(v4 + 4 * result) + 28))(
                 *(_DWORD *)(v4 + 4 * result),
                 a2);
    }
  }
  return result;
}
