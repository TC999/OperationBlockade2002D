//----- (00425F60) --------------------------------------------------------
int __cdecl sub_425F60(int self)
{
  int v2; // ebp
  int v3; // ebx
  int v4; // edi
  int *v5; // ecx
  int i; // edi
  void *v7; // eax
  int result; // eax

  v2 = 0;
  v3 = *(_DWORD *)(self + 24);
  if ( v3 > 0 )
  {
    do
    {
      v4 = *(_DWORD *)(*(_DWORD *)(self + 20) + 4 * v2);
      v5 = *(int **)(v4 + 296);
      if ( v5 )
      {
        sub_422230(v5);
        *(_DWORD *)(v4 + 296) = 0;
      }
      ++v2;
    }
    while ( v2 < v3 );
  }
  if ( *(_BYTE *)(self + 32) )
  {
    for ( i = 0; i < *(_DWORD *)(self + 24); ++i )
      sub_4885A6(*(LPVOID *)(*(_DWORD *)(self + 20) + 4 * i));
  }
  memset(*(void **)(self + 20), 0, 4 * *(_DWORD *)(self + 24));
  v7 = *(void **)(self + 20);
  *(_DWORD *)(self + 24) = 0;
  sub_488CEE(v7);
  result = 0;
  *(_DWORD *)(self + 28) = 0;
  *(_DWORD *)(self + 20) = 0;
  return result;
}
