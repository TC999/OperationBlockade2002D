//----- (00428680) --------------------------------------------------------
int __cdecl sub_428680(_DWORD *self, int a2)
{
  int v2; // edx
  int i; // eax
  int result; // eax

  v2 = self[3];
  if ( v2 )
  {
    for ( i = *(_DWORD *)(v2 + 8); i; i = *(_DWORD *)(i + 8) )
      v2 = i;
    result = a2;
    *(_DWORD *)(v2 + 8) = a2;
    *(_DWORD *)(a2 + 8) = 0;
    *(_DWORD *)(a2 + 4) = (uint32)self;
  }
  else
  {
    result = a2;
    self[3] = a2;
    *(_DWORD *)(a2 + 8) = 0;
    *(_DWORD *)(a2 + 4) = (uint32)self;
  }
  return result;
}
