//----- (0042FE50) --------------------------------------------------------
char __thiscall sub_42FE50(_DWORD *this)
{
  int v1; // eax
  int v2; // edx
  int v3; // esi
  char result; // al
  int i; // edi
  int v6; // ecx

  v1 = this[6];
  if ( v1 )
    v2 = (this[7] - v1) >> 2;
  else
    v2 = 0;
  v3 = 0;
  result = 1;
  if ( v2 > 0 )
  {
    for ( i = this[6]; ; i += 4 )
    {
      if ( *(_BYTE *)(*(_DWORD *)i + 396) )
      {
        v6 = *(_DWORD *)(*(_DWORD *)i + 428);
        if ( *(_DWORD *)(v6 + 292) != 1 && !*(_BYTE *)(v6 + 300) )
          break;
      }
      if ( ++v3 >= v2 )
        return result;
    }
    return 0;
  }
  return result;
}
