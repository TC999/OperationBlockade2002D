//----- (00426040) --------------------------------------------------------
const char *__thiscall sub_426040(_DWORD *self, char *String2)
{
  _DWORD *v2; // ecx

  v2 = (_DWORD *)self[13];
  if ( v2 )
    return sub_424350(v2, String2);
  else
    return 0;
}
