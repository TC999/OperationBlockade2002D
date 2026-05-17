//----- (00406980) --------------------------------------------------------
int __thiscall sub_406980(_DWORD *this)
{
  int result; // eax
  int v2; // edx

  result = this[5];
  *this = &off_4990C8;
  if ( result )
  {
    do
    {
      v2 = *(_DWORD *)(result + 580);
      *(_DWORD *)(result + 584) = 0;
      *(_DWORD *)(result + 580) = 0;
      result = v2;
    }
    while ( v2 );
  }
  this[5] = 0;
  *this = &off_499040;
  return result;
}
