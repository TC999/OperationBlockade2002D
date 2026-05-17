//----- (0047C1B7) --------------------------------------------------------
int __cdecl sub_47C1B7(_DWORD *a1)
{
  _BYTE *v2; // edi
  bool v4; // zf
  _DWORD *v5; // eax
  int v6; // esi
  int v7; // [esp+14h] [ebp+8h]

  v2 = (_BYTE *)a1[99];
  if ( v2[17] )
    return 2;
  v7 = (*(int (__cdecl **)(_DWORD *))(a1[100] + 4))(a1);
  if ( v7 == 1 )
  {
    if ( v2[20] )
    {
      sub_47BDB7((int)a1);
      v2[20] = 0;
    }
    else
    {
      if ( !v2[16] )
      {
        *(_DWORD *)(*a1 + 20) = 34;
        (*(void (__cdecl **)(_DWORD *))*a1)(a1);
      }
      sub_47C17A((int)a1);
    }
  }
  else if ( v7 == 2 )
  {
    v4 = v2[20] == 0;
    v2[17] = 1;
    if ( v4 )
    {
      v5 = a1 + 33;
      v6 = a1[31];
      if ( *v5 > v6 )
        *v5 = v6;
    }
    else if ( *(_BYTE *)(a1[100] + 81) )
    {
      *(_DWORD *)(*a1 + 20) = 58;
      (*(void (__cdecl **)(_DWORD *))*a1)(a1);
    }
  }
  return v7;
}
