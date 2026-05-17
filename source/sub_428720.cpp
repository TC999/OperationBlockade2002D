//----- (00428720) --------------------------------------------------------
void __thiscall sub_428720(_DWORD *this)
{
  int v2; // esi
  int i; // edi
  int j; // eax

  v2 = this[3];
  for ( i = 0; v2; v2 = this[3] )
  {
    for ( j = *(_DWORD *)(v2 + 8); j; j = *(_DWORD *)(j + 8) )
    {
      i = v2;
      v2 = j;
    }
    if ( i )
      *(_DWORD *)(i + 8) = 0;
    if ( v2 == this[3] )
      this[3] = 0;
    sub_428720(v2);
    (**(void (__thiscall ***)(int, int))v2)(v2, 1);
  }
}
