//----- (0043CAC0) --------------------------------------------------------
int __cdecl sub_43CAC0(_DWORD *self, int a2, int a3, LPVOID *a4, int a5)
{
  int result; // eax

  result = a2;
  if ( a2 == self[18] )
  {
    result = (int)self[15];
    if ( result )
    {
      if ( a3 < *(_DWORD *)(result + 8) )
        return 0;
    }
  }
  return result;
}
