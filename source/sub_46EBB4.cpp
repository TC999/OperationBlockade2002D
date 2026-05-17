//----- (0046EBB4) --------------------------------------------------------
int __thiscall sub_46EBB4(_DWORD *this)
{
  _DWORD *v2; // edx
  _WORD *v3; // ecx
  int v4; // ebx
  unsigned __int16 *v5; // edi
  unsigned __int16 *v6; // esi
  unsigned __int16 *v7; // ebx
  int v8; // edx
  int v9; // esi
  int v10; // ecx
  __int16 v11; // di
  int v12; // edx
  _WORD *v13; // ecx
  bool v14; // cf
  unsigned __int16 *i; // [esp+10h] [ebp-24h]
  unsigned int v17; // [esp+14h] [ebp-20h]
  unsigned __int16 *v18; // [esp+1Ch] [ebp-18h]
  _WORD *v19; // [esp+20h] [ebp-14h]
  unsigned __int16 *v20; // [esp+24h] [ebp-10h]
  unsigned __int16 *v21; // [esp+28h] [ebp-Ch]
  _WORD *v22; // [esp+2Ch] [ebp-8h]
  int v23; // [esp+30h] [ebp-4h]

  v2 = (_DWORD *)*this;
  v3 = *(_WORD **)(this[1] + 24);
  v4 = v2[1042];
  v5 = (unsigned __int16 *)v2[6];
  v6 = (unsigned __int16 *)((char *)v5 + v4 * v2[1045]);
  v19 = v3;
  v18 = v5;
  for ( i = v6; v5 < v6; v18 = v5 )
  {
    v7 = (unsigned __int16 *)((char *)v5 + v4);
    v22 = v3;
    v21 = v5;
    v20 = v7;
    v17 = (unsigned int)&v5[v2[1044]];
    if ( (unsigned int)v5 < v17 )
    {
      do
      {
        v8 = v7[1];
        v9 = v5[1];
        v23 = *v7;
        v10 = *v5;
        v11 = (((v23 & 0xFFFF07E0) + (v10 & 0xFFFF07E0) + (v8 & 0xFFFF07E0) + (v9 & 0xFFFF07E0) + 64) >> 2)
            ^ (((v23 & 0xFFFFF81F) + (v10 & 0xFFFFF81F) + (v8 & 0xFFFFF81F) + (v9 & 0xFFFFF81F) + 4098) >> 2);
        v12 = (v23 & 0xF81F) + (v10 & 0xF81F) + (v8 & 0xF81F);
        v13 = v22++;
        *v13 = ((v12 + (v9 & 0xF81Fu) + 4098) >> 2) ^ v11 & 0x7E0;
        v5 = v21 + 2;
        v7 = v20 + 2;
        v14 = (unsigned int)(v21 + 2) < v17;
        v21 += 2;
        v20 += 2;
      }
      while ( v14 );
      v3 = v19;
      v5 = v18;
      v6 = i;
    }
    v3 = (_WORD *)((char *)v3 + *(_DWORD *)(this[1] + 4168));
    v2 = (_DWORD *)*this;
    v4 = *(_DWORD *)(*this + 4168);
    v5 += v4;
    v19 = v3;
  }
  return 0;
}
