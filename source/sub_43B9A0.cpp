//----- (0043B9A0) --------------------------------------------------------
FILE *__stdcall sub_43B9A0(int a1, int ArgList, LPVOID *a3, int a4)
{
  const char *v4; // esi

  v4 = (const char *)sub_45A870((_DWORD *)a1, ArgList);
  sub_421110(a3, v4);
  return sub_4229D0("%d: %s", ArgList, v4);
}
