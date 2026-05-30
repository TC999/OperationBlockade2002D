//----- (00469580) --------------------------------------------------------
int __cdecl sub_469580(void *self)
{
  int i; // edi
  int v3; // ecx
  int j; // edi
  void (__cdecl ***v5)(_DWORD, int); // ecx
  void *v6; // eax
  int result; // eax

  *(_DWORD *)self = &off_499D24;
  if ( byte_520A10 )
  {
    for ( i = 0; i < *((_DWORD *)self + 6); ++i )
    {
      v3 = *(_DWORD *)(*((_DWORD *)self + 5) + 4 * i);
      (*(void (__cdecl **)(int))(*(_DWORD *)v3 + 8))(v3);
    }
  }
  if ( *((_BYTE *)self + 32) )
  {
    for ( j = 0; j < *((_DWORD *)self + 6); ++j )
    {
      v5 = *(void (__cdecl ****)(_DWORD, int))(*((_DWORD *)self + 5) + 4 * j);
      if ( v5 )
        (**v5)(v5, 1);
    }
  }
  memset(*((void **)self + 5), 0, 4 * *((_DWORD *)self + 6));
  v6 = (void *)*((_DWORD *)self + 5);
  *((_DWORD *)self + 6) = 0;
  result = sub_488CEE(v6);
  *((_DWORD *)self + 7) = 0;
  *((_DWORD *)self + 5) = 0;
  *(_DWORD *)self = &off_499040;
  return result;
}
