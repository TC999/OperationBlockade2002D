//----- (00463E00) --------------------------------------------------------
int __thiscall sub_463E00(void *this)
{
  int i; // edi
  int *v3; // ecx
  int v4; // eax
  int result; // eax

  *(_DWORD *)this = &off_499BDC;
  for ( i = 0; i < *((_DWORD *)this + 30); ++i )
    sub_409A00(dword_520970, *(void **)(*((_DWORD *)this + 24) + 4 * i));
  v3 = (int *)*((_DWORD *)this + 5);
  if ( v3 )
  {
    sub_422230(v3);
    *((_DWORD *)this + 5) = 0;
  }
  sub_4885A6(*((LPVOID *)this + 6));
  sub_4885A6(*((LPVOID *)this + 24));
  v4 = *((_DWORD *)this + 25);
  if ( v4 )
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v4 + 8))(*((_DWORD *)this + 25));
    *((_DWORD *)this + 25) = 0;
  }
  result = *((_DWORD *)this + 27);
  if ( result )
  {
    result = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)result + 8))(*((_DWORD *)this + 27));
    *((_DWORD *)this + 27) = 0;
  }
  *(_DWORD *)this = &off_499040;
  return result;
}
