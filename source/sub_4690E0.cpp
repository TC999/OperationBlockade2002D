//----- (004690E0) --------------------------------------------------------
int __cdecl sub_4690E0(_DWORD *self)
{
  unsigned int v1; // ebx
  int i; // edi
  int result; // eax

  v1 = 0;
  for ( i = 0; ; i += 16 )
  {
    result = self[70];
    if ( !result || v1 >= (self[71] - result) >> 4 )
      break;
    (*(void (__cdecl **)(_DWORD))(**(_DWORD **)(result + i + 4) + 4))(*(_DWORD *)(result + i + 4));
    ++v1;
  }
  return result;
}
