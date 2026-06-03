//----- (0040E910) --------------------------------------------------------
int *__cdecl sub_40E910(int a1)
{
  int *v1; // eax
  signed int v2; // edi
  char v3; // dl
  _DWORD *v4; // esi
  unsigned int v5; // ecx
  bool v6; // zf
  char v7; // dl
  char v8; // dl
  char v9; // dl

  if ( !dword_4F5C94 )
    return 0;
  v1 = (int *)dword_4F5C88;
  v2 = (a1 + 7) & 0xFFFFFFF8;
  while ( (*(_BYTE *)v1 & 1) != 0 || (int)((*v1 & 0xFFFFFFFC) - 4) <= v2 )
  {
    if ( (*(_BYTE *)v1 & 2) != 0 )
      v1 = (int *)dword_4F5C8C;
    else
      v1 = (int *)((char *)v1 + (*v1 & 0xFFFFFFFC));
    if ( v1 == (int *)dword_4F5C88 )
      return 0;
  }
  if ( (int)((*v1 & 0xFFFFFFFC) - v2 - 4) <= 24 )
  {
    ++dword_4F5CA0;
    --dword_4F5C94;
    dword_4F5C9C += *v1 & 0xFFFFFFFC;
    dword_4F5C98 -= *v1 & 0xFFFFFFFC;
    *(_BYTE *)v1 |= 1u;
    dword_4F5C88 = (int)v1;
    return v1 + 1;
  }
  else
  {
    v3 = *(_BYTE *)v1;
    v4 = (_DWORD *)((char *)v1 + v2 + 4);
    dword_4F5C88 = (int)v4;
    v5 = (*v1 & 0xFFFFFFFC) - v2;
    *v4 &= 3u;
    *v4 |= v5 - 4;
    v6 = (v3 & 2) == 0;
    v7 = *(_BYTE *)dword_4F5C88;
    if ( v6 )
      v8 = v7 & 0xFD;
    else
      v8 = v7 | 2;
    *(_BYTE *)dword_4F5C88 = v8;
    *(_BYTE *)dword_4F5C88 &= ~1u;
    v9 = (v2 + 4) | *(_BYTE *)v1 & 3;
    *v1 = (v2 + 4) | *v1 & 3;
    *(_BYTE *)v1 = v9 & 0xFC | 1;
    ++dword_4F5CA0;
    dword_4F5C9C += *v1 & 0xFFFFFFFC;
    dword_4F5C98 -= *v1 & 0xFFFFFFFC;
    return v1 + 1;
  }
}
