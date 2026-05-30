//----- (004223D0) --------------------------------------------------------
int __cdecl sub_4223D0(_DWORD *self)
{
  int result; // eax
  int v2; // edx

  result = self[5];
  *self = &off_499334;
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
  self[5] = 0;
  *self = &off_499040;
  return result;
}
