//----- (00408580) --------------------------------------------------------
int __thiscall sub_408580(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = *(_DWORD *)(this[7] + 4) + 172 * a2;
  if ( *(_BYTE *)(result + 81) )
    *(_DWORD *)(result + 76) = a3;
  return result;
}
