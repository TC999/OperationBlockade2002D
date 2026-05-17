//----- (0043DC50) --------------------------------------------------------
const char *__thiscall sub_43DC50(_DWORD *this)
{
  const char *v2; // edi
  const char *result; // eax

  v2 = sub_424350(this, aIconup);
  result = sub_424350(this, aIcondown);
  *((_BYTE *)v2 + 44) = this[12] > 0;
  *((_BYTE *)result + 44) = this[12] + 4 < this[13];
  return result;
}
