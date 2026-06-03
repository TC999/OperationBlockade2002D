//----- (00406980) --------------------------------------------------------
int __cdecl sub_406980(_DWORD *self)
{
  int result; // eax
  int v2; // edx

  result = self[5];
  *self = (uint32)&off_4990C8;
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
  self[5] = 0;
  *self = (uint32)&off_499040;
  return result;
}
