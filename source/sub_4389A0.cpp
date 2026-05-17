//----- (004389A0) --------------------------------------------------------
int __thiscall sub_4389A0(_DWORD *this)
{
  int result; // eax
  int (__thiscall ***v3)(_DWORD, int); // ecx
  _DWORD *v4; // ecx

  result = this[102];
  if ( result )
  {
    result = sub_4286C0(this, this[102]);
    v3 = (int (__thiscall ***)(_DWORD, int))this[102];
    if ( v3 )
      result = (**v3)(v3, 1);
    this[102] = 0;
  }
  v4 = (_DWORD *)this[101];
  if ( v4 )
  {
    result = sub_403B70(v4);
    this[101] = 0;
  }
  return result;
}
