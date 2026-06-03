//----- (0043C3A0) --------------------------------------------------------
int __cdecl sub_43C3A0(_DWORD *self, int a2, int a3, LPVOID *a4, int a5)
{
  int result; // eax

  result = a2;
  if ( a2 == self[11] )
  {
    result = a3;
    if ( a3 < self[28] )
      return 0;
  }
  return result;
}
