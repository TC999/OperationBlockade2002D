//----- (0041F0F0) --------------------------------------------------------
int __thiscall sub_41F0F0(_DWORD *this)
{
  int i; // esi
  int v3; // ecx
  int result; // eax

  for ( i = 0; i < 17920; i += 140 )
  {
    v3 = i + this[9];
    result = *(_DWORD *)(v3 + 8);
    if ( result )
      result = sub_41D9A0(v3);
  }
  return result;
}
