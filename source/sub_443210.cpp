//----- (00443210) --------------------------------------------------------
int __thiscall sub_443210(_DWORD *this, int a2, int a3, int a4)
{
  unsigned int i; // esi
  int result; // eax

  for ( i = 0; ; ++i )
  {
    result = this[6];
    if ( !result || i >= (this[7] - result) >> 2 )
      break;
    sub_447750(a2, a3, a4);
  }
  return result;
}
