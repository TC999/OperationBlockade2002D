//----- (0042A840) --------------------------------------------------------
int __thiscall sub_42A840(_DWORD *self)
{
  _DWORD *v2; // ecx
  int result; // eax

  v2 = (_DWORD *)self[141];
  if ( v2 )
  {
    result = sub_403B70(v2);
    self[141] = 0;
  }
  return result;
}
