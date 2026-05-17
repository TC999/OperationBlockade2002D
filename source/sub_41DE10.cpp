//----- (0041DE10) --------------------------------------------------------
char *__thiscall sub_41DE10(_DWORD *this, char *String2, int a3, char a4, char a5, char a6, char a7)
{
  int v8; // esi
  char *v9; // ebp
  int v10; // edi
  _BYTE *v11; // eax
  int v12; // edi
  char *v13; // esi
  _DWORD *v14; // eax
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  void *v19; // ecx
  int v20; // eax
  int v21; // eax
  int v22; // edi
  int v23; // ecx
  int v24; // eax
  int v25; // ecx
  void *v26; // edx
  int v27; // eax
  int v28; // eax
  int v29; // esi
  int v30; // ecx
  int v31; // edx
  int v32; // edi
  _DWORD *v33; // eax
  char *v34; // ebx
  int v35; // eax
  int v36; // ecx
  void *v37; // ecx
  int v38; // eax
  int v39; // eax
  int v40; // esi
  int v41; // ecx
  char v42; // [esp+13h] [ebp-11h]
  int v43; // [esp+14h] [ebp-10h]
  char v44; // [esp+2Ch] [ebp+8h]
  int v45; // [esp+34h] [ebp+10h]
  char *v46; // [esp+3Ch] [ebp+18h]

  v8 = 0;
  v9 = 0;
  v43 = this[6];
  if ( v43 > 0 )
  {
    while ( 1 )
    {
      v10 = *(_DWORD *)(this[5] + 4 * v8);
      if ( !_strcmpi((const char *)(v10 + 4), String2) )
        break;
      if ( ++v8 >= v43 )
        goto LABEL_6;
    }
    v9 = (char *)v10;
    ++*(_DWORD *)(v10 + 272);
  }
LABEL_6:
  v42 = 0;
  if ( !v9 )
  {
    v11 = operator new(0x128u);
    if ( v11 )
    {
      v11[264] = 0;
      v11[265] = 1;
      v11[266] = 0;
      v11[267] = 0;
      *((_DWORD *)v11 + 67) = 0;
      *((_DWORD *)v11 + 68) = 1;
      *((_DWORD *)v11 + 69) = 0;
      *((_DWORD *)v11 + 70) = 0;
      *((_DWORD *)v11 + 71) = 0;
      *((_DWORD *)v11 + 72) = 0;
      v11[292] = 1;
      v11[4] = 0;
      v9 = v11;
    }
    else
    {
      v9 = 0;
    }
    *(_DWORD *)v9 = -221101263;
    strcpy(v9 + 4, String2);
    v42 = 1;
    *((_DWORD *)v9 + 67) = 0;
    v9[267] = a7;
    v9[264] = a4;
    v9[265] = a5;
    v9[266] = a6;
  }
  v12 = a3;
  v13 = 0;
  if ( !a3 )
    return v9;
  if ( *((_DWORD *)v9 + 67) )
  {
    v46 = (char *)**((_DWORD **)v9 + 70);
LABEL_26:
    if ( v42 )
    {
      v24 = this[7];
      v25 = this[6] + 1;
      this[6] = v25;
      if ( v25 > v24 )
      {
        v26 = (void *)this[5];
        v27 = v24 + 8;
        this[7] = v27;
        v28 = sub_488DD7(v26, 4 * v27);
        if ( v28 )
        {
          v29 = this[6];
          v30 = this[7] - v29;
          this[5] = v28;
          memset((void *)(v28 + 4 * v29), 0, 4 * v30);
          v12 = a3;
        }
      }
      *(_DWORD *)(this[5] + 4 * this[6] - 4) = v9;
    }
    v31 = v12;
    v32 = v12 - 1;
    if ( v31 )
    {
      v44 = a5 == 0;
      v45 = v32 + 1;
      do
      {
        v33 = operator new(0x15Cu);
        if ( v33 )
          v34 = (char *)sub_41C6A0(v33);
        else
          v34 = 0;
        sub_41C7E0(v46, v44);
        sub_41C7A0((int)v46, a6);
        if ( v9[267] || v9[266] || !v9[265] )
        {
          sub_41C760((int)v34, String2);
          sub_41CA40((int)v34);
        }
        else
        {
          sub_41C9A0(v34, v46);
        }
        v35 = *((_DWORD *)v9 + 72);
        v36 = *((_DWORD *)v9 + 71) + 1;
        *((_DWORD *)v9 + 71) = v36;
        if ( v36 > v35 )
        {
          v37 = (void *)*((_DWORD *)v9 + 70);
          v38 = v35 + 8;
          *((_DWORD *)v9 + 72) = v38;
          v39 = sub_488DD7(v37, 4 * v38);
          if ( v39 )
          {
            v40 = *((_DWORD *)v9 + 71);
            v41 = *((_DWORD *)v9 + 72) - v40;
            *((_DWORD *)v9 + 70) = v39;
            memset((void *)(v39 + 4 * v40), 0, 4 * v41);
          }
        }
        *(_DWORD *)(*((_DWORD *)v9 + 70) + 4 * *((_DWORD *)v9 + 71) - 4) = v34;
        *v34 = a4;
        ++*((_DWORD *)v9 + 67);
        --v45;
      }
      while ( v45 );
    }
    return v9;
  }
  v14 = operator new(0x15Cu);
  if ( v14 )
    v13 = (char *)sub_41C6A0(v14);
  v46 = v13;
  sub_41C7A0((int)v13, a6);
  sub_41C760((int)v13, String2);
  *v13 = a4;
  sub_41C7E0(v13, a5 == 0);
  if ( sub_41CA40((int)v13) )
  {
    v16 = *((_DWORD *)v9 + 71) + 1;
    *((_DWORD *)v9 + 71) = v16;
    v17 = v16;
    v18 = *((_DWORD *)v9 + 72);
    if ( v17 > v18 )
    {
      v19 = (void *)*((_DWORD *)v9 + 70);
      v20 = v18 + 8;
      *((_DWORD *)v9 + 72) = v20;
      v21 = sub_488DD7(v19, 4 * v20);
      if ( v21 )
      {
        v22 = *((_DWORD *)v9 + 71);
        v23 = *((_DWORD *)v9 + 72) - v22;
        *((_DWORD *)v9 + 70) = v21;
        memset((void *)(v21 + 4 * v22), 0, 4 * v23);
        v12 = a3;
      }
    }
    *(_DWORD *)(*((_DWORD *)v9 + 70) + 4 * *((_DWORD *)v9 + 71) - 4) = v13;
    --v12;
    ++*((_DWORD *)v9 + 67);
    a3 = v12;
    goto LABEL_26;
  }
  if ( v13 )
  {
    sub_41C700((LPVOID *)v13);
    sub_4885A6(v13);
  }
  if ( v9 )
    sub_41D700(v9);
  return 0;
}
