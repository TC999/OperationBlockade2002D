//----- (0046EE09) --------------------------------------------------------
int __cdecl sub_46EE09(_DWORD *self)
{
  _WORD *v1; // ebx
  int v2; // esi
  int v3; // eax
  int v4; // ecx
  char *v5; // edi
  char *v6; // ecx
  __int16 v7; // si
  _WORD *v8; // ecx
  bool v9; // cf
  char *i; // [esp+Ch] [ebp-2Ch]
  unsigned int v13; // [esp+14h] [ebp-24h]
  char *v14; // [esp+1Ch] [ebp-1Ch]
  _WORD *v15; // [esp+20h] [ebp-18h]
  char *v16; // [esp+24h] [ebp-14h]
  char *v17; // [esp+28h] [ebp-10h]
  _WORD *v18; // [esp+2Ch] [ebp-Ch]
  __int16 v19; // [esp+30h] [ebp-8h]
  __int16 v20; // [esp+34h] [ebp-4h]

  v1 = *(_WORD **)(self[1] + 24);
  v2 = *self;
  v3 = *(_DWORD *)(*self + 4180);
  v4 = *(_DWORD *)(*self + 4168);
  v5 = *(char **)(v2 + 24);
  v15 = v1;
  v14 = v5;
  for ( i = &v5[v4 * v3]; v5 < i; v14 = v5 )
  {
    v6 = &v5[v4];
    v18 = v1;
    v17 = v5;
    v16 = v6;
    v13 = (unsigned int)&v5[2 * *(_DWORD *)(v2 + 4176)];
    if ( (unsigned int)v5 < v13 )
    {
      do
      {
        v7 = *((_WORD *)v6 + 1);
        v20 = *(_WORD *)v6;
        v19 = *((_WORD *)v5 + 1);
        v8 = v18++;
        *v8 = (unsigned __int16)((((v20 & 0x83E0) + (*(_WORD *)v5 & 0x83E0) + (v7 & 0x83E0) + (v19 & 0x83E0u) + 65600) >> 2)
            ^ ((((v20 & 0x7C1F) + (*(_WORD *)v5 & 0x7C1F) + (v7 & 0x7C1F) + (v19 & 0x7C1Fu) + 2050) >> 2)
             ^ (((v20 & 0x83E0) + (*(_WORD *)v5 & 0x83E0) + (v7 & 0x83E0) + (v19 & 0x83E0u) + 65600) >> 2))
            & 0x7C1F);
        v5 = v17 + 4;
        v6 = v16 + 4;
        v9 = (unsigned int)(v17 + 4) < v13;
        v17 += 4;
        v16 += 4;
      }
      while ( v9 );
      v5 = v14;
    }
    v1 = (_WORD *)((char *)v15 + *(_DWORD *)(self[1] + 4168));
    v2 = *self;
    v4 = *(_DWORD *)(*self + 4168);
    v5 += 2 * v4;
    v15 = v1;
  }
  return 0;
}
