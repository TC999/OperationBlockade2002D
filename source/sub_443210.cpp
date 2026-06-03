//----- (00443210) --------------------------------------------------------
int __cdecl sub_443210(_DWORD *self, int a2, int a3, int a4)
{
  unsigned int i; // esi
  int result; // eax

  for ( i = 0; ; ++i )
  {
    result = self[6];
    if ( !result || i >= (self[7] - result) >> 2 )
      break;
    sub_447750(self, a2, a3, a4);
  }
  return result;
}
