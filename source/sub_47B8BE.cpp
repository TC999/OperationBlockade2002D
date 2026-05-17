//----- (0047B8BE) --------------------------------------------------------
char __cdecl sub_47B8BE(unsigned __int16 *a1, char *a2)
{
  unsigned __int16 *v2; // esi
  char result; // al
  unsigned __int16 v4; // ax
  char *v5; // ecx
  int v6; // esi
  int v7; // edi
  bool v8; // cc
  int i; // edi
  unsigned __int8 *v10; // ecx
  unsigned int v11; // edx
  char *v12; // ecx
  int v13; // ebx
  unsigned int *v14; // esi
  unsigned int v15; // [esp+Ch] [ebp-14h] BYREF
  unsigned int v16; // [esp+10h] [ebp-10h] BYREF
  char v17; // [esp+17h] [ebp-9h]
  char v18; // [esp+1Bh] [ebp-5h]
  int v19; // [esp+1Ch] [ebp-4h]

  v2 = a1;
  if ( a1 )
  {
    sub_47B0C6(a1, &v15);
    sub_47B0C6(a1 + 1, &v16);
    v4 = *a1;
    v17 = -1;
    HIBYTE(v16) = -1;
    HIBYTE(v15) = -1;
    if ( v4 <= a1[1] )
    {
      for ( i = 0; i < 3; ++i )
      {
        v10 = (unsigned __int8 *)&v15 + i;
        v10[8] = (*v10 + v10[4]) / 2;
        v10[12] = 0;
      }
      v18 = 0;
    }
    else
    {
      v19 = 0;
      do
      {
        v5 = (char *)&v16 + v19;
        v6 = *((unsigned __int8 *)&v15 + v19);
        v7 = *((unsigned __int8 *)&v16 + v19);
        v5[4] = (v7 + 2 * v6 + 1) / 3;
        v8 = ++v19 < 3;
        v5[8] = (v6 + 2 * v7 + 1) / 3;
      }
      while ( v8 );
      v18 = -1;
      v2 = a1;
    }
    v11 = *((_DWORD *)v2 + 1);
    v12 = a2;
    v13 = 16;
    do
    {
      v14 = &v15 + (v11 & 3);
      result = *((_BYTE *)&v15 + 4 * (v11 & 3) + 3);
      *(_WORD *)v12 = *(_WORD *)v14;
      v12[2] = *((_BYTE *)v14 + 2);
      v12[3] = result;
      v11 >>= 2;
      v12 += 4;
      --v13;
    }
    while ( v13 );
  }
  else
  {
    result = 0;
    memset(a2, 0, 0x40u);
  }
  return result;
}
