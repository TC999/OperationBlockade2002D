//----- (00424C80) --------------------------------------------------------
void __thiscall sub_424C80(_DWORD *this, int a2)
{
  _DWORD *v4; // ecx
  int v5; // eax
  _DWORD *v6; // edi
  int v7; // eax
  int v8; // eax
  int v9; // edx
  double v10; // st7
  int v11; // ecx
  float v12; // [esp+4h] [ebp-28h]
  float v13; // [esp+8h] [ebp-24h]
  float v14; // [esp+8h] [ebp-24h]
  float v15; // [esp+Ch] [ebp-20h]
  float v16; // [esp+Ch] [ebp-20h]
  float v17; // [esp+10h] [ebp-1Ch]
  float v18; // [esp+10h] [ebp-1Ch]
  float v19; // [esp+14h] [ebp-18h]
  float v20; // [esp+14h] [ebp-18h]
  int v21; // [esp+24h] [ebp-8h]
  float v22; // [esp+30h] [ebp+4h]

  v4 = *(_DWORD **)(a2 + 176);
  if ( !v4 )
    return;
  if ( !*(_BYTE *)(a2 + 44) )
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*v4 + 24))(v4, 0);
    return;
  }
  v5 = *(_DWORD *)(a2 + 40);
  if ( v5 <= -1 || (v6 = *(_DWORD **)(a2 + 4 * v5 + 148)) == 0 )
  {
    if ( *(_BYTE *)(a2 + 46) )
    {
      sub_4131B0(v4, 0);
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a2 + 176) + 24))(*(_DWORD *)(a2 + 176), 1);
      goto LABEL_14;
    }
    sub_4131B0(v4, 0);
    v4 = *(_DWORD **)(a2 + 176);
LABEL_13:
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*v4 + 24))(v4, 0);
    goto LABEL_14;
  }
  v7 = v6[74];
  if ( !v7 || !*(_DWORD *)(v7 + 28) || !*(_DWORD *)(v7 + 32) )
    goto LABEL_13;
  (*(void (__thiscall **)(_DWORD *, int))(*v4 + 24))(v4, 1);
  sub_4131B0(*(_DWORD **)(a2 + 176), (_DWORD *)v6[74]);
  v8 = v6[74];
  v9 = v6[75];
  v21 = v6[76];
  v10 = (double)*(int *)(v8 + 32);
  v22 = (float)*(int *)(v8 + 28);
  v17 = (double)(v21 + v6[78]) / v10;
  v15 = (double)(v9 + v6[77]) / v22;
  v13 = (double)v21 / v10;
  v12 = (double)v9 / v22;
  sub_413130(LODWORD(v12), LODWORD(v13), LODWORD(v15), LODWORD(v17));
LABEL_14:
  if ( a2 != this[14] )
  {
    v11 = *(_DWORD *)(a2 + 48);
    v19 = (float)(*(_DWORD *)(a2 + 52) + *(_DWORD *)(a2 + 60));
    v18 = (float)(v11 + *(_DWORD *)(a2 + 56));
    v16 = (float)*(int *)(a2 + 52);
    v14 = (float)v11;
    sub_413090(*(_DWORD *)(a2 + 176), v14, v16, v18, v19);
  }
  v20 = *(float *)(a2 + 64) + 1000.0;
  sub_413120(LODWORD(v20));
}
