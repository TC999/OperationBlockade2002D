//----- (0043D0F0) --------------------------------------------------------
const char *__thiscall sub_43D0F0(int self)
{
  const char *v2; // eax
  const char *result; // eax

  sub_424630(*(int **)(self + 40));
  v2 = sub_424350((_DWORD *)self, aLine1);
  if ( v2 )
    sub_421110(*((LPVOID **)v2 + 28), aAreYouSureYouW);
  result = sub_424350((_DWORD *)self, aLine2);
  if ( result )
    return (const char *)sub_421190(*((_DWORD *)result + 28), "saved game '%s'?", byte_521580);
  return result;
}
