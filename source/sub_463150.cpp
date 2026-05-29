//----- (00463150) --------------------------------------------------------
int __thiscall sub_463150(_DWORD *self)
{
  int result; // eax
  _DWORD *v2; // edx

  result = 0;
  if ( (int)self[130] > 0 )
  {
    v2 = self + 307;
    do
    {
      *v2 = 0;
      ++result;
      v2 += 88;
    }
    while ( result < self[130] );
  }
  return result;
}
