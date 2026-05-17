//----- (0043CAC0) --------------------------------------------------------
int __thiscall sub_43CAC0(_DWORD *this, int a2, int a3, LPVOID *a4, int a5)
{
  int result; // eax

  result = a2;
  if ( a2 == this[18] )
  {
    result = this[15];
    if ( result )
    {
      if ( a3 < *(_DWORD *)(result + 8) )
        return sub_421110(a4, *(const char **)(*(_DWORD *)(result + 12) + 4 * a3 + 4));
    }
  }
  return result;
}
