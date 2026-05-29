//----- (00407120) --------------------------------------------------------
int __thiscall sub_407120(_DWORD *self, int a2)
{
  int result; // eax
  int v3; // edx
  int v4; // esi

  *(_BYTE *)(96 * a2 + self[6] + 85) = 0;
  result = a2 + 1;
  if ( a2 + 1 < self[5] )
  {
    v3 = 96 * result;
    v4 = 172 * result;
    do
    {
      if ( *(_DWORD *)(v4 + *(_DWORD *)(self[7] + 4) + 28) < a2 )
        break;
      ++result;
      v4 += 172;
      *(_BYTE *)(v3 + self[6] + 85) = 0;
      v3 += 96;
    }
    while ( result < self[5] );
  }
  return result;
}
