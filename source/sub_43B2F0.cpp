//----- (0043B2F0) --------------------------------------------------------
int __thiscall sub_43B2F0(_DWORD *this, int a2, int a3, LPVOID *a4, int a5)
{
  int result; // eax

  result = a2;
  if ( a2 == this[13] )
  {
    if ( a3 >= this[12] )
      return sub_421110(a4, AppName);
    else
      return sub_421110(a4, *(const char **)(this[11] + 4 * a3));
  }
  return result;
}
