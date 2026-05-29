//----- (00428DE0) --------------------------------------------------------
char __thiscall sub_428DE0(_DWORD *self, char a2)
{
  _DWORD *v3; // edi
  int v4; // eax
  char v6; // [esp+Bh] [ebp-1h] BYREF

  v3 = self + 71;
  if ( !(unsigned __int8)sub_42A4F0(&v6) || (LOBYTE(v4) = a2, v6 != a2) )
  {
    self[72] = 3;
    v4 = sub_42A5C0(v3);
    self[73] = v4;
  }
  return v4;
}
