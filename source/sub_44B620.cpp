//----- (0044B620) --------------------------------------------------------
int __thiscall sub_44B620(int this)
{
  int v2; // eax
  int j; // edi
  int v4; // ecx
  int v5; // eax
  _DWORD *v6; // ebp
  int v7; // ebx
  int v8; // eax
  int i; // [esp+10h] [ebp-10h]
  unsigned int v11; // [esp+14h] [ebp-Ch]
  unsigned int v12; // [esp+18h] [ebp-8h]
  char v13; // [esp+1Ch] [ebp-4h]

  v12 = 0;
  for ( i = 0; ; i += 40 )
  {
    v2 = *(_DWORD *)(this + 336);
    if ( !v2 || v12 >= (*(_DWORD *)(this + 340) - v2) / 40 )
      break;
    v11 = 0;
    for ( j = 0; ; j += 268 )
    {
      v4 = *(_DWORD *)(this + 336);
      v5 = *(_DWORD *)(v4 + i + 28);
      v6 = (_DWORD *)(v4 + i);
      if ( !v5 || v11 >= (v6[8] - v5) / 268 )
        break;
      v7 = v6[7];
      if ( !*(_DWORD *)(v7 + j + 264) )
      {
        if ( *(_BYTE *)(this + 330) || v6[4] != 1065353216 || (v13 = 0, v6[5] != 1065353216) )
          v13 = 1;
        *(_DWORD *)(j + v7 + 264) = sub_41DE10(
                                      *(_DWORD **)(dword_520970 + 120),
                                      (char *)(j + v7 + 4),
                                      *(_BYTE *)(this + 301) != 0 ? 3 : 1,
                                      *(_BYTE *)(this + 294),
                                      *(_BYTE *)(this + 292),
                                      *(_BYTE *)(this + 293),
                                      v13);
        v8 = j + *(_DWORD *)(*(_DWORD *)(this + 336) + i + 28);
        sub_4282E0(
          *(_DWORD *)(v8 + 264) != 0,
          "failed to load sound %s, see %s : %s",
          (const char *)(v8 + 4),
          *(const char **)(this + 4),
          (const char *)(this + 16));
      }
      ++v11;
    }
    ++v12;
  }
  return sub_4690E0(this);
}
