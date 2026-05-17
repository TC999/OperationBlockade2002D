//----- (00404950) --------------------------------------------------------
bool __thiscall sub_404950(int *this, int a2)
{
  int v2; // edi
  int v3; // ebp
  int v4; // eax
  bool v5; // bl
  bool v6; // al
  int v7; // edx
  int v8; // ecx
  float *v9; // eax
  int *v10; // eax
  int v11; // eax
  int *v12; // esi
  bool v13; // bl
  _DWORD *v14; // ebp
  int v15; // eax
  int *v16; // esi
  bool v17; // al
  bool v18; // al
  bool v19; // al
  int v20; // ecx
  float *v21; // eax
  float *v22; // ebp
  int v23; // eax
  int v24; // ebx
  unsigned int v25; // esi
  int v26; // edx
  int v27; // eax
  int v28; // ecx
  int v29; // edx
  int v30; // ebx
  float v33; // [esp+60h] [ebp-34h] BYREF
  float v34; // [esp+64h] [ebp-30h] BYREF
  int v35; // [esp+68h] [ebp-2Ch] BYREF
  int v36; // [esp+6Ch] [ebp-28h] BYREF
  _DWORD *v37; // [esp+70h] [ebp-24h]
  float *v38; // [esp+74h] [ebp-20h] BYREF
  float *v39; // [esp+78h] [ebp-1Ch]
  float Buffer; // [esp+7Ch] [ebp-18h] BYREF
  float v41; // [esp+80h] [ebp-14h] BYREF
  float v42; // [esp+84h] [ebp-10h] BYREF
  int v43; // [esp+88h] [ebp-Ch] BYREF
  int v44; // [esp+8Ch] [ebp-8h] BYREF
  int v45; // [esp+90h] [ebp-4h] BYREF

  v2 = a2;
  *(_BYTE *)(a2 + 82) = 0;
  *(_BYTE *)(v2 + 83) = 0;
  if ( this[6] >= 5 && !(unsigned __int8)sub_405820(-1091707157) || !(unsigned __int8)sub_4057E0((void *)(v2 + 40)) )
    goto LABEL_47;
  if ( *(int *)(v2 + 40) > 0 )
  {
    if ( *(_BYTE *)(v2 + 80) )
      sub_4263E0(2);
    else
      sub_4263E0(1049426);
    if ( (*(int (__stdcall **)(_DWORD, int, int, _DWORD, int, int))(**(_DWORD **)ArgList + 92))(
           *(_DWORD *)ArgList,
           *(_DWORD *)(v2 + 168) * *(_DWORD *)(v2 + 40),
           *(_BYTE *)(v2 + 80) != 0 ? 512 : 8,
           *(_DWORD *)(v2 + 84),
           (*(_BYTE *)(v2 + 80) != 0) + 1,
           v2 + 36) )
    {
      goto LABEL_47;
    }
    v3 = 0;
    v37 = (_DWORD *)(v2 + 84);
    v4 = *(_DWORD *)(v2 + 36);
    Buffer = 0.0;
    v41 = 0.0;
    v42 = 0.0;
    v43 = 0;
    v44 = 0;
    v45 = 0;
    v39 = 0;
    v5 = 1;
    (*(void (__stdcall **)(int, _DWORD, _DWORD, float **, _DWORD))(*(_DWORD *)v4 + 44))(v4, 0, 0, &v38, 0);
    v39 = v38;
    if ( *(int *)(v2 + 40) > 0 )
    {
      while ( 1 )
      {
        v6 = v5
          && (unsigned __int8)sub_4057E0(&Buffer)
          && (unsigned __int8)sub_4057E0(&v41)
          && (unsigned __int8)sub_4057E0(&v42)
          && (unsigned __int8)sub_4057E0(&v43)
          && (unsigned __int8)sub_4057E0(&v44)
          && (unsigned __int8)sub_4057E0(&v45);
        v7 = this[6];
        v8 = -1;
        a2 = -1;
        if ( v7 >= 4 )
          break;
LABEL_31:
        v5 = v6 && (unsigned __int8)sub_4057E0(&v33) && (unsigned __int8)sub_4057E0(&v34);
        v9 = v39;
        *v39 = Buffer;
        v9[1] = v41;
        v9[2] = v42;
        if ( !*(_BYTE *)(v2 + 80) )
        {
          v10 = (int *)((char *)v39 + v37[1]);
          *v10 = v43;
          v10[1] = v44;
          v10[2] = v45;
          *(float *)((char *)v39 + v37[7]) = Buffer;
          *(float *)((char *)v39 + v37[7] + 4) = v41;
          *(float *)((char *)v39 + v37[7] + 8) = v42;
          *(float *)((char *)v39 + v37[5]) = v33;
          *(float *)((char *)v39 + v37[5] + 4) = v34;
          *(float *)((char *)v39 + v37[6]) = v33;
          *(float *)((char *)v39 + v37[6] + 4) = v34;
          *(_DWORD *)((char *)v39 + v37[2]) = a2;
        }
        v11 = *(_DWORD *)(v2 + 40);
        ++v3;
        v39 = (float *)((char *)v39 + v37[21]);
        if ( v3 >= v11 )
          goto LABEL_39;
      }
      if ( v6 )
      {
        if ( (unsigned __int8)sub_4057E0(&a2) )
        {
          v8 = a2;
          v6 = 1;
          goto LABEL_25;
        }
        v8 = a2;
      }
      v6 = 0;
LABEL_25:
      if ( !*(_BYTE *)(v2 + 82) && v8 != -1 )
        *(_BYTE *)(v2 + 82) = 1;
      if ( !*(_BYTE *)(v2 + 83) && (v8 & 0xFF000000) != 0xFF000000 )
        *(_BYTE *)(v2 + 83) = 1;
      goto LABEL_31;
    }
LABEL_39:
    sub_46C967(v38, *(_DWORD *)(v2 + 40), *(_DWORD *)(v2 + 84), v2 + 60, v2 + 72);
    (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v2 + 36) + 48))(*(_DWORD *)(v2 + 36));
    if ( !v5 )
      goto LABEL_47;
  }
  v12 = (int *)(v2 + 48);
  if ( !(unsigned __int8)sub_4057E0((void *)(v2 + 48)) )
    goto LABEL_47;
  v13 = 1;
  if ( *v12 <= 0 )
  {
LABEL_48:
    v16 = this;
    goto LABEL_49;
  }
  v14 = (_DWORD *)(v2 + 44);
  if ( (*(int (__stdcall **)(_DWORD, int, int, int, int, int))(**(_DWORD **)ArgList + 96))(
         *(_DWORD *)ArgList,
         6 * *v12,
         *(_BYTE *)(v2 + 80) != 0 ? 512 : 8,
         101,
         (*(_BYTE *)(v2 + 80) != 0) + 1,
         v2 + 44) )
  {
LABEL_47:
    v13 = 0;
    goto LABEL_48;
  }
  v13 = 1;
  (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, int *, _DWORD))(*(_DWORD *)*v14 + 44))(*v14, 0, 0, &a2, 0);
  v15 = *(_DWORD *)(v2 + 48);
  v16 = this;
  v34 = 0.0;
  if ( v15 > 0 )
  {
    do
    {
      v17 = v13 && (unsigned __int8)sub_4057E0(&v33);
      *(_WORD *)a2 = LOWORD(v33);
      a2 += 4;
      v18 = v17 && (unsigned __int8)sub_4057E0(&v33);
      *(_WORD *)a2 = LOWORD(v33);
      a2 -= 2;
      v19 = v18 && (unsigned __int8)sub_4057E0(&v33);
      *(_WORD *)a2 = LOWORD(v33);
      a2 += 4;
      v13 = v19 && (unsigned __int8)sub_4057E0(&v36);
      v20 = *(_DWORD *)(v2 + 48);
      ++LODWORD(v34);
    }
    while ( SLODWORD(v34) < v20 );
  }
  (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*v14 + 48))(*v14);
LABEL_49:
  if ( v16[6] >= 5 )
    v13 = v13 && (unsigned __int8)sub_405820(-1091707155);
  *(_DWORD *)(v2 + 76) = 2;
  v35 = -1;
  if ( !v13 || !(unsigned __int8)sub_4057E0(&v35) )
    return 0;
  v21 = (float *)sub_4044D0(v16, v35);
  v22 = v21;
  *(_DWORD *)(v2 + 52) = v21;
  if ( v21 && (v23 = *((_DWORD *)v21 + 21)) != 0 && *(_BYTE *)(v23 + 24) || *(_BYTE *)(v2 + 83) )
    *(_DWORD *)(v2 + 76) = 4;
  if ( !*(_BYTE *)(v2 + 80) && !*(_BYTE *)(v2 + 82) )
  {
    v24 = *(_DWORD *)(v2 + 36);
    if ( v24 )
    {
      if ( v22 )
      {
        v25 = (unsigned __int8)(__int64)(v22[3] * 255.0)
            | (((unsigned __int8)(__int64)(v22[2] * 255.0)
              | ((((unsigned int)(__int64)(v22[4] * 255.0) << 8) | (unsigned __int8)(__int64)(v22[1] * 255.0)) << 8)) << 8);
        v43 = v2 + 84;
        v45 = 0;
        (*(void (__stdcall **)(int, _DWORD, _DWORD, int *, _DWORD))(*(_DWORD *)v24 + 44))(v24, 0, 0, &v44, 0);
        v26 = *(_DWORD *)(v2 + 40);
        v27 = v44;
        v28 = 0;
        v45 = v44;
        if ( v26 > 0 )
        {
          v29 = v43;
          do
          {
            *(_DWORD *)(*(_DWORD *)(v29 + 8) + v27) = v25;
            v29 = v43;
            v27 = *(_DWORD *)(v43 + 84) + v45;
            v30 = *(_DWORD *)(v2 + 40);
            ++v28;
            v45 = v27;
          }
          while ( v28 < v30 );
        }
        (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v2 + 36) + 48))(*(_DWORD *)(v2 + 36));
      }
    }
  }
  return (unsigned __int8)sub_405820(-1091726445) != 0;
}
