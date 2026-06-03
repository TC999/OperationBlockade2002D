//----- (00464780) --------------------------------------------------------
int __cdecl sub_464780(_DWORD *self)
{
  _DWORD *v2; // ecx
  int result; // eax

  *self = (uint32)&off_499C4C;
  v2 = (_DWORD *)self[7];
  if ( v2 )
  {
    result = sub_403B70(v2);
    self[7] = 0;
  }
  *self = (uint32)&off_499040;
  return result;
}
