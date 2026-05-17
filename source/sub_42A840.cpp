//----- (0042A840) --------------------------------------------------------
int __thiscall sub_42A840(_DWORD *this)
{
  _DWORD *v2; // ecx
  int result; // eax

  v2 = (_DWORD *)this[141];
  if ( v2 )
  {
    result = sub_403B70(v2);
    this[141] = 0;
  }
  return result;
}
