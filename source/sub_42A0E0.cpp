//----- (0042A0E0) --------------------------------------------------------
int __cdecl sub_42A0E0(_DWORD *self)
{
  _DWORD *v1; // esi
  int v3; // eax
  int v4; // eax
  int v5; // edi
  int v6; // eax
  char v7; // al
  char v8; // [esp+Ah] [ebp-2h] BYREF
  char v9; // [esp+Bh] [ebp-1h] BYREF

  v1 = (_DWORD *)*self;
  if ( *(_DWORD *)*self )
    return 0;
  do
  {
    if ( !*((_BYTE *)v1 + 8) )
    {
      v3 = getc((FILE *)v1[3]);
      if ( v3 == -1 )
      {
        if ( (*(_BYTE *)(v1[3] + 12) & 0x20) != 0 )
          *v1 = 2;
      }
      else
      {
        *((_BYTE *)v1 + 8) = 1;
        *((_BYTE *)v1 + 9) = v3;
      }
    }
    if ( !*((_BYTE *)v1 + 8) )
      break;
    v9 = *((_BYTE *)v1 + 9);
    if ( !isspace(v9) )
      break;
    sub_42A390(&v9);
  }
  while ( !*v1 );
  sub_42A370(v1);
  if ( *v1 )
    goto LABEL_50;
  if ( !*((_BYTE *)v1 + 8) )
  {
    v4 = getc((FILE *)v1[3]);
    if ( v4 == -1 )
    {
      if ( (*(_BYTE *)(v1[3] + 12) & 0x20) != 0 )
        *v1 = 2;
    }
    else
    {
      *((_BYTE *)v1 + 8) = 1;
      *((_BYTE *)v1 + 9) = v4;
    }
  }
  if ( *((_BYTE *)v1 + 8) && (v8 = *((_BYTE *)v1 + 9), isalnum(v8)) )
  {
    v5 = 0;
    while ( !*v1 )
    {
      if ( !*((_BYTE *)v1 + 8) )
      {
        v6 = getc((FILE *)v1[3]);
        if ( v6 == -1 )
        {
          if ( (*(_BYTE *)(v1[3] + 12) & 0x20) != 0 )
            *v1 = 2;
        }
        else
        {
          *((_BYTE *)v1 + 8) = 1;
          *((_BYTE *)v1 + 9) = v6;
        }
      }
      if ( !*((_BYTE *)v1 + 8) )
        break;
      v8 = *((_BYTE *)v1 + 9);
      switch ( v8 )
      {
        case '0':
          v5 *= 16;
          goto LABEL_45;
        case '1':
          v5 = 16 * v5 + 1;
          goto LABEL_45;
        case '2':
          v5 = 16 * v5 + 2;
          goto LABEL_45;
        case '3':
          v5 = 16 * v5 + 3;
          goto LABEL_45;
        case '4':
          v5 = 16 * v5 + 4;
          goto LABEL_45;
        case '5':
          v5 = 16 * v5 + 5;
          goto LABEL_45;
        case '6':
          v5 = 16 * v5 + 6;
          goto LABEL_45;
        case '7':
          v5 = 16 * v5 + 7;
          goto LABEL_45;
        case '8':
          v5 = 16 * v5 + 8;
          goto LABEL_45;
        case '9':
          v5 = 16 * v5 + 9;
          goto LABEL_45;
        case 'A':
        case 'a':
          v5 = 16 * v5 + 10;
          goto LABEL_45;
        case 'B':
        case 'b':
          v5 = 16 * v5 + 11;
          goto LABEL_45;
        case 'C':
        case 'c':
          v5 = 16 * v5 + 12;
          goto LABEL_45;
        case 'D':
        case 'd':
          v5 = 16 * v5 + 13;
          goto LABEL_45;
        case 'E':
        case 'e':
          v5 = 16 * v5 + 14;
          goto LABEL_45;
        case 'F':
        case 'f':
          v5 = 16 * v5 + 15;
LABEL_45:
          if ( *v1 )
            return v5;
          v7 = sub_42A010(v1, &v8);
          *((_BYTE *)v1 + 8) = 0;
          if ( v7 )
          {
            if ( v8 == 10 )
              ++v1[1];
          }
          break;
        default:
          return v5;
      }
    }
    return v5;
  }
  else
  {
LABEL_50:
    *v1 = 3;
    return 0;
  }
}
