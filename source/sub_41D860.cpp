//----- (0041D860) --------------------------------------------------------
char __thiscall sub_41D860(int this)
{
  char result; // al
  int v3; // ecx

  result = *(_BYTE *)(this + 16);
  if ( result )
  {
    v3 = *(_DWORD *)(this + 12);
    *(_BYTE *)(this + 16) = 0;
    if ( v3 )
    {
      sub_41CF50(v3);
      *(_DWORD *)(this + 12) = 0;
    }
    result = *(_BYTE *)(this + 52);
    if ( result )
      return sub_41D9A0(this);
  }
  return result;
}
