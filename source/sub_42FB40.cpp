//----- (0042FB40) --------------------------------------------------------
int __cdecl sub_42FB40(_DWORD *self, int a2, int a3, float a4, int a5)
{
  int result; // eax
  unsigned int i; // esi
  int v8; // ecx
  int v9; // edx

  result = 0;
  for ( i = 0; ; ++i )
  {
    v8 = self[6];
    if ( !v8 || i >= (self[7] - v8) >> 2 )
      break;
    v9 = *(_DWORD *)(v8 + 4 * i);
    if ( *(_BYTE *)(v9 + 16) )
    {
      if ( *(_BYTE *)(LODWORD(a4) + 8) != *(_BYTE *)(*(_DWORD *)(v9 + 428) + 300) )
        result = sub_430BC0(a2, a3, a4, a5);
      if ( result )
        break;
    }
  }
  return result;
}
