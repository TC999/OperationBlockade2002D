//----- (0046ECF4) --------------------------------------------------------
int __thiscall sub_46ECF4(_DWORD *self)
{
  int v1; // edx
  _WORD *v2; // eax
  int v3; // esi
  int v4; // ecx
  char *v5; // edi
  char *v6; // esi
  unsigned __int16 *v7; // ecx
  char *v8; // ebx
  int v9; // edx
  _WORD *v10; // ecx
  bool v11; // cf
  char *i; // [esp+Ch] [ebp-20h]
  unsigned int v15; // [esp+10h] [ebp-1Ch]
  unsigned __int16 *v16; // [esp+18h] [ebp-14h]
  char *v17; // [esp+1Ch] [ebp-10h]
  int v18; // [esp+20h] [ebp-Ch]
  _WORD *v19; // [esp+24h] [ebp-8h]
  _WORD *v20; // [esp+28h] [ebp-4h]

  v1 = *self;
  v2 = *(_WORD **)(self[1] + 24);
  v3 = *(_DWORD *)(*self + 4180);
  v4 = *(_DWORD *)(*self + 4168);
  v5 = *(char **)(v1 + 24);
  v6 = &v5[v4 * v3];
  v19 = v2;
  for ( i = v6; v5 < v6; v5 += 2 * v4 )
  {
    v20 = v19;
    v7 = (unsigned __int16 *)&v5[v4];
    v8 = v5;
    v17 = v5;
    v16 = v7;
    v15 = (unsigned int)&v5[2 * *(_DWORD *)(v1 + 4176)];
    if ( (unsigned int)v5 < v15 )
    {
      do
      {
        v9 = v7[1];
        v18 = *v7;
        v10 = v20++;
        *v10 = (((v18 & 0x7C1F) + (*(_WORD *)v8 & 0x7C1F) + (v9 & 0x7C1F) + (*((_WORD *)v8 + 1) & 0x7C1Fu) + 2050) >> 2)
             & 0x7C1F
             | (((v18 & 0xFFFF03E0) + (*(_WORD *)v8 & 0x3E0) + (v9 & 0xFFFF03E0) + (*((_WORD *)v8 + 1) & 0x3E0) + 64) >> 2)
             & 0x3E0;
        v8 = v17 + 4;
        v7 = v16 + 2;
        v11 = (unsigned int)(v17 + 4) < v15;
        v17 += 4;
        v16 += 2;
      }
      while ( v11 );
      v6 = i;
    }
    v19 = (_WORD *)((char *)v19 + *(_DWORD *)(self[1] + 4168));
    v1 = *self;
    v4 = *(_DWORD *)(*self + 4168);
  }
  return 0;
}
