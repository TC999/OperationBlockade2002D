//----- (0044C720) --------------------------------------------------------
char *__thiscall sub_44C720(char *self, int a2)
{
  _DWORD *v2; // ebp
  unsigned int v4; // ebx
  _DWORD *v5; // ecx
  int v6; // eax
  int v8; // [esp+10h] [ebp-24h]
  char *v9; // [esp+14h] [ebp-20h]
  char v10; // [esp+18h] [ebp-1Ch]
  _DWORD *v11; // [esp+1Ch] [ebp-18h]
  int v12; // [esp+20h] [ebp-14h]
  int v13; // [esp+24h] [ebp-10h]
  int v14; // [esp+30h] [ebp-4h]

  v2 = (_DWORD *)a2;
  v9 = self;
  sub_468FF0(a2);
  v14 = 0;
  self[296] = a2;
  *((_DWORD *)self + 75) = 0;
  *((_DWORD *)self + 76) = 0;
  *((_DWORD *)self + 77) = 0;
  LOBYTE(v14) = 1;
  *(_DWORD *)self = &off_499AA4;
  *((_DWORD *)self + 73) = 0;
  if ( sub_40ABC0(v2, aParticleeffect, 0) )
  {
    sub_40AFC0(aParticleeffect, (int)&a2);
    sub_469160(self + 292, a2, aParticleEffect);
  }
  v4 = 0;
  v10 = a2;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  LOBYTE(v14) = 2;
  while ( sub_40ABC0(v2, aSoundeffect, 0) )
  {
    sub_40AFC0(aSoundeffect, (int)&a2);
    sub_44F190(v12, 1, &a2);
  }
  v8 = 0;
  v5 = (_DWORD *)*((_DWORD *)self + 75);
  if ( v5 )
  {
    if ( (*((_DWORD *)self + 76) - (int)v5) >> 2 )
      sub_448300((_DWORD *)self + 74, v5, *((int **)self + 76));
    v4 = 0;
  }
  while ( 1 )
  {
    v6 = *((_DWORD *)self + 75);
    if ( !v6 || v4 >= (*((_DWORD *)self + 76) - v6) >> 2 )
      break;
    sub_469160(4 * v4 + *((_DWORD *)self + 75), v11[v4], aSoundEffect);
    ++v4;
  }
  *((_DWORD *)self + 78) = 0;
  if ( sub_40ABC0(v2, aChunkexplosion, 0) )
  {
    sub_40AFC0(aChunkexplosion, (int)&a2);
    sub_469160(self + 312, a2, aChunkExplosion);
  }
  *((_DWORD *)self + 79) = 0;
  if ( sub_40ABC0(v2, aRippleeffect, 0) )
  {
    sub_40AFC0(aRippleeffect, (int)&a2);
    sub_469160(self + 316, a2, aRippleEffect);
  }
  sub_4885A6(v11);
  return self;
}
