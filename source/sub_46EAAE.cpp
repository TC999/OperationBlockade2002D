//----- (0046EAAE) --------------------------------------------------------
int __thiscall sub_46EAAE(_DWORD *this)
{
  unsigned int *v1; // ebx
  int v2; // eax
  int v3; // edx
  int v4; // ecx
  char *v5; // edi
  char *v6; // ecx
  char *v7; // ebx
  unsigned int *v8; // eax
  bool v9; // cf
  char *i; // [esp+8h] [ebp-28h]
  unsigned int v13; // [esp+10h] [ebp-20h]
  char *v14; // [esp+18h] [ebp-18h]
  unsigned int *v15; // [esp+1Ch] [ebp-14h]
  char *v16; // [esp+20h] [ebp-10h]
  char *v17; // [esp+24h] [ebp-Ch]
  unsigned int *v18; // [esp+2Ch] [ebp-4h]

  v1 = *(unsigned int **)(this[1] + 24);
  v2 = *this;
  v3 = *(_DWORD *)(*this + 4180);
  v4 = *(_DWORD *)(*this + 4168);
  v5 = *(char **)(v2 + 24);
  v15 = v1;
  v14 = v5;
  for ( i = &v5[v4 * v3]; v5 < i; v14 = v5 )
  {
    v18 = v1;
    v6 = &v5[v4];
    v7 = v5;
    v17 = v5;
    v16 = v6;
    v13 = (unsigned int)&v5[4 * *(_DWORD *)(v2 + 4176)];
    if ( (unsigned int)v5 < v13 )
    {
      do
      {
        v8 = v18++;
        *v8 = (((*((_DWORD *)v7 + 1) & 0xFF00)
              + (*(_DWORD *)v6 & 0xFF00)
              + (*(_DWORD *)v7 & 0xFF00)
              + (*((_DWORD *)v6 + 1) & 0xFF00)
              + 512)
             & 0x3FC00
             | ((*((_DWORD *)v7 + 1) & 0xFF00FF)
              + (*(_DWORD *)v6 & 0xFF00FF)
              + (*(_DWORD *)v7 & 0xFF00FF)
              + (*((_DWORD *)v6 + 1) & 0xFF00FF)
              + 131074)
             & 0x3FC03FCu) >> 2;
        v7 = v17 + 8;
        v6 = v16 + 8;
        v9 = (unsigned int)(v17 + 8) < v13;
        v17 += 8;
        v16 += 8;
      }
      while ( v9 );
      v5 = v14;
    }
    v1 = (unsigned int *)((char *)v15 + *(_DWORD *)(this[1] + 4168));
    v2 = *this;
    v4 = *(_DWORD *)(*this + 4168);
    v5 += 2 * v4;
    v15 = v1;
  }
  return 0;
}
