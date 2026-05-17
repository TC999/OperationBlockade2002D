//----- (004010D0) --------------------------------------------------------
int __cdecl sub_4010D0(_DWORD *a1, int a2)
{
  _DWORD *v2; // eax
  int result; // eax

  v2 = (_DWORD *)sub_4010C0(a2);
  *a1 = *v2;
  a1[1] = v2[1];
  result = v2[2];
  a1[2] = result;
  return result;
}
