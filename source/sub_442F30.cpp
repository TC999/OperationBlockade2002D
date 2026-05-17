//----- (00442F30) --------------------------------------------------------
int __thiscall sub_442F30(_DWORD *this, int a2, float a3, float a4, int a5, int a6)
{
  unsigned int i; // edi
  int result; // eax

  for ( i = 0; ; ++i )
  {
    result = this[6];
    if ( !result || i >= (this[7] - result) >> 2 )
      break;
    if ( *(_BYTE *)(*(_DWORD *)(result + 4 * i) + 16) )
      sub_443B50(a2, a3, a4, a5, a6);
  }
  return result;
}
