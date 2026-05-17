//----- (0040AFC0) --------------------------------------------------------
int __thiscall sub_40AFC0(void *this, char *String2, _DWORD *a3)
{
  int result; // eax

  result = sub_40B6E0((int)this, String2, 1);
  if ( result )
    *a3 = result;
  return result;
}
