//----- (00438430) --------------------------------------------------------
char *__thiscall sub_438430(char *this, int a2, int a3, int a4, int a5)
{
  char *result; // eax

  result = &this[140 * a2 + 596];
  *((_DWORD *)result + 28) = a3;
  *((_DWORD *)result + 29) = a4;
  *((_DWORD *)result + 30) = a5;
  return result;
}
