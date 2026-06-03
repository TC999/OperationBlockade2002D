//----- (00465F20) --------------------------------------------------------
int __cdecl sub_465F20(_DWORD *self)
{
  int v2; // eax
  int v3; // ebx
  int i; // edi
  void (__cdecl ***v5)(_DWORD, int); // ecx
  int result; // eax

  v2 = self[6];
  if ( v2 )
    v3 = (self[7] - v2) >> 2;
  else
    v3 = 0;
  for ( i = 0; i < v3; ++i )
  {
    sub_428720(*(_DWORD **)(self[6] + 4 * i));
    sub_4286C0(self, *(_DWORD *)(self[6] + 4 * i));
    v5 = *(void (__cdecl ****)(_DWORD, int))(self[6] + 4 * i);
    if ( v5 )
      (**v5)((uint32)(uintptr_t)v5, 1);
  }
  result = self[7];
  self[7] = self[6];
  return result;
}
