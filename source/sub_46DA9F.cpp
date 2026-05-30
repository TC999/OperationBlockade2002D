//----- (0046DA9F) --------------------------------------------------------
int __cdecl sub_46DA9F(_DWORD *self)
{
  int (__cdecl ***v2)(_DWORD, int); // ecx
  int result; // eax

  v2 = (int (__cdecl ***)(_DWORD, int))self[1];
  if ( v2 )
    result = (**v2)(v2, 1);
  if ( *self )
    return (**(int (__cdecl ***)(_DWORD, int))*self)(*self, 1);
  return result;
}
