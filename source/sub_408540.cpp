//----- (00408540) --------------------------------------------------------
int __thiscall sub_408540(_DWORD *this, int a2)
{
  int result; // eax
  int v3; // esi
  int v4; // edx
  int v5; // eax

  result = this[5];
  v3 = 0;
  if ( result > 0 )
  {
    v4 = 0;
    do
    {
      v5 = v4 + *(_DWORD *)(this[7] + 4);
      if ( *(_BYTE *)(v5 + 81) )
        *(_DWORD *)(v5 + 76) = a2;
      result = this[5];
      ++v3;
      v4 += 172;
    }
    while ( v3 < result );
  }
  return result;
}
