//----- (0043C3A0) --------------------------------------------------------
int __thiscall sub_43C3A0(_DWORD *this, int a2, int a3, LPVOID *a4, int a5)
{
  int result; // eax

  result = a2;
  if ( a2 == this[11] )
  {
    result = a3;
    if ( a3 < this[28] )
      return sub_421110(a4, (const char *)this[a3 + 12]);
  }
  return result;
}
