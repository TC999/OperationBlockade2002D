//----- (00462A80) --------------------------------------------------------
int __thiscall sub_462A80(_DWORD *self, _BYTE *a2, _BYTE *a3)
{
  int i; // esi
  int result; // eax
  int v6; // edx
  int v7; // edx

  *a2 = 0;
  *a3 = 0;
  for ( i = 0; ; ++i )
  {
    result = self[642];
    if ( !result || i >= (unsigned int)((self[643] - result) >> 3) )
      break;
    v6 = *(_DWORD *)(result + 8 * i);
    if ( *(_DWORD *)(v6 + 292) == 2 && sub_4629B0((int)self, *(_DWORD *)(v6 + 296)) )
      *a2 = 1;
    if ( i > 0 )
    {
      v7 = *(_DWORD *)(self[642] + 8 * i);
      if ( *(_DWORD *)(v7 + 292) != 2 )
      {
        if ( sub_4629B0((int)self, *(_DWORD *)(v7 + 296)) )
          *a3 = 1;
      }
    }
  }
  return result;
}
