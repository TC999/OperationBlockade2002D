//----- (00469120) --------------------------------------------------------
int __thiscall sub_469120(_DWORD *self)
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
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(result + i + 4) + 8))(*(_DWORD *)(result + i + 4));
    ++v1;
  }
  return result;
}
