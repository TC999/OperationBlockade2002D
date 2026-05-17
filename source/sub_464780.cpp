//----- (00464780) --------------------------------------------------------
int __thiscall sub_464780(_DWORD *this)
{
  _DWORD *v2; // ecx
  int result; // eax

  *this = &off_499C4C;
  v2 = (_DWORD *)this[7];
  if ( v2 )
  {
    result = sub_403B70(v2);
    this[7] = 0;
  }
  *this = &off_499040;
  return result;
}
