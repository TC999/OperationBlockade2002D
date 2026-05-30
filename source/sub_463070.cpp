//----- (00463070) --------------------------------------------------------
int __cdecl sub_463070(_DWORD *self)
{
  _DWORD *v1; // edx
  int v2; // esi
  int result; // eax
  void *v4; // edi

  v1 = self + 231;
  v2 = 4;
  do
  {
    v1[1] = 0;
    result = 0;
    *v1 = 0;
    memset(v1 + 2, 0, 0x28u);
    v4 = v1 + 12;
    v1 += 88;
    --v2;
    memset(v4, 0, 0x100u);
  }
  while ( v2 );
  return result;
}
