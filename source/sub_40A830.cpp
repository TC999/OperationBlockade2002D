//----- (0040A830) --------------------------------------------------------
int __cdecl sub_40A830(int self)
{
  int v1; // ebx
  int v3; // esi
  unsigned int v4; // esi
  int j; // edi
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  _DWORD *v9; // eax
  int v10; // ebx
  int v11; // edi
  _DWORD *m; // esi
  bool v13; // zf
  int result; // eax
  unsigned int i; // [esp+10h] [ebp-Ch]
  _DWORD *k; // [esp+10h] [ebp-Ch]
  int v17; // [esp+14h] [ebp-8h]
  int v18; // [esp+18h] [ebp-4h]

  v1 = 0;
  for ( i = 0; ; ++i )
  {
    v3 = *(_DWORD *)(self + 4);
    if ( !v3 || i >= (*(_DWORD *)(self + 8) - v3) / 24 )
      break;
    if ( *(_BYTE *)(v1 + v3 + 20) )
    {
      v4 = 0;
      for ( j = 0; ; j += 12 )
      {
        v6 = v1 + *(_DWORD *)(self + 4);
        v7 = *(_DWORD *)(v6 + 8);
        if ( !v7 || v4 >= (*(_DWORD *)(v6 + 12) - v7) / 12 )
          break;
        sub_40A120(
          *(_BYTE *)(*(_DWORD *)(v6 + 8) + j + 8),
          "entry %s=%s is not used by %s, see %s",
          *(const char **)(*(_DWORD *)(v6 + 8) + j),
          *(const char **)(*(_DWORD *)(v6 + 8) + j + 4),
          *(const char **)v6,
          (const char *)(self + 16));
        ++v4;
      }
    }
    v1 += 24;
  }
  sub_4885A6(*(LPVOID *)(self + 276));
  v8 = *(_DWORD *)(self + 4);
  v18 = *(_DWORD *)(self + 8);
  v17 = v8;
  if ( v8 != v18 )
  {
    v9 = (_DWORD *)(v8 + 8);
    for ( k = v9; ; v9 = k )
    {
      v10 = v9[1];
      v11 = *v9;
      for ( m = v9 - 1; v11 != v10; v11 += 12 )
        ((void (__cdecl *)(_DWORD *, int))0)(m, v11);
      sub_4885A6((LPVOID)m[1]);
      m[1] = 0;
      m[2] = 0;
      m[3] = 0;
      v13 = v17 + 24 == v18;
      v17 += 24;
      k += 6;
      if ( v13 )
        break;
    }
  }
  sub_4885A6(*(LPVOID *)(self + 4));
  result = 0;
  *(_DWORD *)(self + 4) = 0;
  *(_DWORD *)(self + 8) = 0;
  *(_DWORD *)(self + 12) = 0;
  return result;
}
