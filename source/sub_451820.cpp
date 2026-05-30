//----- (00451820) --------------------------------------------------------
int __cdecl sub_451820(_DWORD *self)
{
  int v2; // ebx
  int result; // eax
  int v4; // edi
  int *v5; // ecx

  v2 = 0;
  result = self[3];
  if ( result > 0 )
  {
    v4 = 0;
    do
    {
      v5 = *(int **)(self[4] + v4 + 260);
      if ( v5 )
      {
        sub_422230(v5);
        *(_DWORD *)(self[4] + v4 + 260) = 0;
      }
      result = self[3];
      ++v2;
      v4 += 264;
    }
    while ( v2 < result );
  }
  return result;
}
