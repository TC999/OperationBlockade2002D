//----- (0041F1A0) --------------------------------------------------------
char __thiscall sub_41F1A0(int this, char a2)
{
  int i; // ebp
  void *v4; // edi
  char result; // al

  if ( *(_BYTE *)(this + 12) )
  {
    for ( i = 0; i < *(_DWORD *)(this + 4); ++i )
    {
      v4 = *(void **)(*(_DWORD *)this + 4 * i);
      if ( v4 )
      {
        sub_41C700(*(LPVOID **)(*(_DWORD *)this + 4 * i));
        sub_4885A6(v4);
      }
    }
  }
  memset(*(void **)this, 0, 4 * *(_DWORD *)(this + 4));
  result = a2;
  *(_DWORD *)(this + 4) = 0;
  if ( a2 )
  {
    result = sub_488CEE(*(LPVOID *)this);
    *(_DWORD *)(this + 8) = 0;
    *(_DWORD *)this = 0;
  }
  return result;
}
