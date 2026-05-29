//----- (00465FF0) --------------------------------------------------------
_DWORD *__thiscall sub_465FF0(_DWORD *self, int a2, int a3)
{
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // eax
  int v10; // ecx
  int *v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // edx
  int v15; // eax
  int v16; // ecx
  int *v17; // eax
  int v19; // [esp+8h] [ebp-24h] BYREF
  int v20[2]; // [esp+Ch] [ebp-20h] BYREF
  int v21; // [esp+14h] [ebp-18h] BYREF
  int v22; // [esp+18h] [ebp-14h]
  int v23; // [esp+1Ch] [ebp-10h]
  int v24; // [esp+28h] [ebp-4h]

  v20[1] = (int)self;
  sub_401270(self);
  v24 = 0;
  Iostream_init::Iostream_init((Iostream_init *)(self + 129));
  *self = &off_499C98;
  self[98] = a3;
  self[103] = a2;
  sub_4282E0(
    *(_DWORD *)(a2 + 560) != 0,
    "model for %s not loaded, try deleting ExtraData.dat",
    *(const char **)(a2 + 4));
  v4 = operator new(0x34u);
  LOBYTE(v24) = 2;
  if ( v4 )
    v5 = sub_406B00(v4, *(_DWORD *)(a2 + 560), 0);
  else
    v5 = 0;
  LOBYTE(v24) = 1;
  self[104] = v5;
  sub_428680(self, (int)v5);
  self[113] = sub_415270(*(_DWORD *)(dword_520970 + 244), *(_DWORD *)(a2 + 1220));
  v6 = self[103];
  self[338] = 0;
  v7 = *(_DWORD *)(v6 + 1236);
  if ( v7 )
  {
    sub_4282E0(
      *(_BYTE *)(v7 + 301),
      "engine sound did not set 'engine = true', see %s : %s",
      *(const char **)(v6 + 4),
      (const char *)(v6 + 16));
    v8 = self[103];
    v21 = 0;
    v22 = 0;
    v23 = 0;
    sub_44D850(*(_DWORD *)(v8 + 1236), (float *)&v21, &v19, v20);
    if ( v19 )
    {
      v9 = sub_41E2D0(*(_DWORD **)(dword_520970 + 120), v19, 0, 1);
      self[338] = v9;
      if ( v9 )
      {
        sub_41D8A0(*(_BYTE *)(*(_DWORD *)(self[103] + 1236) + 330));
        sub_41D8B0(
          (_DWORD *)self[338],
          *(_DWORD *)v20[0],
          *(_DWORD *)(v20[0] + 12),
          *(_DWORD *)(v20[0] + 20),
          *(_DWORD *)(v20[0] + 4),
          *(_DWORD *)(v20[0] + 8),
          *(_DWORD *)(v20[0] + 16));
        v10 = self[103];
        v11 = *(int **)(v10 + 1236);
        sub_41D900((_DWORD *)self[338], *(_DWORD *)(v10 + 1172), v11[76], v11[77], v11[78], v11[79], v11[80], v11[81]);
      }
    }
  }
  v12 = self[103];
  self[339] = 0;
  v13 = *(_DWORD *)(v12 + 1240);
  if ( v13 )
  {
    sub_4282E0(
      *(_BYTE *)(v13 + 301),
      "idle sound did not set 'engine = true', see %s : %s",
      *(const char **)(v12 + 4),
      (const char *)(v12 + 16));
    v14 = self[103];
    v21 = 0;
    v22 = 0;
    v23 = 0;
    sub_44D850(*(_DWORD *)(v14 + 1240), (float *)&v21, &v19, v20);
    if ( v19 )
    {
      v15 = sub_41E2D0(*(_DWORD **)(dword_520970 + 120), v19, 0, 1);
      self[339] = v15;
      if ( v15 )
      {
        sub_41D8A0(*(_BYTE *)(*(_DWORD *)(self[103] + 1240) + 330));
        sub_41D8B0(
          (_DWORD *)self[339],
          *(_DWORD *)v20[0],
          *(_DWORD *)(v20[0] + 12),
          *(_DWORD *)(v20[0] + 20),
          *(_DWORD *)(v20[0] + 4),
          *(_DWORD *)(v20[0] + 8),
          *(_DWORD *)(v20[0] + 16));
        v16 = self[103];
        v17 = *(int **)(v16 + 1240);
        sub_41D900((_DWORD *)self[339], *(_DWORD *)(v16 + 1172), v17[76], v17[77], v17[78], v17[79], v17[80], v17[81]);
      }
    }
  }
  sub_466AA0(self);
  return self;
}
