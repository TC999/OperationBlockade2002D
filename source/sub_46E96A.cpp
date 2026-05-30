//----- (0046E96A) --------------------------------------------------------
int __cdecl sub_46E96A(_DWORD *self)
{
  unsigned int *v1; // ebx
  int v2; // esi
  int v3; // eax
  char *v4; // edx
  int v5; // ecx
  char *v6; // ecx
  unsigned int v7; // esi
  unsigned int v8; // ebx
  unsigned int v9; // ebx
  unsigned int *v10; // ecx
  char *i; // [esp+8h] [ebp-28h]
  char *v14; // [esp+10h] [ebp-20h]
  char *v15; // [esp+14h] [ebp-1Ch]
  unsigned int *v16; // [esp+18h] [ebp-18h]
  char *v17; // [esp+1Ch] [ebp-14h]
  char *v18; // [esp+20h] [ebp-10h]
  unsigned int *v19; // [esp+28h] [ebp-8h]

  v1 = *(unsigned int **)(self[1] + 24);
  v2 = *self;
  v3 = *(_DWORD *)(*self + 4180);
  v4 = *(char **)(*self + 24);
  v5 = *(_DWORD *)(*self + 4168);
  v16 = v1;
  v15 = v4;
  for ( i = &v4[v5 * v3]; v4 < i; v15 = v4 )
  {
    v6 = &v4[v5];
    v19 = v1;
    v18 = v4;
    v17 = v6;
    v14 = &v4[4 * *(_DWORD *)(v2 + 4176)];
    if ( v4 < v14 )
    {
      do
      {
        v7 = *((_DWORD *)v6 + 1);
        v8 = *((_DWORD *)v4 + 1);
        v9 = (((v8 >> 2) & 0x3FC03FC0)
            + ((*(_DWORD *)v6 >> 2) & 0x3FC03FC0)
            + ((*(_DWORD *)v4 >> 2) & 0x3FC03FC0)
            + ((v7 >> 2) & 0x3FC03FC0)
            + 8388736)
           ^ ((((v8 & 0xFF00FF) + (*(_DWORD *)v6 & 0xFF00FF) + (*(_DWORD *)v4 & 0xFF00FF) + (v7 & 0xFF00FF) + 131074) >> 2)
            ^ (((v8 >> 2) & 0xFFC03FC0)
             + ((*(_DWORD *)v6 >> 2) & 0xFFC03FC0)
             + ((*(_DWORD *)v4 >> 2) & 0xFFC03FC0)
             + ((v7 >> 2) & 0xFFC03FC0)
             - 8388480))
           & 0xFF00FF;
        v10 = v19++;
        *v10 = v9;
        v4 = v18 + 8;
        v6 = v17 + 8;
        v18 = v4;
        v17 += 8;
      }
      while ( v4 < v14 );
      v4 = v15;
    }
    v1 = (unsigned int *)((char *)v16 + *(_DWORD *)(self[1] + 4168));
    v2 = *self;
    v5 = *(_DWORD *)(*self + 4168);
    v4 += 2 * v5;
    v16 = v1;
  }
  return 0;
}
