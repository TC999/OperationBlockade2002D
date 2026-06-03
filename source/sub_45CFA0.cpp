extern char aDeleteExtradat[];

//----- (0045CFA0) --------------------------------------------------------
int __cdecl sub_45CFA0(int self)
{
  int v2; // ebx
  _DWORD *v3; // edi
  int v4; // eax

  sub_45D070(self);
  v2 = 0;
  if ( *(int *)(self + 656) > 0 )
  {
    v3 = (_DWORD *)(self + 668);
    do
    {
      v4 = *(v3 - 1);
      if ( v4 != -1 )
        sub_403C80((_DWORD *)v4, 1, 0);
      if ( *v3 != -1 )
        sub_403C80((_DWORD *)*v3, 1, 0);
      ++v2;
      v3 += 3;
    }
    while ( v2 < *(_DWORD *)(self + 656) );
  }
  if ( !*(_DWORD *)(self + 292) && *(_BYTE *)(self + 805) )
  {
    sub_4282E0(*(_DWORD *)(self + 808) > -1, aDeleteExtradat);
    sub_408640((_DWORD *)self, *(_DWORD *)(self + 808), 0);
  }
  return sub_4690E0((_DWORD *)(uintptr_t)self);
}
