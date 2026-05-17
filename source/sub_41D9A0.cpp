//----- (0041D9A0) --------------------------------------------------------
int __thiscall sub_41D9A0(int this)
{
  int v2; // ecx
  int result; // eax

  v2 = *(_DWORD *)(this + 12);
  if ( v2 )
  {
    result = sub_41CF50(v2);
    *(_DWORD *)(this + 12) = 0;
  }
  *(_BYTE *)(this + 53) = 1;
  return result;
}
