//----- (004223D0) --------------------------------------------------------
int __thiscall sub_4223D0(_DWORD *this)
{
  int result; // eax
  int v2; // edx

  result = this[5];
  *this = &off_499334;
  if ( result )
  {
    do
    {
      v2 = *(_DWORD *)(result + 16);
      *(_DWORD *)(result + 20) = 0;
      *(_DWORD *)(result + 16) = 0;
      result = v2;
    }
    while ( v2 );
  }
  this[5] = 0;
  *this = &off_499040;
  return result;
}
