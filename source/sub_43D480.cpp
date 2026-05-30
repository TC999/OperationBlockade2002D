//----- (0043D480) --------------------------------------------------------
const char *__cdecl sub_43D480(int self)
{
  const char *v2; // edi
  const char *result; // eax
  bool v4; // cl

  sub_424630(*(int **)(self + 40));
  v2 = sub_424350((_DWORD *)self, aRetrybutton);
  result = sub_424350((_DWORD *)self, aAbortbutton);
  v4 = *(_BYTE *)(dword_4F5CC4 + 937) == 0;
  *((_BYTE *)result + 44) = v4;
  *((_BYTE *)v2 + 44) = v4;
  return result;
}
