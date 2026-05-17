//----- (004134F0) --------------------------------------------------------
void __thiscall sub_4134F0(_DWORD *this)
{
  int v2; // esi
  int v3; // eax

  v2 = this[10];
  for ( this[11] = v2; v2; v2 = this[11] )
  {
    if ( *(_DWORD *)(v2 + 360) )
    {
      sub_422230();
      *(_DWORD *)(v2 + 360) = 0;
    }
    *(_DWORD *)(v2 + 360) = sub_422400((char *)(v2 + 33), 0);
    v3 = this[11];
    if ( v3 )
      this[11] = *(_DWORD *)(v3 + 692);
  }
}
