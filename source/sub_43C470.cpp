//----- (0043C470) --------------------------------------------------------
const char *__thiscall sub_43C470(int this)
{
  const char *result; // eax
  const char *v3; // esi
  CHAR ReturnedString[16]; // [esp+4h] [ebp-10h] BYREF

  sub_424630(*(int **)(this + 40));
  result = sub_424350((_DWORD *)this, aHostip);
  v3 = result;
  if ( result )
  {
    result = (const char *)*((_DWORD *)result + 28);
    if ( result )
    {
      sub_422D00(AppName, aHostip, (CHAR *)0x10, ReturnedString, a127001);
      return (const char *)sub_421110(*((LPVOID **)v3 + 28), ReturnedString);
    }
  }
  return result;
}
