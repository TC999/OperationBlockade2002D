//----- (0046D461) --------------------------------------------------------
int __cdecl sub_46D461(
        char a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        unsigned int a7,
        int a8,
        unsigned int a9,
        BOOL a10,
        int a11,
        int a12,
        int a13,
        int a14,
        void *a15,
        int *a16)
{
  int v16; // esi
  int v17; // eax
  int v19; // eax
  int v20; // esi
  int v21; // edi
  unsigned int v22; // eax
  unsigned int v23; // ecx
  int v24; // esi
  char v25; // di
  int v26; // eax
  int v27; // edi
  int v28; // ebx
  BOOL v29; // eax
  int *v30; // esi
  int v31; // ecx
  char v33; // [esp+0h] [ebp-444h]
  _DWORD v34[256]; // [esp+8h] [ebp-43Ch] BYREF
  int v35[7]; // [esp+408h] [ebp-3Ch] BYREF
  int v36; // [esp+424h] [ebp-20h]
  int v37; // [esp+430h] [ebp-14h]
  int v38; // [esp+438h] [ebp-Ch] BYREF
  int v39; // [esp+43Ch] [ebp-8h] BYREF
  int v40; // [esp+440h] [ebp-4h] BYREF
  int v41; // [esp+450h] [ebp+Ch]
  unsigned int v42; // [esp+454h] [ebp+10h]

  sub_470F78(v35);
  v40 = 0;
  v39 = 0;
  v38 = 0;
  if ( !a2 )
  {
    sub_46D8FD(0, "pDevice pointer is invalid", v33);
LABEL_3:
    v16 = -2005530516;
LABEL_12:
    sub_470F91(v35);
    return v16;
  }
  if ( !a3 )
  {
    sub_46D8FD(0, "pvSrcData pointer is invalid", v33);
    goto LABEL_3;
  }
  if ( !a4 )
  {
    sub_46D8FD(0, "cbSrcData value is invalid", v33);
    goto LABEL_3;
  }
  if ( !a16 )
  {
    sub_46D8FD(0, "ppTexture pointer is invalid", v33);
    goto LABEL_3;
  }
  v17 = sub_4729A4(v35, a3, a4, a14);
  if ( v17 < 0 )
  {
    v16 = v17;
    goto LABEL_12;
  }
  v19 = v37;
  v42 = 1;
  while ( v19 )
  {
    ++v42;
    v19 = *(_DWORD *)(v19 + 40);
  }
  if ( !a5 || a5 == -1 )
    a5 = v35[5];
  if ( !a6 || a6 == -1 )
    a6 = v35[6];
  v20 = v35[0];
  v21 = a13;
  if ( !a9 )
  {
    if ( !a13 )
    {
      a9 = 22;
      if ( v35[0] == 20 )
        goto LABEL_36;
      goto LABEL_35;
    }
    if ( v35[0] != 20 )
    {
      if ( v35[0] <= 21 )
      {
LABEL_35:
        a9 = v35[0];
        goto LABEL_36;
      }
      if ( v35[0] > 23 )
      {
        if ( v35[0] == 24 || v35[0] == 27 || v35[0] == 30 )
        {
          a9 = 25;
          goto LABEL_36;
        }
        if ( v35[0] == 50 )
        {
          a9 = 51;
          goto LABEL_36;
        }
        goto LABEL_35;
      }
    }
    a9 = 21;
  }
LABEL_36:
  if ( a11 == -1 )
    a11 = 2 * (sub_46CAA2(v35[0])[1] != 3) + 524290;
  if ( a12 == -1 )
    a12 = sub_46CAA2(v20)[1] != 3 ? 5 : 2;
  if ( (_BYTE)a11 == 1 || (unsigned __int8)a12 == 2 || (v41 = 0, (unsigned __int8)a12 == 5) )
    v41 = 1;
  if ( v36 )
  {
    v22 = v21 & 0xFF00FF00 | ((unsigned __int8)v21 << 16) | BYTE2(a13);
    v23 = 0;
    v24 = v36 - (_DWORD)v34;
    do
    {
      v34[v23] = v22 != *(_DWORD *)((char *)&v34[v23] + v24) ? *(_DWORD *)((char *)&v34[v23] + v24) : 0;
      ++v23;
    }
    while ( v23 < 0x100 );
    a13 = 0;
  }
  else
  {
    memset(v34, 0xFFu, sizeof(v34));
  }
  v25 = (char)a15;
  if ( a15 )
  {
    qmemcpy(a15, v34, 0x400u);
    goto LABEL_58;
  }
  if ( a9 != 40 )
  {
    if ( a9 != 41 )
      goto LABEL_58;
    a9 = 22;
    v26 = 0;
    while ( HIBYTE(v34[v26]) == 0xFF )
    {
      if ( (unsigned int)++v26 >= 0x100 )
        goto LABEL_58;
    }
  }
  a9 = 21;
LABEL_58:
  v27 = sub_46CB5B(a2, v25, (unsigned int *)&a5, (unsigned int *)&a6, 0, &a7, a8, &a9, a10, 0);
  if ( v27 >= 0 )
  {
    v27 = (*(int (__stdcall **)(int, int, int, unsigned int, int, unsigned int, BOOL, int *))(*(_DWORD *)a2 + 80))(
            a2,
            a5,
            a6,
            a7,
            a8,
            a9,
            a10,
            &v39);
    if ( v27 >= 0 )
    {
      v28 = v39;
      v29 = !a10;
      a10 = v29;
      if ( v29 )
      {
        v27 = (*(int (__stdcall **)(int, int, int, unsigned int, _DWORD, unsigned int, int, int *))(*(_DWORD *)a2 + 80))(
                a2,
                a5,
                a6,
                a7,
                0,
                a9,
                2,
                &v38);
        if ( v27 < 0 )
          goto LABEL_62;
        v28 = v38;
      }
      a9 = 0;
      v30 = v35;
      if ( v42 )
      {
        while ( a9 < a7 )
        {
          v27 = (*(int (__stdcall **)(int, unsigned int, int *))(*(_DWORD *)v28 + 60))(v28, a9, &v40);
          if ( v27 < 0 )
            goto LABEL_78;
          v27 = sub_46CF1A(v40, (int)a15, 0, v30[1], *v30, v30[2], (int)v34, v30 + 3, a11, a13);
          if ( v40 )
          {
            (*(void (__stdcall **)(int))(*(_DWORD *)v40 + 8))(v40);
            v40 = 0;
          }
          if ( v27 < 0 )
            goto LABEL_78;
          if ( ++a9 >= v42 )
            break;
          v30 = (int *)v30[10];
        }
      }
      if ( v41 )
      {
        if ( v42 < a7 )
        {
          v27 = sub_46D30C(v28, v28, (int)v34, v42 - 1, a12);
          if ( v27 < 0 )
            goto LABEL_78;
        }
      }
      else
      {
        while ( a9 < a7 )
        {
          v27 = (*(int (__stdcall **)(int, unsigned int, int *))(*(_DWORD *)v28 + 60))(v28, a9, &v40);
          if ( v27 < 0 )
            goto LABEL_78;
          v27 = sub_46CF1A(v40, (int)a15, 0, v30[1], *v30, v30[2], (int)v34, v30 + 3, a12, a13);
          if ( v40 )
          {
            (*(void (__stdcall **)(int))(*(_DWORD *)v40 + 8))(v40);
            v40 = 0;
          }
          if ( v27 < 0 )
            goto LABEL_78;
          ++a9;
        }
      }
      if ( !a10 || (v27 = (*(int (__stdcall **)(int, int, int))(*(_DWORD *)a2 + 116))(a2, v38, v39), v27 >= 0) )
      {
        v31 = v39;
        v39 = 0;
        *a16 = v31;
        v27 = 0;
      }
      goto LABEL_78;
    }
LABEL_62:
    sub_46D8FD(0, "CreateTexture failed", a1);
  }
LABEL_78:
  if ( v40 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v40 + 8))(v40);
    v40 = 0;
  }
  if ( v39 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v39 + 8))(v39);
    v39 = 0;
  }
  if ( v38 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v38 + 8))(v38);
    v38 = 0;
  }
  sub_470F91(v35);
  return v27;
}
