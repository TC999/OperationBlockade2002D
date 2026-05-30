//----- (0043BB90) --------------------------------------------------------
const char *__cdecl sub_43BB90(int self)
{
  const char *result; // eax
  const char *v3; // esi

  sub_424630(*(int **)(self + 40));
  result = sub_424350((_DWORD *)self, aNameedit);
  v3 = result;
  if ( result )
  {
    sub_422D00(AppName, aNetusername, (CHAR *)0x18, String, Default);
    return (const char *)sub_421110(*((LPVOID **)v3 + 28), String);
  }
  return result;
}
