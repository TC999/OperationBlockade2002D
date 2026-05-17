//----- (00414E60) --------------------------------------------------------
char __thiscall sub_414E60(_DWORD *this)
{
  int v2; // ebx
  int v3; // eax
  _DWORD *v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int *v8; // edx
  int v9; // eax
  _DWORD *v10; // ecx
  _DWORD *v11; // eax
  int v12; // ecx
  int v13; // edx
  int *v14; // ecx
  _DWORD *v15; // ecx
  int v16; // edx
  _DWORD *v17; // ecx
  int v18; // eax
  int v19; // ebp
  int v20; // eax
  int v21; // edi
  unsigned int v22; // eax
  int v23; // eax
  int v25; // [esp+14h] [ebp-4Ch] BYREF
  int v26; // [esp+18h] [ebp-48h]
  int v27; // [esp+1Ch] [ebp-44h]
  char v28[12]; // [esp+24h] [ebp-3Ch] BYREF
  char v29[48]; // [esp+30h] [ebp-30h] BYREF

  sub_4013C0((int)v29, 12, 3, (int (__thiscall *)(int))Iostream_init::Iostream_init);
  if ( (unsigned int)sub_419CC0(this + 13) >= 2 )
  {
    if ( (unsigned int)sub_419CC0(this + 13) > 2 )
      sub_41A300(this[14] + 120, this[15]);
  }
  else
  {
    v2 = this[15];
    v3 = sub_419CC0(this + 13);
    sub_41A000(v2, 2 - v3, v28);
  }
  v4 = (_DWORD *)this[14];
  v25 = 1065353216;
  v26 = 0;
  *v4 = -973499978;
  v5 = this[14];
  v26 = 1065353216;
  v27 = 0;
  *(_DWORD *)(v5 + 4) = -1008107422;
  v6 = this[14];
  v7 = v25;
  v27 = 0;
  *(_DWORD *)(v6 + 8) = 0;
  v8 = (int *)(this[14] + 12);
  v27 = 1065353216;
  *v8 = v7;
  v25 = 1065353216;
  v8[1] = 0;
  v8[2] = 0;
  v9 = v26;
  v10 = (_DWORD *)(this[14] + 24);
  *v10 = 0;
  v26 = 1065353216;
  v10[1] = v9;
  v10[2] = 0;
  v11 = (_DWORD *)(this[14] + 36);
  *v11 = 0;
  v12 = v27;
  v11[1] = 0;
  v27 = 1065353216;
  v11[2] = v12;
  *(_DWORD *)(this[14] + 48) = 1149749993;
  *(_DWORD *)(this[14] + 52) = 1157700555;
  *(_DWORD *)(this[14] + 56) = 1120403456;
  *(_DWORD *)(this[14] + 60) = 1182898167;
  *(_DWORD *)(this[14] + 64) = 1164012827;
  *(_DWORD *)(this[14] + 68) = 0;
  v13 = v25;
  v14 = (int *)(this[14] + 72);
  v25 = 0;
  *v14 = v13;
  v14[1] = 0;
  v14[2] = 0;
  v15 = (_DWORD *)(this[14] + 84);
  *v15 = 0;
  v16 = v26;
  v26 = 0;
  v15[1] = v16;
  v15[2] = 0;
  v17 = (_DWORD *)(this[14] + 96);
  *v17 = 0;
  v17[1] = 0;
  v17[2] = v27;
  *(_DWORD *)(this[14] + 108) = 1149427220;
  *(_DWORD *)(this[14] + 112) = 1156436001;
  *(_DWORD *)(this[14] + 116) = 1120403456;
  v18 = this[10];
  if ( v18 && (unsigned int)((this[11] - v18) >> 4) >= 6 )
  {
    if ( (unsigned int)sub_448730(this + 9) > 6 )
      sub_448750(this[10] + 96, this[11]);
  }
  else
  {
    v19 = this[11];
    v20 = sub_448730(this + 9);
    sub_419CF0(v19, 6 - v20, &v25);
  }
  *(_DWORD *)this[10] = -975202673;
  *(_DWORD *)(this[10] + 4) = -1036427723;
  *(_DWORD *)(this[10] + 8) = 0;
  *(_DWORD *)(this[10] + 12) = 1124929044;
  *(_DWORD *)(this[10] + 16) = -975716123;
  *(_DWORD *)(this[10] + 20) = 1127554679;
  *(_DWORD *)(this[10] + 24) = 0;
  *(_DWORD *)(this[10] + 28) = 1127947108;
  *(_DWORD *)(this[10] + 32) = 1175146158;
  *(_DWORD *)(this[10] + 36) = 1164496953;
  *(_DWORD *)(this[10] + 40) = 0;
  *(_DWORD *)(this[10] + 44) = 1149258899;
  *(_DWORD *)(this[10] + 48) = 1176633612;
  *(_DWORD *)(this[10] + 52) = 1170444159;
  *(_DWORD *)(this[10] + 56) = 0;
  *(_DWORD *)(this[10] + 60) = 1147626717;
  *(_DWORD *)(this[10] + 64) = 1175365576;
  *(_DWORD *)(this[10] + 68) = 1170928318;
  *(_DWORD *)(this[10] + 72) = 0;
  *(_DWORD *)(this[10] + 76) = 1130894328;
  *(_DWORD *)(this[10] + 80) = 1177209992;
  *(_DWORD *)(this[10] + 84) = 1173049395;
  *(_DWORD *)(this[10] + 88) = 0;
  *(_DWORD *)(this[10] + 92) = 1134108180;
  v21 = this[18];
  if ( !v21 )
  {
    v23 = 0;
    goto LABEL_14;
  }
  v22 = (this[19] - v21) >> 4;
  if ( !v22 )
  {
    v23 = (this[19] - v21) >> 4;
LABEL_14:
    sub_419CF0(this[19], 1 - v23, &v25);
    goto LABEL_17;
  }
  if ( v22 > 1 )
    this[19] = v21 + 16;
LABEL_17:
  *(_DWORD *)this[18] = 1175910556;
  *(_DWORD *)(this[18] + 4) = 1167101719;
  *(_DWORD *)(this[18] + 8) = 1135941222;
  *(_DWORD *)(this[18] + 12) = 1161404805;
  return 1;
}
