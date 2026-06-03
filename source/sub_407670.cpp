//----- (00407670) --------------------------------------------------------
_BYTE *__cdecl sub_407670(_DWORD *self, int a2, char a3)
{
  _BYTE *result; // eax

  result = (_BYTE *)sub_407190(self, a2, 1);
  result[77] = a3;
  return result;
}
