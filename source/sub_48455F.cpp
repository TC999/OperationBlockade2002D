//----- (0048455F) --------------------------------------------------------
void __cdecl sub_48455F(_DWORD *a1)
{
  int v2; // esi
  int v3; // eax
  int v4; // eax
  void **v5; // ebx
  bool v6; // zf
  int v7; // esi
  unsigned int i; // [esp+14h] [ebp+8h]

  v2 = a1[105];
  a1[29] = *(_DWORD *)(v2 + 16);
  a1[28] = *(_DWORD *)(v2 + 20);
  v3 = a1[19];
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      if ( v4 == 1 )
      {
        *(_BYTE *)(v2 + 84) = 0;
        v5 = (void **)(v2 + 68);
        v6 = *(_DWORD *)(v2 + 68) == 0;
        *(_DWORD *)(v2 + 4) = (int)sub_48439D;
        if ( v6 )
          sub_484521(a1);
        v7 = 0;
        for ( i = 2 * a1[23] + 4; v7 < a1[25]; ++v5 )
        {
          sub_47BD68(*v5, i);
          ++v7;
        }
      }
      else
      {
        *(_DWORD *)(*a1 + 20) = 47;
        (*(void (__cdecl **)(_DWORD *))*a1)(a1);
      }
    }
    else
    {
      if ( a1[25] == 3 )
        *(_DWORD *)(v2 + 4) = (int)sub_48429E;
      else
        *(_DWORD *)(v2 + 4) = (int)sub_4841B3;
      v6 = *(_BYTE *)(v2 + 28) == 0;
      *(_DWORD *)(v2 + 48) = 0;
      if ( v6 )
        sub_483EAE(a1);
      if ( !*(_DWORD *)(v2 + 52) )
        sub_483FD9((int)a1);
    }
  }
  else if ( a1[25] == 3 )
  {
    *(_DWORD *)(v2 + 4) = (int)sub_484126;
  }
  else
  {
    *(_DWORD *)(v2 + 4) = (int)sub_48409E;
  }
}
