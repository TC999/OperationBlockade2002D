//----- (00438430) --------------------------------------------------------
char *__cdecl sub_438430(char *self, int a2, int a3, int a4, int a5)
{
  char *result; // eax

  result = &self[140 * a2 + 596];
  *((_DWORD *)result + 28) = a3;
  *((_DWORD *)result + 29) = a4;
  *((_DWORD *)result + 30) = a5;
  return result;
}
