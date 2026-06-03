//----- (0040AFE0) --------------------------------------------------------
char *__stdcall sub_40AFE0(char *String2, char **a2)
{
  char *result; // eax
  char *v3; // esi
  unsigned int v4; // kr04_4

  result = (char *)sub_40B6E0(0, String2, 1);
  v3 = result;
  if ( result )
  {
    v4 = strlen(result) + 1;
    result = (char *)operator new(v4);
    *a2 = result;
    qmemcpy(result, v3, v4);
  }
  return result;
}
