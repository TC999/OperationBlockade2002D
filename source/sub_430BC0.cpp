//----- (00430BC0) --------------------------------------------------------
int __thiscall sub_430BC0(int self, int *a2, int *a3, int a4, int *a5)
{
  float v5; // ebp
  int *v7; // ebx
  int v8; // edx
  int v9; // esi
  _DWORD *v10; // eax
  int v11; // edx
  int v12; // eax
  int v13; // edx
  int v14; // ecx
  int v16; // [esp+Ch] [ebp-64h]
  _WORD v17[4]; // [esp+10h] [ebp-60h] BYREF
  int v18; // [esp+18h] [ebp-58h]
  int v19; // [esp+1Ch] [ebp-54h]
  int v20; // [esp+20h] [ebp-50h]
  int v21; // [esp+24h] [ebp-4Ch]
  int v22; // [esp+28h] [ebp-48h]
  char v23; // [esp+2Ch] [ebp-44h]
  int v24[16]; // [esp+30h] [ebp-40h] BYREF

  v5 = *(float *)&a4;
  v16 = *(_DWORD *)(*(_DWORD *)(a4 + 4) + 300);
  if ( !*(_BYTE *)(self + 16) )
    return 0;
  v7 = a5;
  if ( !sub_407710(*(float **)(self + 432), *a2, a2[1], a2[2], *a3, a3[1], a3[2], &a4, (int)a5) )
    return 0;
  v8 = *(_DWORD *)(self + 428);
  v9 = 0;
  v10 = (_DWORD *)(v8 + 628);
  while ( !*((_BYTE *)v10 - 4) || a4 != *v10 )
  {
    ++v9;
    v10 += 6;
    if ( v9 >= 5 )
      goto LABEL_13;
  }
  if ( *(_BYTE *)(dword_4F5CC4 + 936) || *(_BYTE *)(dword_4F5CC4 + 937) )
  {
    if ( !*(_BYTE *)(LODWORD(v5) + 124) )
    {
      v17[3] = *(_WORD *)(self + 392);
      v18 = v9;
      v19 = *v7;
      v20 = v7[1];
      v11 = *(_DWORD *)(LODWORD(v5) + 4);
      v21 = v7[2];
      v23 = *(_BYTE *)(v11 + 312);
      v22 = v16;
      sub_4117D0(dword_4F5CC4, (_DWORD *)0x103, v17, 29, 2, 10000);
    }
  }
  else
  {
    sub_4229D0("%s hit on section %d", *(const char **)(v8 + 4), v9);
    v12 = *(_DWORD *)(LODWORD(v5) + 4);
    LOBYTE(v13) = *(_BYTE *)(v12 + 312);
    sub_430F00(v9, (int)v7, *(float *)(v12 + 300), v13);
  }
LABEL_13:
  v14 = *(_DWORD *)(self + 432);
  memset(&v24[11], 0, 16);
  memset(&v24[6], 0, 16);
  memset(&v24[1], 0, 16);
  v24[15] = 1065353216;
  v24[10] = 1065353216;
  v24[5] = 1065353216;
  v24[0] = 1065353216;
  sub_407690(v14, a4, v24);
  sub_46C5C5(v7, v7, v24);
  return 5;
}
