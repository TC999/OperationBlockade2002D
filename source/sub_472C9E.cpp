//----- (00472C9E) --------------------------------------------------------
void __thiscall sub_472C9E(int self)
{
  const void *v2; // eax

  if ( *(_DWORD *)self != -1 )
  {
    v2 = *(const void **)(self + 8);
    if ( v2 )
    {
      UnmapViewOfFile(v2);
      *(_DWORD *)(self + 8) = 0;
      *(_DWORD *)(self + 12) = 0;
    }
    if ( *(_DWORD *)(self + 4) != -1 )
    {
      CloseHandle(*(HANDLE *)(self + 4));
      *(_DWORD *)(self + 4) = -1;
    }
    if ( *(_DWORD *)self != -1 )
    {
      CloseHandle(*(HANDLE *)self);
      *(_DWORD *)self = -1;
    }
  }
}
