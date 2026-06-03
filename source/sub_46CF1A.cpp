//----- (0046CF1A) --------------------------------------------------------
int __stdcall sub_46CF1A(int a1, int a2, int *a3, int a4, int a5, int a6, int a7, int *a8, int a9, int a10)
{
  int v10; // edi
  int v11; // esi
  int v13; // edi
  int v14; // ecx
  int v15; // ecx
  int v16; // ebx
  char *v17; // [esp-4h] [ebp-ECh]
  char v18; // [esp+0h] [ebp-E8h]
  _DWORD v19[19]; // [esp+Ch] [ebp-DCh] BYREF
  _DWORD v20[19]; // [esp+58h] [ebp-90h] BYREF
  int v21[6]; // [esp+A4h] [ebp-44h] BYREF
  unsigned int v22; // [esp+BCh] [ebp-2Ch]
  unsigned int v23; // [esp+C0h] [ebp-28h]
  _BYTE v24[12]; // [esp+C4h] [ebp-24h] BYREF
  _DWORD v25[2]; // [esp+D0h] [ebp-18h] BYREF
  int v26; // [esp+D8h] [ebp-10h] BYREF
  int v27; // [esp+DCh] [ebp-Ch]
  int v28; // [esp+E0h] [ebp-8h]
  int v29; // [esp+E4h] [ebp-4h]
  int v30; // [esp+F0h] [ebp+8h]

  sub_46DA95((uint32 *)(void*)v24);
  v10 = a1;
  if ( !a1 )
  {
    v17 = (char *)"pDestSurface pointer is invalid";
LABEL_3:
    sub_46D8FD(0, v17, v18);
LABEL_18:
    v11 = -2005530516;
LABEL_33:
    sub_46DA9F((uint32 *)(void*)v24);
    return v11;
  }
  if ( !a4 )
  {
    v17 = (char *)"pSrcMemory pointer is invalid";
    goto LABEL_3;
  }
  if ( !a8 )
  {
    v17 = (char *)"pSrcRect pointer is invalid";
    goto LABEL_3;
  }
  if ( a9 == -1 )
    a9 = 2 * (sub_46CAA2(a5)[1] != 3) + 524290;
  (*(void (__stdcall **)(int, int *))(*(_DWORD *)a1 + 32))(a1, v21);
  if ( a3 )
  {
    v26 = *a3;
    v27 = a3[1];
    v28 = a3[2];
    v29 = a3[3];
    if ( v26 < 0 || v28 > v22 || v26 > v28 || v27 < 0 || v29 > v23 || v27 > v29 )
    {
      sub_46D8FD(0, (char *)"Invalid destination rect", v18);
      goto LABEL_18;
    }
    v10 = a1;
  }
  else
  {
    v28 = v22;
    v26 = 0;
    v27 = 0;
    v29 = v23;
  }
  if ( v21[0] == 827611204
    || v21[0] == 844388420
    || v21[0] == 844715353
    || v21[0] == 861165636
    || v21[0] == 877942852
    || v21[0] == 894720068
    || v21[0] == 1498831189 )
  {
    v13 = (*(int (__stdcall **)(int, _DWORD *, _DWORD, int))(*(_DWORD *)v10 + 36))(v10, v25, 0, 2048);
    if ( v13 < 0 )
    {
      sub_46D8FD(0, (char *)"Could not lock destination surface", v18);
      v11 = v13;
      goto LABEL_33;
    }
    v10 = a1;
  }
  else
  {
    v30 = (*(int (__stdcall **)(int, _DWORD *, int *, int))(*(_DWORD *)v10 + 36))(v10, v25, &v26, 2048);
    if ( v30 < 0 )
    {
      sub_46D8FD(0, (char *)"Could not lock destination surface", v18);
    sub_46DA9F((uint32 *)(void*)v24);
      return v30;
    }
    v28 -= v26;
    v29 -= v27;
    v26 = 0;
    v27 = 0;
  }
  v20[10] = v26;
  v20[11] = v27;
  v20[12] = v28;
  v20[13] = v29;
  v20[0] = v25[1];
  v19[0] = a4;
  v20[2] = v25[0];
  v19[2] = a6;
  v20[1] = v21[0];
  v19[1] = a5;
  v20[18] = a2;
  v19[17] = a10;
  v20[6] = v22;
  v19[18] = a7;
  v14 = *a8;
  v20[7] = v23;
  v19[10] = v14;
  v19[11] = a8[1];
  v15 = a8[2];
  v20[9] = 1;
  v20[15] = 1;
  v19[15] = 1;
  v19[12] = v15;
  v19[13] = a8[3];
  memset(&v20[3], 0, 12);
  v20[17] = 0;
  v20[8] = 0;
  v20[14] = 0;
  v19[3] = 0;
  v19[14] = 0;
  v16 = sub_470E39((int **)(void*)v24, (int)v20, (int)v19, (int *)a9);
  if ( v16 >= 0 )
    v16 = 0;
  (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 40))(v10);
  sub_46DA9F((uint32 *)(void*)v24);
  return v16;
}
