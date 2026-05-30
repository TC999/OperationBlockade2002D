//----- (00465D40) --------------------------------------------------------
int __cdecl sub_465D40(_DWORD *self, int a2, float a3, float a4, int a5, int a6)
{
  unsigned int i; // edi
  int result; // eax

  for ( i = 0; ; ++i )
  {
    result = self[6];
    if ( !result || i >= (self[7] - result) >> 2 )
      break;
    if ( *(_BYTE *)(*(_DWORD *)(result + 4 * i) + 16) )
      sub_4665E0(a2, a3, a4, a5, a6);
  }
  return result;
}
