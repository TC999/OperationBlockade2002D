//----- (00456000) --------------------------------------------------------
int __cdecl sub_456000(_DWORD *self, int a2, int a3, int a4, int a5)
{
  int result; // eax
  unsigned int i; // edi
  int v8; // ecx

  result = 0;
  for ( i = 0; ; ++i )
  {
    v8 = self[100];
    if ( !v8 )
      break;
    if ( i >= (self[101] - v8) >> 2 )
      break;
    result = sub_456870(*(_DWORD *)(v8 + 4 * i), a2, (int *)a3, a4, a5);
    if ( result )
      break;
  }
  return result;
}
