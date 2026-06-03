//----- (0046F497) --------------------------------------------------------
int __cdecl sub_46F497(_DWORD *self)
{
  int v1; // edx
  int v2; // eax
  unsigned __int16 *v3; // ebx
  int v4; // esi
  int v5; // ecx
  unsigned __int16 *v6; // esi
  _WORD *v7; // edi
  unsigned __int16 *v8; // ecx
  int v9; // edx
  int v10; // edi
  int v11; // esi
  unsigned int v12; // edx
  int v13; // ebx
  int v14; // edi
  _WORD *v15; // ecx
  unsigned __int16 *i; // [esp+10h] [ebp-24h]
  unsigned __int16 *v19; // [esp+14h] [ebp-20h]
  unsigned __int16 *v20; // [esp+18h] [ebp-1Ch]
  _WORD *v21; // [esp+1Ch] [ebp-18h]
  unsigned __int16 *v22; // [esp+20h] [ebp-14h]
  unsigned __int16 *v23; // [esp+24h] [ebp-10h]
  int v24; // [esp+28h] [ebp-Ch]
  _WORD *v25; // [esp+2Ch] [ebp-8h]
  int v26; // [esp+30h] [ebp-4h]

  v1 = *self;
  v2 = self[1];
  v3 = *(unsigned __int16 **)(*self + 24);
  v4 = *(_DWORD *)(*self + 4180);
  v5 = *(_DWORD *)(*self + 4168);
  v6 = (unsigned __int16 *)((char *)v3 + v5 * v4);
  v7 = *(_WORD **)(v2 + 24);
  v21 = v7;
  v20 = v3;
  for ( i = v6; v3 < v6; v20 = v3 )
  {
    v8 = (unsigned __int16 *)((char *)v3 + v5);
    v25 = v7;
    v23 = v3;
    v22 = v8;
    v19 = &v3[*(_DWORD *)(v1 + 4176)];
    if ( v3 < v19 )
    {
      do
      {
        v9 = *v3;
        v10 = v3[1];
        v26 = *v8;
        v24 = v9;
        *(_WORD *)&v9 = (unsigned __int8)*v3;
        v11 = v8[1] & 0xFF00;
        v12 = (unsigned __int8)*v8 + v9 + (unsigned __int8)v8[1] + (v10 & 0xFFFF00FF) + 2;
        ((_WORD *)&v13)[1] = 0;
        v14 = v10 & 0xFF00;
        *(_WORD *)&v13 = (unsigned __int16)v14;
        v15 = v25++;
        *v15 = (unsigned __int16)((((v26 & 0xFF00) + (v24 & 0xFF00u) + v11 + v14 + 512) >> 2)
             ^ (unsigned __int8)((((v26 & 0xFFFFFF00) + (v24 & 0xFFFFFF00) + v11 + v13 + 512) >> 2) ^ (v12 >> 2)));
        v3 = v23 + 2;
        v8 = v22 + 2;
        v23 = v3;
        v22 += 2;
      }
      while ( v3 < v19 );
      v7 = v21;
      v3 = v20;
      v6 = i;
    }
    v7 = (_WORD *)((char *)v7 + *(_DWORD *)(self[1] + 4168));
    v1 = *self;
    v5 = *(_DWORD *)(*self + 4168);
    v3 += v5;
    v21 = v7;
  }
  return 0;
}
