//----- (00467A50) --------------------------------------------------------
char __thiscall sub_467A50(int self, char a2)
{
  int v3; // ecx
  int v4; // edx
  int v5; // ecx
  int v7; // [esp-Ch] [ebp-1Ch]
  int v8[3]; // [esp+4h] [ebp-Ch] BYREF

  if ( !*(_BYTE *)(self + 396) )
    return 0;
  if ( !*(_BYTE *)(dword_4F5CC4 + 937) && a2 )
    sub_462520(*(_DWORD **)(dword_520970 + 280), *(_DWORD *)(*(_DWORD *)(self + 412) + 296), dword_5216E8);
  v3 = *(_DWORD *)(self + 1352);
  *(_BYTE *)(self + 396) = 0;
  if ( v3 )
  {
    sub_41D9A0(v3);
    v4 = *(_DWORD *)(self + 412);
    v7 = *(_DWORD *)(self + 416);
    *(_DWORD *)(self + 1352) = 0;
    memset(v8, 0, sizeof(v8));
    sub_44E040(*(char **)(dword_520970 + 240), *(_DWORD *)(v4 + 1244), self + 488, v7, 0, v8);
  }
  v5 = *(_DWORD *)(self + 1356);
  if ( v5 )
  {
    sub_41D9A0(v5);
    *(_DWORD *)(self + 1356) = 0;
  }
  if ( a2 )
    sub_45A420(*(float **)(dword_520970 + 236), *(_DWORD *)(self + 412), 1, 0, 1);
  return 1;
}
