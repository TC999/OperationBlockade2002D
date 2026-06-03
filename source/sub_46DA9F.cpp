//----- (0046DA9F) --------------------------------------------------------
int __cdecl sub_46DA9F(_DWORD *self)
{
  int (__cdecl ***v2)(_DWORD, int); // ecx
  int result = 0; // eax

  v2 = (int (__cdecl ***)(_DWORD, int))self[1];
  if ( v2 )
    result = (**v2)((uint32)(void*)v2, 1);
  if ( *self )
    return (**(int (__cdecl ***)(_DWORD, int))*self)((uint32)(void*)*self, 1);
  return result;
}
