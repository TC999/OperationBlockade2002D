//----- (00422760) --------------------------------------------------------
int __thiscall sub_422760(_DWORD *this, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  int result; // eax

  *a5 = 0;
  *a4 = 0;
  *a3 = 0;
  *a2 = 0;
  for ( result = this[5]; result; result = *(_DWORD *)(result + 16) )
  {
    ++*a2;
    *a3 += *(_DWORD *)(result + 40);
    if ( *(_BYTE *)(result + 4) )
    {
      ++*a4;
      *a5 += *(_DWORD *)(result + 40);
    }
  }
  return result;
}
