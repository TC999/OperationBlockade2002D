//----- (00450A30) --------------------------------------------------------
char __thiscall sub_450A30(int self, int a2)
{
  _DWORD *v4; // ecx

  if ( *(_BYTE *)(self + 168) )
    return sub_4285C0((_DWORD *)self, a2);
  if ( (_BYTE)a2 == 27 )
  {
    v4 = *(_DWORD **)(self + 232);
    if ( v4 )
    {
      if ( !v4[13] && !*(_BYTE *)(*(_DWORD *)(self + 248) + 16) && !*(_BYTE *)(*(_DWORD *)(self + 228) + 16) )
        sub_4261C0(v4, aIngamemenu, 0);
    }
  }
  return sub_4285C0((_DWORD *)self, a2);
}
