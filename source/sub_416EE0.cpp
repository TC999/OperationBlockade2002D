//----- (00416EE0) --------------------------------------------------------
int __thiscall sub_416EE0(int this, int a2)
{
  int result; // eax
  int v4; // edi

  result = a2;
  if ( a2 > 0 )
  {
    v4 = *(_DWORD *)(this + 4136);
    *(_DWORD *)(this + 4132) -= a2;
    *(_BYTE *)(this + 12) = 1;
    *(_DWORD *)(this + 4136) = a2 + v4;
    memcpy((void *)(this + 132), (const void *)(20 * a2 + this + 132), 4000 - 20 * a2);
    memset((void *)(this - 20 * a2 + 4132), 0, 20 * a2);
    sub_416F80(1);
    result = *(_DWORD *)(this + 4132);
    if ( result >= 6 )
      return sub_416570((float *)this);
  }
  return result;
}
