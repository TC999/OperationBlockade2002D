//----- (00469580) --------------------------------------------------------
int __thiscall sub_469580(void *this)
{
  int i; // edi
  int v3; // ecx
  int j; // edi
  void (__thiscall ***v5)(_DWORD, int); // ecx
  void *v6; // eax
  int result; // eax

  *(_DWORD *)this = &off_499D24;
  if ( byte_520A10 )
  {
    for ( i = 0; i < *((_DWORD *)this + 6); ++i )
    {
      v3 = *(_DWORD *)(*((_DWORD *)this + 5) + 4 * i);
      (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 8))(v3);
    }
  }
  if ( *((_BYTE *)this + 32) )
  {
    for ( j = 0; j < *((_DWORD *)this + 6); ++j )
    {
      v5 = *(void (__thiscall ****)(_DWORD, int))(*((_DWORD *)this + 5) + 4 * j);
      if ( v5 )
        (**v5)(v5, 1);
    }
  }
  memset(*((void **)this + 5), 0, 4 * *((_DWORD *)this + 6));
  v6 = (void *)*((_DWORD *)this + 5);
  *((_DWORD *)this + 6) = 0;
  result = sub_488CEE(v6);
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 5) = 0;
  *(_DWORD *)this = &off_499040;
  return result;
}
