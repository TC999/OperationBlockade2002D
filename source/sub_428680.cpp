//----- (00428680) --------------------------------------------------------
int __thiscall sub_428680(_DWORD *this, int a2)
{
  int v2; // edx
  int i; // eax
  int result; // eax

  v2 = this[3];
  if ( v2 )
  {
    for ( i = *(_DWORD *)(v2 + 8); i; i = *(_DWORD *)(i + 8) )
      v2 = i;
    result = a2;
    *(_DWORD *)(v2 + 8) = a2;
    *(_DWORD *)(a2 + 8) = 0;
    *(_DWORD *)(a2 + 4) = this;
  }
  else
  {
    result = a2;
    this[3] = a2;
    *(_DWORD *)(a2 + 8) = 0;
    *(_DWORD *)(a2 + 4) = this;
  }
  return result;
}
