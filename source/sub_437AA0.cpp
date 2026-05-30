//----- (00437AA0) --------------------------------------------------------
char *__cdecl sub_437AA0(char *self, int a2, int a3)
{
  char *result; // eax

  result = &self[140 * a2 + 596];
  *((_DWORD *)result + 31) = 6;
  *((_DWORD *)result + 32) = a3;
  *((_DWORD *)result + 33) = 0;
  *((_DWORD *)result + 34) = 1058642330;
  return result;
}
