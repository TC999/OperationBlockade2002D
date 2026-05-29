//----- (00448350) --------------------------------------------------------
int __thiscall sub_448350(_DWORD *self, int a2)
{
  int result; // eax
  _DWORD *v3; // esi
  _DWORD *i; // edx

  result = a2;
  v3 = (_DWORD *)self[2];
  for ( i = (_DWORD *)(a2 + 4); i != v3; ++i )
    *(i - 1) = *i;
  self[2] -= 4;
  return result;
}
