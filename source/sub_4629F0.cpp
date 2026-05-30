//----- (004629F0) --------------------------------------------------------
int __cdecl sub_4629F0(int self, int a2)
{
  int v2; // edx
  int result; // eax
  int v4; // esi
  int v5; // edi
  int v6; // ecx

  v2 = 352 * *(_DWORD *)(self + 512) + self + 880;
  result = a2;
  v4 = *(_DWORD *)(v2 + 4 * a2 + 52) - 1;
  *(_DWORD *)(v2 + 4 * a2 + 52) = v4;
  v5 = v4;
  if ( *(_DWORD *)(16 * a2 + self + 11624) < v4 )
    v5 = *(_DWORD *)(16 * a2 + self + 11624);
  *(_DWORD *)(16 * a2 + self + 11624) = v5;
  ++*(_DWORD *)(self + 16 * (a2 + 727));
  if ( *(_BYTE *)(self + 2552) )
  {
    v6 = *(_DWORD *)(v2 + 4 * a2 + 52);
    if ( v6 < 1 )
    {
      *(_DWORD *)(v2 + 4 * a2 + 52) = 1;
      return result;
    }
  }
  else
  {
    v6 = *(int *)(v2 + 4 * a2 + 52) < 0 ? 0 : *(_DWORD *)(v2 + 4 * a2 + 52);
  }
  *(_DWORD *)(v2 + 4 * a2 + 52) = v6;
  return result;
}
