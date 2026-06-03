//----- (00465CF0) --------------------------------------------------------
int __cdecl sub_465CF0(_DWORD *self, int a2, int a3, int a4, float a5)
{
  int result; // eax
  unsigned int i; // esi
  int v8; // ecx

  result = 0;
  for ( i = 0; ; ++i )
  {
    v8 = self[6];
    if ( !v8 )
      break;
    if ( i >= (self[7] - v8) >> 2 )
      break;
    if ( *(_BYTE *)(*(_DWORD *)(v8 + 4 * i) + 16) )
    {
      result = sub_466410((int)a2, (int *)a3, (int *)a4, (int)LODWORD(a5), 0);
      if ( result )
        break;
    }
  }
  return result;
}
