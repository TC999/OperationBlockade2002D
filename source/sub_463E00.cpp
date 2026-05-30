//----- (00463E00) --------------------------------------------------------
int __cdecl sub_463E00(void *self)
{
  int i; // edi
  int *v3; // ecx
  int v4; // eax
  int result; // eax

  *(_DWORD *)self = &off_499BDC;
  for ( i = 0; i < *((_DWORD *)self + 30); ++i )
    sub_409A00(dword_520970, *(void **)(*((_DWORD *)self + 24) + 4 * i));
  v3 = (int *)*((_DWORD *)self + 5);
  if ( v3 )
  {
    sub_422230(v3);
    *((_DWORD *)self + 5) = 0;
  }
  sub_4885A6(*((LPVOID *)self + 6));
  sub_4885A6(*((LPVOID *)self + 24));
  v4 = *((_DWORD *)self + 25);
  if ( v4 )
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v4 + 8))(*((_DWORD *)self + 25));
    *((_DWORD *)self + 25) = 0;
  }
  result = *((_DWORD *)self + 27);
  if ( result )
  {
    result = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)result + 8))(*((_DWORD *)self + 27));
    *((_DWORD *)self + 27) = 0;
  }
  *(_DWORD *)self = &off_499040;
  return result;
}
