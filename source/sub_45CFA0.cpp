//----- (0045CFA0) --------------------------------------------------------
int __thiscall sub_45CFA0(int this)
{
  int v2; // ebx
  _DWORD *v3; // edi
  int v4; // eax

  sub_45D070();
  v2 = 0;
  if ( *(int *)(this + 656) > 0 )
  {
    v3 = (_DWORD *)(this + 668);
    do
    {
      v4 = *(v3 - 1);
      if ( v4 != -1 )
        sub_403C80(v4, 1);
      if ( *v3 != -1 )
        sub_403C80(*v3, 1);
      ++v2;
      v3 += 3;
    }
    while ( v2 < *(_DWORD *)(this + 656) );
  }
  if ( !*(_DWORD *)(this + 292) && *(_BYTE *)(this + 805) )
  {
    sub_4282E0(*(_DWORD *)(this + 808) > -1, aDeleteExtradat);
    sub_408640(*(_DWORD *)(this + 808), 0);
  }
  return sub_4690E0(this);
}
