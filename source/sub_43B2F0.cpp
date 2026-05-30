//----- (0043B2F0) --------------------------------------------------------
int __cdecl sub_43B2F0(_DWORD *self, int a2, int a3, LPVOID *a4, int a5)
{
  int result; // eax

  result = a2;
  if ( a2 == self[13] )
  {
    if ( a3 >= self[12] )
      return sub_421110(a4, AppName);
    else
      return sub_421110(a4, *(const char **)(self[11] + 4 * a3));
  }
  return result;
}
