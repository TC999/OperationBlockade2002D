//----- (00456000) --------------------------------------------------------
int __thiscall sub_456000(_DWORD *this, int a2, int a3, int a4, int a5)
{
  int result; // eax
  unsigned int i; // edi
  int v8; // ecx

  result = 0;
  for ( i = 0; ; ++i )
  {
    v8 = this[100];
    if ( !v8 )
      break;
    if ( i >= (this[101] - v8) >> 2 )
      break;
    result = sub_456870(a2, a3, a4, a5);
    if ( result )
      break;
  }
  return result;
}
