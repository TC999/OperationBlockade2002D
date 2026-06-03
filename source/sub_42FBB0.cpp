//----- (0042FBB0) --------------------------------------------------------
int __cdecl sub_42FBB0(_DWORD *self, int a2, float a3, float a4, int a5, int a6)
{
  unsigned int i; // edi
  int result; // eax
  int v9; // ecx

  for ( i = 0; ; ++i )
  {
    result = self[6];
    if ( !result || i >= (self[7] - result) >> 2 )
      break;
    v9 = *(_DWORD *)(result + 4 * i);
    if ( *(_BYTE *)(v9 + 16) )
    {
      if ( (_BYTE)a6 != *(_BYTE *)(*(_DWORD *)(v9 + 428) + 300) )
        sub_430DC0((int)self, (int*)(intptr_t)(a2), a3, a4, a5, a6);
    }
  }
  return result;
}
