//----- (00463150) --------------------------------------------------------
int __thiscall sub_463150(_DWORD *this)
{
  int result; // eax
  _DWORD *v2; // edx

  result = 0;
  if ( (int)this[130] > 0 )
  {
    v2 = this + 307;
    do
    {
      *v2 = 0;
      ++result;
      v2 += 88;
    }
    while ( result < this[130] );
  }
  return result;
}
