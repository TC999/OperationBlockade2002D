//----- (0046F081) --------------------------------------------------------
int __cdecl sub_46F081(_DWORD *self)
{
  _BYTE *v2; // ecx
  _DWORD *v3; // eax
  int v4; // ebx
  _BYTE *v5; // edx
  _BYTE *v6; // edi
  _BYTE *v7; // ebx
  char v8; // di
  _BYTE *v9; // eax
  bool v10; // cf
  _DWORD *v12; // [esp+8h] [ebp-28h]
  _BYTE *i; // [esp+Ch] [ebp-24h]
  unsigned int v14; // [esp+10h] [ebp-20h]
  _BYTE *v15; // [esp+18h] [ebp-18h]
  _BYTE *v16; // [esp+1Ch] [ebp-14h]
  _BYTE *v17; // [esp+20h] [ebp-10h]
  _BYTE *v18; // [esp+24h] [ebp-Ch]
  _BYTE *v19; // [esp+28h] [ebp-8h]

  v2 = *(_BYTE **)(self[1] + 24);
  v12 = self;
  v3 = (_DWORD *)*self;
  v4 = v3[1042];
  v5 = (_BYTE *)v3[6];
  v6 = &v5[v4 * v3[1045]];
  v16 = v2;
  v15 = v5;
  for ( i = v6; v5 < v6; v15 = v5 )
  {
    v7 = &v5[v4];
    v19 = v2;
    v18 = v5;
    v17 = v7;
    v14 = (unsigned int)&v5[v3[1044]];
    if ( (unsigned int)v5 < v14 )
    {
      do
      {
        v8 = v5[1];
        v9 = v19++;
        *v9 = (((*v7 & 0xE3) + (*v5 & 0xE3) + (v7[1] & 0xE3) + (v8 & 0xE3u) + 66) >> 2)
            ^ ((((*v7 & 0xE3) + (*v5 & 0xE3) + (v7[1] & 0xE3) + (v8 & 0xE3u) + 66) >> 2)
             ^ (((*v7 & 0x1C) + (*v5 & 0x1C) + (v7[1] & 0x1C) + (v8 & 0x1Cu) + 8) >> 2))
            & 0x1C;
        v5 = v18 + 2;
        v7 = v17 + 2;
        v10 = (unsigned int)(v18 + 2) < v14;
        v18 += 2;
        v17 += 2;
      }
      while ( v10 );
      v2 = v16;
      v5 = v15;
      v6 = i;
    }
    v2 += *(_DWORD *)(v12[1] + 4168);
    v3 = (_DWORD *)*v12;
    v4 = *(_DWORD *)(*v12 + 4168);
    v5 += 2 * v4;
    v16 = v2;
  }
  return 0;
}
