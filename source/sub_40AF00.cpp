//----- (0040AF00) --------------------------------------------------------
char *__cdecl sub_40AF00(const char *self, char *ArgList, char **a3)
{
  char *result; // eax
  char *v5; // esi
  char v6; // al
  char v7; // al

  result = (char *)sub_40B6E0(ArgList, 1);
  v5 = result;
  if ( result )
  {
    v6 = *result;
    v7 = *v5 >= 48 && v6 <= 57 || v6 == 45 || v6 == 43;
    sub_40A120(v7, "%s = %s, integer expected, see %s", ArgList, v5, self + 16);
    result = (char *)sub_48A1BB(v5);
    *a3 = result;
  }
  return result;
}
