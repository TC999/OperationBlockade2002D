//----- (0043E670) --------------------------------------------------------
int __thiscall sub_43E670(_DWORD *this, int a2, int a3, LPVOID *a4, int a5)
{
  int result; // eax
  int v7; // ecx

  result = a2;
  if ( a2 == this[28] )
  {
    result = a3;
    if ( a3 < this[30] )
    {
      sub_421110(a4, (const char *)(72 * a3 + this[31] + 8));
      return sub_421350(*(_DWORD *)(72 * a3 + this[31] + 4));
    }
  }
  else if ( a2 == this[13] )
  {
    result = a3;
    v7 = *(_DWORD *)(dword_520970 + 280);
    if ( a3 < *(_DWORD *)(v7 + 520) )
    {
      sub_421110(a4, (const char *)(352 * a3 + v7 + 899));
      return sub_421350(*(_DWORD *)(*(_DWORD *)(dword_520970 + 280) + 352 * a3 + 892));
    }
  }
  return result;
}
