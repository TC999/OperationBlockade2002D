//----- (00478B46) --------------------------------------------------------
int (__cdecl *__cdecl sub_478B46(int a1, const void *a2))(int, _BYTE *)
{
  int (__cdecl *result)(int, _BYTE *); // eax
  _BYTE v3[80]; // [esp+4h] [ebp-50h] BYREF

  sub_478A49(a1, a2);
  result = *(int (__cdecl **)(int, _BYTE *))(a1 + 68);
  if ( result )
    return (int (__cdecl *)(int, _BYTE *))result(a1, v3);
  return result;
}
