//----- (00405E20) --------------------------------------------------------
int __stdcall sub_405E20(int a1, int a2, int a3, int a4)
{
  int v4; // eax
  double v5; // st7
  double v6; // st7
  float v8; // [esp+8h] [ebp-A4h]
  float v9; // [esp+Ch] [ebp-A0h]
  float v10; // [esp+10h] [ebp-9Ch]
  float v11; // [esp+20h] [ebp-8Ch]
  float v12; // [esp+24h] [ebp-88h]
  _BYTE v13[64]; // [esp+28h] [ebp-84h] BYREF
  _DWORD v14[17]; // [esp+68h] [ebp-44h] BYREF

  v4 = *(_DWORD *)(a1 + 52);
  if ( v4 )
  {
    qmemcpy(v14, (const void *)(v4 + 4), sizeof(v14));
    v14[3] = *(_DWORD *)(a2 + 28);
    v14[7] = v14[3];
    (*(void (__stdcall **)(_DWORD, _DWORD *))(**(_DWORD **)ArgList + 168))(*(_DWORD *)ArgList, v14);
  }
  qmemcpy(v13, (const void *)(a3 + 16), sizeof(v13));
  v9 = -*(float *)(a2 + 8);
  v8 = -*(float *)(a2 + 4);
  sub_40E880(v13, LODWORD(v8), LODWORD(v9), 0);
  v10 = -*(float *)(a2 + 20);
  sub_40E850(v13, v10);
  sub_40E880(v13, *(_DWORD *)(a2 + 16), *(_DWORD *)(a2 + 16), 0);
  v5 = *(float *)(a2 + 16);
  if ( v5 == 0.0 )
    v12 = 1.0;
  else
    v12 = 1.0 / v5;
  v6 = *(float *)(a2 + 16);
  if ( v6 == 0.0 )
  {
    sub_40E8B0(v13, 1065353216, LODWORD(v12), 0);
  }
  else
  {
    v11 = 1.0 / v6;
    sub_40E8B0(v13, LODWORD(v11), LODWORD(v12), 0);
  }
  sub_40E880(v13, -1090519040, -1082130432, 1065353216);
  sub_40E8B0(v13, 1065353216, -1082130432, 1065353216);
  sub_40E880(v13, 0, 1056964608, 0);
  sub_41BEF0((_DWORD *)dword_520A50, a4, *(_DWORD *)a2, 1, 1);
  sub_41BC00((_DWORD *)dword_520A50, 1, (*(_BYTE *)(a2 + 24) != 0) + 1, 0, 0, 1, -1, 1);
  (*(void (__stdcall **)(_DWORD, int, int, int))(**(_DWORD **)ArgList + 252))(*(_DWORD *)ArgList, a4, 11, 2);
  (*(void (__stdcall **)(_DWORD, int, int, int))(**(_DWORD **)ArgList + 252))(*(_DWORD *)ArgList, a4, 24, 2);
  return (*(int (__stdcall **)(_DWORD, int, _BYTE *))(**(_DWORD **)ArgList + 148))(*(_DWORD *)ArgList, a4 + 16, v13);
}
