//----- (0046F37E) --------------------------------------------------------
int __cdecl sub_46F37E(_DWORD *self)
{
  _WORD *v2; // ecx
  _DWORD *v3; // eax
  unsigned __int16 *v4; // esi
  int v5; // edi
  unsigned __int16 *v6; // edx
  unsigned __int16 *v7; // edi
  unsigned __int16 *v8; // ebx
  int v9; // edx
  int v10; // eax
  int v11; // edi
  unsigned int v12; // ebx
  int v13; // eax
  _WORD *v14; // eax
  _DWORD *v16; // [esp+8h] [ebp-20h]
  unsigned __int16 *i; // [esp+Ch] [ebp-1Ch]
  unsigned __int16 *v18; // [esp+10h] [ebp-18h]
  int v19; // [esp+14h] [ebp-14h]
  _WORD *v20; // [esp+18h] [ebp-10h]
  unsigned __int16 *v21; // [esp+1Ch] [ebp-Ch]
  unsigned __int16 *v22; // [esp+20h] [ebp-8h]
  _WORD *v23; // [esp+24h] [ebp-4h]

  v2 = *(_WORD **)(self[1] + 24);
  v16 = self;
  v3 = (_DWORD *)*self;
  v4 = (unsigned __int16 *)v3[6];
  v5 = v3[1042];
  v6 = (unsigned __int16 *)((char *)v4 + v5 * v3[1045]);
  v20 = v2;
  for ( i = v6; v4 < v6; v20 = v2 )
  {
    v7 = (unsigned __int16 *)((char *)v4 + v5);
    v8 = v4;
    v23 = v2;
    v22 = v4;
    v21 = v7;
    v18 = &v4[v3[1044]];
    if ( v4 < v18 )
    {
      do
      {
        v9 = v8[1];
        v10 = v7[1];
        v11 = *v7;
        v19 = *v8;
        v12 = (v11 & 0xFFFF00F0) + (v19 & 0xFFFF00F0) + (v10 & 0xFFFF00F0) + (v9 & 0xFFFF00F0) + 32;
        LOWORD(v11) = v11 & 0xF0F;
        LOWORD(v9) = v9 & 0xF0F;
        v13 = v11 + (v19 & 0xFFFF0F0F) + (v10 & 0xFFFF0F0F);
        v7 = v21 + 2;
        v21 += 2;
        LOWORD(v12) = ((unsigned int)(v13 + v9 + 514) >> 2) & 0xF0F | (v12 >> 2) & 0xF0;
        v14 = v23++;
        *v14 = v12;
        v8 = v22 + 2;
        v22 += 2;
      }
      while ( v22 < v18 );
      v2 = v20;
      v6 = i;
    }
    v2 = (_WORD *)((char *)v2 + *(_DWORD *)(v16[1] + 4168));
    v3 = (_DWORD *)*v16;
    v5 = *(_DWORD *)(*v16 + 4168);
    v4 += v5;
  }
  return 0;
}
