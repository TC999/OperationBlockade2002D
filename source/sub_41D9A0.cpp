//----- (0041D9A0) --------------------------------------------------------
int __cdecl sub_41D9A0(int self)
{
  int v2; // ecx
  int result = 0; // eax

  v2 = *(_DWORD *)(self + 12);
  if ( v2 )
  {
    result = sub_41CF50(v2);
    *(_DWORD *)(self + 12) = 0;
  }
  *(_BYTE *)(self + 53) = 1;
  return result;
}
