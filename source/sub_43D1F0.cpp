//----- (0043D1F0) --------------------------------------------------------
const char *__thiscall sub_43D1F0(int self)
{
  const char *v2; // eax
  const char *result; // eax

  sub_424630(*(int **)(self + 40));
  v2 = sub_424350((_DWORD *)self, aErrormsg1);
  if ( v2 )
    sub_421110(*((LPVOID **)v2 + 28), byte_520D80);
  result = sub_424350((_DWORD *)self, aErrormsg2);
  if ( result )
    return (const char *)sub_421110(*((LPVOID **)result + 28), byte_521180);
  return result;
}
