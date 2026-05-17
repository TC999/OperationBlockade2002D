//----- (0043D1F0) --------------------------------------------------------
const char *__thiscall sub_43D1F0(int this)
{
  const char *v2; // eax
  const char *result; // eax

  sub_424630(*(int **)(this + 40));
  v2 = sub_424350((_DWORD *)this, aErrormsg1);
  if ( v2 )
    sub_421110(*((LPVOID **)v2 + 28), byte_520D80);
  result = sub_424350((_DWORD *)this, aErrormsg2);
  if ( result )
    return (const char *)sub_421110(*((LPVOID **)result + 28), byte_521180);
  return result;
}
