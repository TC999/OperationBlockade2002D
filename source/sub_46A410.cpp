//----- (0046A410) --------------------------------------------------------
int __cdecl sub_46A410(int self, const void *a2, unsigned int a3)
{
  int result; // eax
  int v4; // edx

  result = self;
  if ( *(_BYTE *)(self + 300) )
  {
    v4 = *(_DWORD *)(self + 312);
    *(_BYTE *)(self + 300) = (signed int)(v4 + a3 - 1) < *(_DWORD *)(self + 304)
                          && memcmp((const void *)(v4 + *(_DWORD *)(self + 308)), a2, a3) == 0;
  }
  if ( !*(_BYTE *)(result + 300) )
    return sub_46A4C0(a2, a3);
  *(_DWORD *)(result + 312) += a3;
  return result;
}
