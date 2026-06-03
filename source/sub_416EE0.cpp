//----- (00416EE0) --------------------------------------------------------
int __cdecl sub_416EE0(int self, int a2)
{
  int result; // eax
  int v4; // edi

  result = a2;
  if ( a2 > 0 )
  {
    v4 = *(_DWORD *)(self + 4136);
    *(_DWORD *)(self + 4132) -= a2;
    *(_BYTE *)(self + 12) = 1;
    *(_DWORD *)(self + 4136) = a2 + v4;
    memcpy((void *)(self + 132), (const void *)(20 * a2 + self + 132), 4000 - 20 * a2);
    memset((void *)(self - 20 * a2 + 4132), 0, 20 * a2);
    sub_416F80((_DWORD *)self, 1);
    result = *(_DWORD *)(self + 4132);
    if ( result >= 6 )
      return sub_416570((float *)self);
  }
  return result;
}
