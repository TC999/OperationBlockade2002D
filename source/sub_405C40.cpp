//----- (00405C40) --------------------------------------------------------
int __stdcall sub_405C40(int a1, int a2, int a3)
{
  char v3; // bl
  int v4; // eax
  int v5; // esi
  int v6; // edx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  char v12; // [esp+Fh] [ebp-45h]
  float v13[17]; // [esp+10h] [ebp-44h] BYREF

  v3 = 0;
  v12 = 0;
  v4 = *(_DWORD *)(a1 + 52);
  if ( !v4 )
  {
LABEL_28:
    sub_41BEF0(a2, 0, -1, -1);
    goto LABEL_29;
  }
  v5 = a3;
  if ( a3 && (v6 = *(_DWORD *)(a3 + 92)) != 0 && *(_BYTE *)(v6 + 78) )
  {
    qmemcpy(v13, (const void *)(v4 + 4), sizeof(v13));
    if ( *(float *)(v6 + 80) <= (double)v13[3] )
      v13[3] = *(float *)(v6 + 80);
    if ( *(float *)(v6 + 80) <= (double)v13[7] )
      v13[7] = *(float *)(v6 + 80);
    if ( *(float *)(v6 + 80) <= (double)v13[11] )
      v13[11] = *(float *)(v6 + 80);
    if ( *(float *)(v6 + 80) <= (double)v13[15] )
      v13[15] = *(float *)(v6 + 80);
    (*(void (__stdcall **)(_DWORD, float *))(**(_DWORD **)ArgList + 168))(*(_DWORD *)ArgList, v13);
    v5 = a3;
    v12 = 1;
  }
  else
  {
    (*(void (__stdcall **)(_DWORD, int))(**(_DWORD **)ArgList + 168))(*(_DWORD *)ArgList, v4 + 4);
  }
  v7 = *(_DWORD *)(a1 + 52);
  v8 = *(_DWORD *)(v7 + 84);
  if ( !v8 )
  {
    if ( *(_BYTE *)(a1 + 83) )
      v12 = 1;
    goto LABEL_28;
  }
  if ( *(_BYTE *)(a1 + 83) || *(_BYTE *)(v8 + 24) )
  {
    v5 = a3;
    v12 = 1;
  }
  if ( *(_BYTE *)(v7 + 80) )
    v3 = 1;
  if ( v5 && (v9 = *(_DWORD *)(v5 + 92)) != 0 && *(_BYTE *)(v9 + 84) )
    sub_41BEF0(a2, *(_DWORD *)(v9 + 88), v3 != 0, 0);
  else
    sub_41BEF0(a2, v8, v3 != 0, 0);
LABEL_29:
  if ( *(_BYTE *)(a1 + 56) )
    v10 = 2;
  else
    v10 = v12 != 0;
  return sub_41BC00(-1, v10, 1, 0, 1, -1, *(_BYTE *)(a1 + 82) == 0);
}
