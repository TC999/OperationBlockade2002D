//----- (004517D0) --------------------------------------------------------
int __cdecl sub_4517D0(_DWORD *self)
{
  int v2; // ebx
  int result; // eax
  int v4; // edi
  int v5; // eax

  v2 = 0;
  result = self[3];
  if ( result > 0 )
  {
    v4 = 0;
    do
    {
      v5 = v4 + self[4];
      if ( !*(_DWORD *)(v5 + 260) )
        *(_DWORD *)(self[4] + v4 + 260) = sub_422400(*(_DWORD **)(dword_520970 + 124), (char *)v5, 0);
      result = self[3];
      ++v2;
      v4 += 264;
    }
    while ( v2 < result );
  }
  return result;
}
