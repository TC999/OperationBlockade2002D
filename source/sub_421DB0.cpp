//----- (00421DB0) --------------------------------------------------------
char *__stdcall sub_421DB0(int a1, char a2)
{
  char *result; // eax
  char v3; // cl

  result = *(char **)(a1 + 264);
  v3 = *result;
  if ( !*result )
    return 0;
  while ( v3 != a2 )
  {
    v3 = result[28];
    result += 28;
    if ( !v3 )
      return 0;
  }
  return result;
}
