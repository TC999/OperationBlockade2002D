//----- (00456050) --------------------------------------------------------
int __cdecl sub_456050(_DWORD *self, int a2, int a3, float a4, int a5, int a6)
{
  unsigned int i; // esi
  int result; // eax

  for ( i = 0; ; ++i )
  {
    result = self[100];
    if ( !result || i >= (self[101] - result) >> 2 )
      break;
    sub_456A40(a2, a3, a4, a5, a6);
  }
  return result;
}
