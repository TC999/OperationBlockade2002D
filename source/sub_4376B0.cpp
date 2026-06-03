extern char aMapMapworksPf3[];
extern char aSoundsWarmapEx[];
extern char aMapblasthalo[];
extern char aMapexplode[];
extern char aMapexplodespar[];
extern char aMapshellexplod[];
extern char aMapshellexplod_0[];

//----- (004376B0) --------------------------------------------------------
_DWORD *__cdecl sub_4376B0(_DWORD *self, int a2)
{
  int v3; // ebx
  int v4; // ecx
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // eax
  const char **v8; // edi
  _DWORD *v9; // esi
  int v10; // eax
  int v12; // [esp-8h] [ebp-B8h]
  float v13; // [esp+0h] [ebp-B0h]
  int v14; // [esp+14h] [ebp-9Ch]
  int v15; // [esp+18h] [ebp-98h]
  _DWORD v16[17]; // [esp+1Ch] [ebp-94h] BYREF
  float v17; // [esp+60h] [ebp-50h] BYREF
  char Buffer[64]; // [esp+64h] [ebp-4Ch] BYREF
  int v19; // [esp+ACh] [ebp-4h]

  v16[16] = (int)self;
  sub_403B10(self);
  v3 = 0;
  v19 = 0;
  v4 = 13;
  v5 = self + 176;
  do
  {
    *(v5 - 2) = 0;
    *(v5 - 1) = 0;
    *v5 = 0;
    v5 += 35;
    --v4;
  }
  while ( v4 );
  *self = (int)&off_499508;
  self[148] = a2;
  sub_403D90((char *)self, aMapMapworksPf3);
  sub_403E30((int)self);
  v6 = (_DWORD *)operator new(0x15Cu);
  *(_BYTE *)&v19 = 1;
  if ( v6 )
    v7 = sub_41C6A0(v6);
  else
    v7 = 0;
  *(_BYTE *)&v19 = 0;
  self[609] = (int)v7;
  sub_41C760((int)v7, aSoundsWarmapEx);
  sub_41CA40(self[609]);
  v13 = (double)*(int *)&dword_4A34C0 * 0.0099999998 * 0.40000001 + 0.60000002;
  sub_41CFD0(self[609], v13);
  memset(self + 149, 0, 0x71Cu);
  v15 = 0;
  v14 = 0;
  v8 = (const char **)off_4AA5F0;
  v9 = self + 169;
  do
  {
    for ( *v9 = 0; ; ++*v9 )
    {
      sprintf(Buffer, "%s %03d", *v8, *v9);
      v10 = sub_405A30(self, Buffer, -1, 1);
      if ( v10 < 0 )
        break;
      self[v3 + 149 + *v9] = v10;
    }
    if ( (int)v8 < (int)&off_4AA620 )
    {
      sprintf(Buffer, "Allied Flag%02d", v15 + 1);
      v9[1] = sub_405A30(self, Buffer, -1, 1);
      sprintf(Buffer, "Enemy Flag%02d", v15 + 1);
      v9[2] = sub_405A30(self, Buffer, -1, 1);
      v12 = v9[1];
      memset(&v16[11], 0, 16);
      memset(&v16[6], 0, 16);
      memset(&v16[1], 0, 16);
      v16[15] = 1065353216;
      v16[10] = 1065353216;
      v16[5] = 1065353216;
      v16[0] = 1065353216;
      sub_404F60(self, v12, v16, &v17);
      sub_46C5C5((float *)(v9 + 5), (float *)(v9 + 5), (float *)v16);
      v3 = v14;
    }
    v9[10] = 1065353216;
    v9[9] = 1065353216;
    v9[8] = 1065353216;
    ++v8;
    v3 += 35;
    v9 += 35;
    ++v15;
    v14 = v3;
  }
  while ( (int)v8 < (int)&dword_4AA624 );
  self[604] = sub_413830(*(_DWORD **)(dword_520970 + 116), aMapblasthalo);
  self[605] = sub_413830(*(_DWORD **)(dword_520970 + 116), aMapexplode);
  self[606] = sub_413830(*(_DWORD **)(dword_520970 + 116), aMapexplodespar);
  self[607] = sub_413830(*(_DWORD **)(dword_520970 + 116), aMapshellexplod);
  self[608] = sub_413830(*(_DWORD **)(dword_520970 + 116), aMapshellexplod_0);
  return self;
}
