//----- (0040AD80) --------------------------------------------------------
bool __stdcall sub_40AD80(char *String2)
{
  const char *v1; // eax

  v1 = (const char *)sub_40B6E0(String2, 0);
  return v1 && strstr(v1, asc_4A1FC8) != 0;
}
