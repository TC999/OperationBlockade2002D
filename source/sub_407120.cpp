//----- (00407120) --------------------------------------------------------
int __thiscall sub_407120(_DWORD *this, int a2)
{
  int result; // eax
  int v3; // edx
  int v4; // esi

  *(_BYTE *)(96 * a2 + this[6] + 85) = 0;
  result = a2 + 1;
  if ( a2 + 1 < this[5] )
  {
    v3 = 96 * result;
    v4 = 172 * result;
    do
    {
      if ( *(_DWORD *)(v4 + *(_DWORD *)(this[7] + 4) + 28) < a2 )
        break;
      ++result;
      v4 += 172;
      *(_BYTE *)(v3 + this[6] + 85) = 0;
      v3 += 96;
    }
    while ( result < this[5] );
  }
  return result;
}
