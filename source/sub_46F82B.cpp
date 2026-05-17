//----- (0046F82B) --------------------------------------------------------
int __thiscall sub_46F82B(_DWORD *this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // ecx
  int v4; // edi
  void *v5; // eax
  void *v6; // ebx
  unsigned int v7; // ebx
  int v8; // eax
  unsigned int v9; // eax
  unsigned int i; // edi
  void *v12; // [esp+Ch] [ebp-10h]

  v2 = (_DWORD *)this[1];
  v3 = (_DWORD *)*this;
  v4 = v2[1044];
  if ( v4 != v3[1044] || v2[1045] != v3[1045] || v2[1046] != v3[1046] )
    return -2147467259;
  v5 = operator new(16 * v4);
  v6 = v5;
  if ( v5 )
  {
    sub_46C866((int)v5, 16, v4, (int (__thiscall *)(int))sub_46C80E);
    v12 = v6;
  }
  else
  {
    v12 = 0;
  }
  v7 = 0;
  if ( !v12 )
    return -2147467259;
  v8 = this[1];
  if ( *(_DWORD *)(v8 + 4184) )
  {
    v9 = *(_DWORD *)(v8 + 4180);
    do
    {
      for ( i = 0; i < v9; ++i )
      {
        (*(void (__thiscall **)(_DWORD, unsigned int, unsigned int, void *))(*(_DWORD *)*this + 4))(*this, i, v7, v12);
        (*(void (__thiscall **)(_DWORD, unsigned int, unsigned int, void *))(*(_DWORD *)this[1] + 8))(
          this[1],
          i,
          v7,
          v12);
        v9 = *(_DWORD *)(this[1] + 4180);
      }
      ++v7;
    }
    while ( v7 < *(_DWORD *)(this[1] + 4184) );
  }
  sub_4885A6(v12);
  return 0;
}
