static char aTrue[] = "true";
static char aFalse[] = "false";

//----- (0040B130) --------------------------------------------------------
char __cdecl sub_40B130(const char *self, char *ArgList, _BYTE *a3)
{
  const char *v4; // eax
  const char *v5; // esi
  char v6; // al
  char result; // al

  v4 = (const char *)sub_40B6E0((int)self, ArgList, 1);
  v5 = v4;
  result = 0;
  if ( v4 )
  {
    v6 = !_strcmpi(v4, aTrue) || !_strcmpi(v5, aFalse);
    sub_40A120(v6, (char *)"%s = %s, expected true/false, see %s", ArgList, v5, self + 16);
    result = _strcmpi(v5, aTrue) == 0;
    *a3 = result;
  }
  return result;
}
