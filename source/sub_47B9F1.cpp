//----- (0047B9F1) --------------------------------------------------------
int __cdecl sub_47B9F1(unsigned __int16 *a1, char *a2)
{
  int v2; // esi
  int v3; // ecx
  unsigned int v4; // ecx
  int result; // eax
  int v6; // ecx
  int v7; // edx
  char v8; // dl
  _DWORD v9[2]; // [esp+Ch] [ebp-24h]
  int v10; // [esp+14h] [ebp-1Ch]
  int v11; // [esp+18h] [ebp-18h]
  int v12; // [esp+1Ch] [ebp-14h]
  int v13; // [esp+20h] [ebp-10h]
  int v14; // [esp+24h] [ebp-Ch]
  int v15; // [esp+28h] [ebp-8h]
  unsigned int v16; // [esp+2Ch] [ebp-4h]

  v16 = 0;
  sub_47B8BE(a1 + 4, a2);
  v2 = *((unsigned __int8 *)a1 + 1);
  v3 = *(unsigned __int8 *)a1;
  v9[0] = v3;
  v9[1] = v2;
  if ( v3 <= v2 )
  {
    v15 = 255;
    v10 = (v2 + 4 * v3) / 5;
    v11 = (3 * v3 + 2 * v2) / 5;
    v12 = (3 * v2 + 2 * v3) / 5;
    v14 = 0;
    v13 = (v3 + 4 * v2) / 5;
  }
  else
  {
    v10 = (v2 + 6 * v3) / 7;
    v11 = (5 * v3 + 2 * v2) / 7;
    v12 = (3 * v2 + 4 * v3) / 7;
    v13 = (3 * v3 + 4 * v2) / 7;
    v14 = (5 * v2 + 2 * v3) / 7;
    v15 = (v3 + 6 * v2) / 7;
  }
  v4 = v16;
  for ( result = 0; result < 16; ++result )
  {
    if ( (result & 7) == 0 )
    {
      HIWORD(v6) = 0;
      if ( result )
      {
        BYTE1(v6) = *((_BYTE *)a1 + 7);
        v7 = *((unsigned __int8 *)a1 + 5);
        LOBYTE(v6) = *((_BYTE *)a1 + 6);
      }
      else
      {
        BYTE1(v6) = *((_BYTE *)a1 + 4);
        v7 = *((unsigned __int8 *)a1 + 2);
        LOBYTE(v6) = *((_BYTE *)a1 + 3);
      }
      v4 = v7 | (v6 << 8);
    }
    v8 = v9[v4 & 7];
    v4 >>= 3;
    a2[4 * result + 3] = v8;
  }
  return result;
}
