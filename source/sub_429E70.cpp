//----- (00429E70) --------------------------------------------------------
bool __cdecl sub_429E70(_DWORD *self, _BYTE *a2, int a3)
{
  _DWORD *v3; // esi
  int v5; // eax
  char v6; // al
  _BYTE *v7; // edi
  int v8; // eax
  char v9; // bl
  int v10; // ecx
  int v11; // eax
  char v12; // al
  char v13; // [esp+7h] [ebp-5h] BYREF
  int v14; // [esp+8h] [ebp-4h]

  v3 = (_DWORD *)*self;
  if ( *(_DWORD *)*self )
    return 0;
  do
  {
    if ( !*((_BYTE *)v3 + 8) )
    {
      v5 = getc((FILE *)v3[3]);
      if ( v5 == -1 )
      {
        if ( (*(_BYTE *)(v3[3] + 12) & 0x20) != 0 )
          *v3 = 2;
      }
      else
      {
        *((_BYTE *)v3 + 8) = 1;
        *((_BYTE *)v3 + 9) = v5;
      }
    }
    if ( !*((_BYTE *)v3 + 8) )
      break;
    v13 = *((_BYTE *)v3 + 9);
    if ( !isspace(v13) || *v3 )
      break;
    v6 = sub_42A010(&v13);
    *((_BYTE *)v3 + 8) = 0;
    if ( v6 && v13 == 10 )
      ++v3[1];
  }
  while ( !*v3 );
  v7 = a2;
  v14 = 0;
  while ( !*v3 )
  {
    if ( !*((_BYTE *)v3 + 8) )
    {
      v8 = getc((FILE *)v3[3]);
      if ( v8 == -1 )
      {
        if ( (*(_BYTE *)(v3[3] + 12) & 0x20) != 0 )
          *v3 = 2;
      }
      else
      {
        *((_BYTE *)v3 + 8) = 1;
        *((_BYTE *)v3 + 9) = v8;
      }
    }
    if ( !*((_BYTE *)v3 + 8) )
      break;
    v9 = *((_BYTE *)v3 + 9);
    if ( isspace(v9) )
      break;
    if ( (int)&v7[1 - (_DWORD)a2] < a3 )
    {
      v10 = v14;
      *v7++ = v9;
      v14 = v10 + 1;
    }
    if ( *v3 )
      break;
    if ( !*((_BYTE *)v3 + 8) )
    {
      v11 = getc((FILE *)v3[3]);
      if ( v11 == -1 )
      {
        if ( (*(_BYTE *)(v3[3] + 12) & 0x20) != 0 )
          *v3 = 2;
      }
      else
      {
        *((_BYTE *)v3 + 8) = 1;
        *((_BYTE *)v3 + 9) = v11;
      }
    }
    v12 = *((_BYTE *)v3 + 8);
    if ( v12 )
      v9 = *((_BYTE *)v3 + 9);
    *((_BYTE *)v3 + 8) = 0;
    if ( v12 )
    {
      if ( v9 == 10 )
        ++v3[1];
    }
  }
  if ( a3 > 0 )
    a2[v14] = 0;
  return v14 > 0;
}
