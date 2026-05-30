//----- (0040AFC0) --------------------------------------------------------
int __cdecl sub_40AFC0(void *self, char *String2, _DWORD *a3)
{
  int result; // eax

  result = sub_40B6E0((int)self, String2, 1);
  if ( result )
    *a3 = result;
  return result;
}
