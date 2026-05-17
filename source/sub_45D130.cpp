//----- (0045D130) --------------------------------------------------------
int __thiscall sub_45D130(_DWORD *this)
{
  _DWORD *v2; // ecx
  int result; // eax
  int (__thiscall ***v4)(_DWORD, int); // ecx

  if ( this[73] != 3 )
  {
    v2 = (_DWORD *)this[162];
    if ( v2 )
    {
      result = sub_403B70(v2);
      v4 = (int (__thiscall ***)(_DWORD, int))this[163];
      this[162] = 0;
      if ( v4 )
        result = (**v4)(v4, 1);
      this[163] = 0;
    }
  }
  return result;
}
