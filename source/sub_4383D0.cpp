//----- (004383D0) --------------------------------------------------------
char *__cdecl sub_4383D0(char *self, int a2)
{
  char *result; // eax

  result = &self[140 * a2 + 596];
  *((_DWORD *)result + 24) = 0;
  *((_DWORD *)result + 23) = 0;
  *((_DWORD *)result + 30) = 1065353216;
  *((_DWORD *)result + 29) = 1065353216;
  *((_DWORD *)result + 28) = 1065353216;
  *((_DWORD *)result + 31) = 0;
  *((_DWORD *)result + 33) = 0;
  *((_DWORD *)result + 32) = 0;
  *((_DWORD *)result + 34) = 1065353216;
  if ( a2 < 12 )
    return (char *)sub_438460((_DWORD **)self, a2, 0.0, 0.0, 0.0);
  return result;
}
