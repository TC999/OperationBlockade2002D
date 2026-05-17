//----- (00433EF0) --------------------------------------------------------
int __thiscall sub_433EF0(int this)
{
  int i; // ebp
  void *v3; // edi
  void *v4; // eax
  int result; // eax

  if ( *(_BYTE *)(this + 12) )
  {
    for ( i = 0; i < *(_DWORD *)(this + 4); ++i )
    {
      v3 = *(void **)(*(_DWORD *)this + 4 * i);
      if ( v3 )
      {
        sub_40A800(*(_DWORD *)(*(_DWORD *)this + 4 * i));
        sub_4885A6(v3);
      }
    }
  }
  memset(*(void **)this, 0, 4 * *(_DWORD *)(this + 4));
  v4 = *(void **)this;
  *(_DWORD *)(this + 4) = 0;
  result = sub_488CEE(v4);
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)this = 0;
  return result;
}
