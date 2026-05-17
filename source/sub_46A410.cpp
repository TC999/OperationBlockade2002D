//----- (0046A410) --------------------------------------------------------
int __thiscall sub_46A410(int this, const void *a2, unsigned int a3)
{
  int result; // eax
  int v4; // edx

  result = this;
  if ( *(_BYTE *)(this + 300) )
  {
    v4 = *(_DWORD *)(this + 312);
    *(_BYTE *)(this + 300) = (signed int)(v4 + a3 - 1) < *(_DWORD *)(this + 304)
                          && memcmp((const void *)(v4 + *(_DWORD *)(this + 308)), a2, a3) == 0;
  }
  if ( !*(_BYTE *)(result + 300) )
    return sub_46A4C0(a2, a3);
  *(_DWORD *)(result + 312) += a3;
  return result;
}
