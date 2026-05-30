//----- (00404F60) --------------------------------------------------------
int __cdecl sub_404F60(_DWORD *self, int a2, void *a3, float *a4)
{
  int v4; // esi
  int v5; // eax
  float *v6; // ebx
  int result; // eax
  double v8; // st7
  float v9; // [esp+Ch] [ebp-248h] BYREF
  int v10; // [esp+10h] [ebp-244h]
  _BYTE v11[64]; // [esp+14h] [ebp-240h] BYREF
  _BYTE v12[64]; // [esp+54h] [ebp-200h] BYREF
  _BYTE v13[64]; // [esp+94h] [ebp-1C0h] BYREF
  _BYTE v14[64]; // [esp+D4h] [ebp-180h] BYREF
  _BYTE v15[64]; // [esp+114h] [ebp-140h] BYREF
  _BYTE v16[64]; // [esp+154h] [ebp-100h] BYREF
  _BYTE v17[64]; // [esp+194h] [ebp-C0h] BYREF
  _BYTE v18[64]; // [esp+1D4h] [ebp-80h] BYREF
  _BYTE v19[64]; // [esp+214h] [ebp-40h] BYREF

  v4 = self[1] + 172 * a2;
  sub_406BE0(v11);
  v9 = 1.0;
  if ( *(_BYTE *)v4 )
  {
    v5 = *(_DWORD *)(v4 + 28);
    if ( v5 >= 0 )
      sub_404F60(v5, v11, &v9);
  }
  v6 = *(float **)(v4 + 16);
  sub_46C107(v18, v6 + 5);
  sub_46BE02(v16, *((_DWORD *)v6 + 2), *((_DWORD *)v6 + 3), *((_DWORD *)v6 + 4));
  v10 = *((_DWORD *)v6 + 9);
  sub_46BDA2(v14, v10, v10, v10);
  sub_46B97C(v12, v14, v18);
  qmemcpy(v13, v12, sizeof(v13));
  sub_46B97C(v15, v13, v16);
  qmemcpy(v17, v15, sizeof(v17));
  result = sub_46B97C(v19, v17, v11);
  v8 = v9;
  qmemcpy(a3, v19, 0x40u);
  *a4 = v8 * v6[9];
  return result;
}
