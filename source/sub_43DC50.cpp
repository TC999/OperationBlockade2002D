//----- (0043DC50) --------------------------------------------------------
const char *__thiscall sub_43DC50(_DWORD *self)
{
  const char *v2; // edi
  const char *result; // eax

  v2 = sub_424350(self, aIconup);
  result = sub_424350(self, aIcondown);
  *((_BYTE *)v2 + 44) = self[12] > 0;
  *((_BYTE *)result + 44) = self[12] + 4 < self[13];
  return result;
}
