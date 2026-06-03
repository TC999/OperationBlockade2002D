//----- (0045D130) --------------------------------------------------------
int __cdecl sub_45D130(_DWORD *self)
{
  _DWORD *v2; // ecx
  int result; // eax
  int (__cdecl ***v4)(_DWORD, int); // ecx

  if ( self[73] != 3 )
  {
    v2 = (_DWORD *)self[162];
    if ( v2 )
    {
      result = sub_403B70(v2);
      v4 = (int (__cdecl ***)(_DWORD, int))self[163];
      self[162] = 0;
      if ( v4 )
        result = (**v4)((uint32)(uintptr_t)v4, 1);
      self[163] = 0;
    }
  }
  return result;
}
