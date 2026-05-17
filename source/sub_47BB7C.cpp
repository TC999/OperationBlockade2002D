//----- (0047BB7C) --------------------------------------------------------
__int16 __cdecl sub_47BB7C(_BYTE *a1, int a2)
{
  _BYTE *v2; // edx
  unsigned __int8 *v3; // esi
  unsigned __int8 v4; // al
  unsigned __int8 v5; // cl
  unsigned __int8 *v6; // edi
  int v7; // edi
  unsigned __int8 v8; // bl
  int v10; // ecx
  int v11; // ebx
  char v12; // al
  int v13; // eax
  unsigned int v14; // eax
  int v16; // [esp+Ch] [ebp-Ch]
  int v17; // [esp+10h] [ebp-8h]
  int v18; // [esp+10h] [ebp-8h]
  unsigned int v19; // [esp+14h] [ebp-4h]
  int v20; // [esp+24h] [ebp+Ch]

  v2 = a1;
  v19 = 0;
  v3 = a1 + 3;
  v4 = a1[3];
  v5 = v4;
  v6 = a1 + 7;
  v17 = 15;
  do
  {
    if ( *v6 > v5 )
      v5 = *v6;
    if ( *v6 < v4 )
      v4 = *v6;
    v6 += 4;
    --v17;
  }
  while ( v17 );
  if ( v5 != 0xFF || v4 )
  {
    v18 = 0;
  }
  else
  {
    v7 = 16;
    do
    {
      v8 = *v3;
      if ( *v3 < v5 && v8 )
        v5 = *v3;
      if ( v8 > v4 && v8 != 0xFF )
        v4 = *v3;
      v3 += 4;
      --v7;
    }
    while ( v7 );
    if ( v5 >= v4 )
    {
      v18 = 0;
      v5 = -1;
      v4 = 0;
    }
    else
    {
      v18 = 1;
    }
  }
  *(_BYTE *)a2 = v5;
  *(_BYTE *)(a2 + 1) = v4;
  if ( v5 != v4 )
  {
    v16 = v5;
    v10 = v5 - v4;
    v11 = 15;
    v20 = 2 * (v18 == 0) + 5;
    while ( 1 )
    {
      v19 *= 8;
      if ( !v18 )
        break;
      v12 = v2[4 * v11 + 3];
      if ( v12 )
      {
        if ( v12 != -1 )
          break;
        v19 |= 7u;
      }
      else
      {
        v19 |= 6u;
      }
LABEL_33:
      if ( (v11 & 7) == 0 )
      {
        if ( v11 == 8 )
        {
          *(_WORD *)(a2 + 5) = v19;
          v14 = HIWORD(v19);
          *(_BYTE *)(a2 + 7) = BYTE2(v19);
        }
        else
        {
          *(_WORD *)(a2 + 2) = v19;
          v14 = HIWORD(v19);
          *(_BYTE *)(a2 + 4) = BYTE2(v19);
        }
        v19 = v14;
      }
      if ( --v11 < 0 )
        return sub_47BAF1(v2, a2 + 8);
    }
    v13 = ((v10 >> 1) + v20 * (v16 - (unsigned __int8)v2[4 * v11 + 3])) / v10;
    if ( v13 < v20 )
    {
      if ( v13 > 0 )
        v19 |= v13 + 1;
    }
    else
    {
      v19 |= 1u;
    }
    v2 = a1;
    goto LABEL_33;
  }
  *(_BYTE *)(a2 + 7) = 0;
  *(_BYTE *)(a2 + 6) = 0;
  *(_BYTE *)(a2 + 5) = 0;
  *(_BYTE *)(a2 + 4) = 0;
  *(_BYTE *)(a2 + 3) = 0;
  *(_BYTE *)(a2 + 2) = 0;
  return sub_47BAF1(v2, a2 + 8);
}
