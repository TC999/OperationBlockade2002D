//----- (0046D19F) --------------------------------------------------------
int __cdecl sub_46D19F(char a1, int a2, int a3, int *a4, int a5, int a6, int *a7, int a8, int a9)
{
  int v10; // esi
  char v12; // [esp+0h] [ebp-3Ch]
  int v13[6]; // [esp+4h] [ebp-38h] BYREF
  unsigned int v14; // [esp+1Ch] [ebp-20h]
  unsigned int v15; // [esp+20h] [ebp-1Ch]
  int v16; // [esp+24h] [ebp-18h] BYREF
  int v17; // [esp+28h] [ebp-14h]
  int v18; // [esp+2Ch] [ebp-10h]
  int v19; // [esp+30h] [ebp-Ch]
  int v20[2]; // [esp+34h] [ebp-8h] BYREF

  if ( !a2 )
  {
    sub_46D8FD(0, (char *)"pDestSurface pointer is invalid", v12);
    return -2005530516;
  }
  if ( !a5 )
  {
    sub_46D8FD(0, (char *)"pSrcSurface pointer is invalid", a1);
    return -2005530516;
  }
  (*(void (__stdcall **)(int, int *))(*(_DWORD *)a5 + 32))(a5, v13);
  if ( a7 )
  {
    v16 = *a7;
    v17 = a7[1];
    v18 = a7[2];
    v19 = a7[3];
    if ( v16 < 0 || v18 > v14 || v16 > v18 || v17 < 0 || v19 > v15 || v17 > v19 )
    {
      sub_46D8FD(0, (char *)"Invalid source rect", a1);
      return -2005530516;
    }
  }
  else
  {
    v18 = v14;
    v16 = 0;
    v17 = 0;
    v19 = v15;
  }
  if ( v13[0] == 827611204
    || v13[0] == 844388420
    || v13[0] == 844715353
    || v13[0] == 861165636
    || v13[0] == 877942852
    || v13[0] == 894720068
    || v13[0] == 1498831189 )
  {
    v10 = (*(int (__stdcall **)(int, int *, _DWORD, int))(*(_DWORD *)a5 + 36))(a5, v20, 0, 2064);
    if ( v10 >= 0 )
      goto LABEL_24;
  }
  else
  {
    v10 = (*(int (__stdcall **)(int, int *, int *, int))(*(_DWORD *)a5 + 36))(a5, v20, &v16, 2064);
    if ( v10 >= 0 )
    {
      v18 -= v16;
      v19 -= v17;
      v16 = 0;
      v17 = 0;
LABEL_24:
      v10 = sub_46CF1A(a2, a3, a4, v20[1], v13[0], v20[0], a6, &v16, a8, a9);
      if ( v10 >= 0 )
        v10 = 0;
      (*(void (__stdcall **)(int))(*(_DWORD *)a5 + 40))(a5);
      return v10;
    }
  }
  sub_46D8FD(0, (char *)"Could not lock source surface", a1);
  return v10;
}
