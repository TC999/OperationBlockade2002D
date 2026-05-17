//----- (00419BC0) --------------------------------------------------------
char __thiscall sub_419BC0(_DWORD *this, int a2)
{
  int v3; // ebp
  int v4; // esi
  _DWORD *i; // edi
  _BYTE v7[4000]; // [esp+10h] [ebp-FA0h] BYREF

  v3 = this[1033];
  qmemcpy(v7, this + 33, 4 * ((unsigned int)(20 * v3) >> 2));
  sub_4164A0(this, 0);
  v4 = v3 - 1;
  if ( v3 - 1 < 0 )
    return 1;
  for ( i = &v7[20 * v4 + 4]; sub_416350((int)this, i, 1); i -= 5 )
  {
    if ( --v4 < 0 )
      return 1;
  }
  return 0;
}
