//----- (004389A0) --------------------------------------------------------
int __thiscall sub_4389A0(_DWORD *self)
{
  int result; // eax
  int (__thiscall ***v3)(_DWORD, int); // ecx
  _DWORD *v4; // ecx

  result = self[102];
  if ( result )
  {
    result = sub_4286C0(self, self[102]);
    v3 = (int (__thiscall ***)(_DWORD, int))self[102];
    if ( v3 )
      result = (**v3)(v3, 1);
    self[102] = 0;
  }
  v4 = (_DWORD *)self[101];
  if ( v4 )
  {
    result = sub_403B70(v4);
    self[101] = 0;
  }
  return result;
}
