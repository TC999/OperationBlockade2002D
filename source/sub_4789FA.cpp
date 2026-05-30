//----- (004789FA) --------------------------------------------------------
void (__cdecl **__cdecl sub_4789FA(void (__cdecl **a1)(int a1)))(int a1)
{
  void (__cdecl **result)(int); // eax

  result = a1;
  *a1 = sub_4788E1;
  a1[1] = (void (__cdecl *)(int))sub_47891B;
  a1[2] = (void (__cdecl *)(int))sub_4788FE;
  a1[3] = (void (__cdecl *)(int))sub_47894E;
  a1[4] = (void (__cdecl *)(int))sub_4789E6;
  a1[26] = 0;
  a1[27] = 0;
  a1[5] = 0;
  a1[28] = (void (__cdecl *)(int))off_49A990;
  a1[29] = (void (__cdecl *)(int))119;
  a1[30] = 0;
  a1[31] = 0;
  a1[32] = 0;
  return result;
}
