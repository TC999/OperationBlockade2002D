//----- (00466AA0) --------------------------------------------------------
int __thiscall sub_466AA0(int self)
{
  _DWORD *v2; // ecx
  int v3; // eax
  long double v4; // st7
  int v5; // eax
  int result; // eax
  float v7; // [esp+8h] [ebp-8Ch]
  float v8; // [esp+Ch] [ebp-88h]
  int v9[16]; // [esp+14h] [ebp-80h] BYREF
  int v10[16]; // [esp+54h] [ebp-40h] BYREF

  v2 = *(_DWORD **)(self + 416);
  *(_BYTE *)(self + 396) = 1;
  sub_407250(v2);
  sub_4074B0(*(_DWORD **)(self + 416), 0);
  sub_408860(0);
  *(_BYTE *)(*(_DWORD *)(self + 416) + 48) = 0;
  *(_DWORD *)(*(_DWORD *)(self + 416) + 36) = 0;
  *(_DWORD *)(*(_DWORD *)(self + 416) + 32) = 0;
  sub_408640(*(_DWORD *)(*(_DWORD *)(self + 412) + 1116), 1);
  sub_408640(*(_DWORD *)(*(_DWORD *)(self + 412) + 1128), 1);
  sub_408640(*(_DWORD *)(*(_DWORD *)(self + 412) + 1140), 1);
  sub_407670(*(_DWORD *)(*(_DWORD *)(self + 412) + 1128), 1);
  sub_407670(*(_DWORD *)(*(_DWORD *)(self + 412) + 1140), 1);
  sub_46BF69((int)v9, 0.0);
  sub_46BE62((int)v10, 0.0);
  sub_4073F0(*(_DWORD **)(self + 416), *(_DWORD *)(*(_DWORD *)(self + 412) + 1128), v9);
  sub_4073C0(*(_DWORD **)(self + 416), *(_DWORD *)(*(_DWORD *)(self + 412) + 1128), 1);
  sub_4073F0(*(_DWORD **)(self + 416), *(_DWORD *)(*(_DWORD *)(self + 412) + 1140), v10);
  sub_4073C0(*(_DWORD **)(self + 416), *(_DWORD *)(*(_DWORD *)(self + 412) + 1140), 1);
  v3 = *(_DWORD *)(self + 412);
  *(_BYTE *)(self + 420) = 1;
  *(_BYTE *)(self + 421) = 1;
  *(_DWORD *)(self + 424) = *(_DWORD *)(v3 + 1124);
  *(_DWORD *)(self + 428) = *(_DWORD *)(v3 + 1136);
  *(_DWORD *)(self + 432) = *(_DWORD *)(v3 + 1160);
  *(_BYTE *)(self + 436) = 1;
  *(_DWORD *)(self + 448) = 0;
  v8 = *(float *)(v3 + 1204);
  v7 = *(float *)(v3 + 1200);
  if ( v7 == v8 )
    v4 = v7;
  else
    v4 = fabs((double)rand() * 0.000030518509) * (v8 - v7) + v7;
  *(float *)(self + 456) = v4;
  v5 = *(_DWORD *)(self + 412);
  if ( *(_BYTE *)(dword_4F5CC4 + 937) )
    result = sub_415770(*(_DWORD *)(self + 452), (float *)(v5 + 1092), (float *)(v5 + 1104), self, 0);
  else
    result = sub_415770(*(_DWORD *)(self + 452), (float *)(v5 + 1092), (float *)(v5 + 1104), self, (int)sub_467E30);
  *(_DWORD *)(*(_DWORD *)(self + 452) + 4144) = 2;
  *(_BYTE *)(self + 504) = 0;
  *(_DWORD *)(self + 508) = 0;
  return result;
}
