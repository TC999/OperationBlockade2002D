//----- (00471E3C) --------------------------------------------------------
unsigned int __cdecl sub_471E3C(_DWORD *self, _BYTE *a2, unsigned int a3)
{
  _BYTE *v4; // edi
  bool v5; // zf
  int v6; // ebx
  int v7; // ecx
  _BYTE *v8; // eax
  unsigned __int8 *v10; // edi
  unsigned __int8 v11; // al
  int v12; // [esp+Ch] [ebp-18h]
  int v13; // [esp+10h] [ebp-14h]
  _BYTE *v14; // [esp+14h] [ebp-10h]
  _BYTE *v15; // [esp+18h] [ebp-Ch]
  unsigned int v16; // [esp+1Ch] [ebp-8h]
  int v17; // [esp+20h] [ebp-4h]
  unsigned int v18; // [esp+30h] [ebp+Ch]
  unsigned int v19; // [esp+30h] [ebp+Ch]

  if ( a3 < 2 || *a2 != 80 )
    return -2147467259;
  if ( a2[1] == 51 )
  {
    v12 = 1;
  }
  else
  {
    if ( a2[1] != 54 )
      return -2147467259;
    v12 = 0;
  }
  v4 = a2 + 2;
  v5 = a3 == 2;
  v18 = a3 - 2;
  v6 = 0;
  v15 = a2 + 2;
  v17 = 0;
  v13 = 0;
  v16 = 255;
  if ( v5 )
    return -2147467259;
  while ( v12 || v17 != 3 )
  {
    if ( !isspace((unsigned __int8)*v4) )
    {
      if ( *v4 != 35 )
      {
        if ( v18 )
        {
          do
          {
            if ( isspace((unsigned __int8)*v4) )
              break;
            if ( !isdigit((unsigned __int8)*v4) )
              return -2147467259;
            v7 = (unsigned __int8)*v4++;
            v5 = v18-- == 1;
            v6 = v7 + 10 * v6 - 48;
            v15 = v4;
          }
          while ( !v5 );
        }
        if ( v17 )
        {
          if ( v17 == 1 )
          {
            if ( !v6 )
              return -2147467259;
            v8 = (uint8 *)operator new(4 * v13 * v6);
            self[1] = (uint32)v8;
            if ( !v8 )
              return -2147024882;
            self[3] = 0;
            a2 = v8;
            self[4] = 0;
            v14 = &v8[4 * v13 * v6];
            v4 = v15;
            self[8] = 1;
            *self = 22;
            self[2] = 4 * v13;
            self[5] = v13;
            self[6] = v6;
            goto LABEL_38;
          }
          if ( v17 != 2 )
          {
            switch ( v17 )
            {
              case 3:
                if ( a2 >= v14 )
                  return -2147467259;
                *(_DWORD *)a2 = ((255 * v6 / v16) | 0xFFFFFF00) << 16;
                break;
              case 4:
                *(_DWORD *)a2 |= (255 * v6 / v16) << 8;
                break;
              case 5:
                *(_DWORD *)a2 |= 255 * v6 / v16;
                a2 += 4;
                if ( a2 == v14 )
                  return 0;
                v17 = 2;
                break;
            }
            goto LABEL_38;
          }
          v16 = v6;
        }
        else
        {
          v13 = v6;
        }
        if ( !v6 )
          return -2147467259;
LABEL_38:
        ++v17;
        goto LABEL_39;
      }
      for ( ; v18; --v18 )
      {
        if ( *v4 == 10 )
          break;
        ++v4;
      }
    }
    ++v4;
    --v18;
    v15 = v4;
LABEL_39:
    v6 = 0;
    if ( !v18 )
      return -2147467259;
  }
  if ( v16 > 0xFF )
    return -2147467259;
  if ( v18 > 1 && *v4 == 13 )
  {
    ++v4;
    --v18;
  }
  v10 = v4 + 1;
  v19 = v18 - 1;
  if ( v19 )
  {
    do
    {
      if ( a2 >= v14 )
        break;
      v11 = 255 * (unsigned int)*v10 / v16;
      v10 += 3;
      *(_DWORD *)a2 = (255 * (unsigned int)*(v10 - 1) / v16)
                    | (((255 * (unsigned int)*(v10 - 2) / v16) | ((v11 | 0xFFFFFF00) << 8)) << 8);
      v5 = v19 == 3;
      v19 -= 3;
      a2 += 4;
    }
    while ( !v5 );
  }
  return v14 != a2 ? 0x80004005 : 0;
}
