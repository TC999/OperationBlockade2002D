//----- (00406C20) --------------------------------------------------------
int __cdecl sub_406C20(void *self)
{
  int v2; // ebx
  int v3; // edi

  *(_DWORD *)self = (uint32)&off_4990E8;
  v2 = 0;
  if ( *((int *)self + 5) > 0 )
  {
    v3 = 0;
    do
    {
      if ( *(_DWORD *)(*((_DWORD *)self + 6) + v3 + 88) )
        sub_409A00(dword_520970, *(void **)(*((_DWORD *)self + 6) + v3 + 88));
      ++v2;
      v3 += 96;
    }
    while ( v2 < *((_DWORD *)self + 5) );
  }
  sub_4885A6(*((LPVOID *)self + 6));
  *((_DWORD *)self + 6) = 0;
  *(_DWORD *)self = (uint32)&off_499040;
  return 0;
}
