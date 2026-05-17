//----- (0044B7A0) --------------------------------------------------------
int __thiscall sub_44B7A0(_DWORD *this)
{
  int v1; // eax
  int v3; // eax
  unsigned int v4; // ebp
  int j; // edi
  int v6; // ecx
  int v7; // eax
  int v8; // esi
  _DWORD *v9; // ecx
  int v11; // [esp+10h] [ebp-8h]
  unsigned int i; // [esp+14h] [ebp-4h]

  v1 = 0;
  for ( i = 0; ; ++i )
  {
    v11 = v1;
    v3 = this[84];
    if ( !v3 || i >= (this[85] - v3) / 40 )
      break;
    v4 = 0;
    for ( j = 0; ; j += 268 )
    {
      v6 = this[84];
      v7 = *(_DWORD *)(v6 + v11 + 28);
      v8 = v6 + v11;
      if ( !v7 || v4 >= (*(_DWORD *)(v8 + 32) - v7) / 268 )
        break;
      v9 = *(_DWORD **)(*(_DWORD *)(v8 + 28) + j + 264);
      if ( v9 )
      {
        sub_41D700(v9);
        *(_DWORD *)(*(_DWORD *)(this[84] + v11 + 28) + j + 264) = 0;
      }
      ++v4;
    }
    v1 = v11 + 40;
  }
  return sub_469120(this);
}
