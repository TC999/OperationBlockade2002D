//----- (00428D50) --------------------------------------------------------
int __thiscall sub_428D50(_DWORD *self, const char *a2)
{
  _DWORD *v3; // ebp
  int result; // eax
  char v5[256]; // [esp+10h] [ebp-100h] BYREF

  v3 = self + 71;
  sub_429E70(v5, 256);
  result = strcmp(a2, v5);
  if ( result )
  {
    self[72] = 3;
    result = sub_42A5C0(v3);
    self[73] = result;
  }
  return result;
}
