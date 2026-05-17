//----- (00406F00) --------------------------------------------------------
char __thiscall sub_406F00(float *this, int a2)
{
  int v4; // ecx
  _DWORD *v5; // esi
  int v6; // eax
  int v7; // ebp
  _DWORD *v8; // edi
  char v9; // cl
  _BYTE *v10; // ebp
  _BYTE *v12; // [esp+10h] [ebp-4h]
  int v13; // [esp+18h] [ebp+4h]
  float v14; // [esp+18h] [ebp+4h]

  v4 = *(_DWORD *)(*((_DWORD *)this + 7) + 4);
  v12 = (_BYTE *)(v4 + 172 * a2);
  v5 = (_DWORD *)(*((_DWORD *)this + 6) + 96 * a2);
  v6 = a2;
  v7 = v5[23];
  if ( a2 <= -1 )
    return v6;
  while ( 1 )
  {
    v13 = v4 + 172 * v6;
    if ( !*(_BYTE *)(96 * v6 + *((_DWORD *)this + 6) + 85) )
      break;
    if ( v7 && *(_BYTE *)v7 )
      LOBYTE(v6) = *(_BYTE *)(v7 + 1);
    else
      LOBYTE(v6) = *(_BYTE *)v13;
    if ( (_BYTE)v6 )
    {
      v6 = *(_DWORD *)(v13 + 28);
      if ( v6 > -1 )
        continue;
    }
    return v6;
  }
  if ( !v7 )
    goto LABEL_15;
  if ( *(_BYTE *)(v7 + 68) )
  {
    v8 = v5 + 4;
    v5[18] = 0;
    v5[17] = 0;
    v5[16] = 0;
    v5[15] = 0;
    v5[13] = 0;
    v5[12] = 0;
    v5[11] = 0;
    v5[10] = 0;
    v5[8] = 0;
    v5[7] = 0;
    v5[6] = 0;
    v5[5] = 0;
    v5[19] = 1065353216;
    v5[14] = 1065353216;
    v5[9] = 1065353216;
    v5[4] = 1065353216;
    goto LABEL_19;
  }
  if ( *(_BYTE *)(v7 + 70) )
    v14 = *(float *)(v7 + 72);
  else
LABEL_15:
    v14 = this[8];
  v8 = v5 + 4;
  sub_4063E0(*((_DWORD **)this + 7), a2, v5 + 4, (float *)v5 + 20, v14, *((_DWORD *)this + 11));
  if ( !v7 )
    goto LABEL_23;
  if ( *(_BYTE *)(v7 + 69) )
  {
    *v8 = 1065353216;
    v5[5] = 0;
    v5[6] = 0;
    v5[8] = 0;
    v5[9] = 1065353216;
    v5[10] = 0;
    v5[12] = 0;
    v5[13] = 0;
    v5[14] = 1065353216;
  }
LABEL_19:
  if ( *(_BYTE *)(v7 + 2) )
    sub_46B97C(v8, v7 + 4, v8);
  if ( *(_BYTE *)v7 )
  {
    v9 = *(_BYTE *)(v7 + 1);
    v10 = v12;
    goto LABEL_24;
  }
LABEL_23:
  v10 = v12;
  v9 = *v12;
LABEL_24:
  if ( v9 && *((int *)v10 + 7) >= 0 )
  {
    sub_406F00(*((float *)v10 + 7));
    sub_46B97C(v8, v8, 96 * *((_DWORD *)v10 + 7) + *((_DWORD *)this + 6) + 16);
    *((float *)v5 + 20) = *(float *)(96 * *((_DWORD *)v10 + 7) + *((_DWORD *)this + 6) + 80) * *((float *)v5 + 20);
  }
  if ( _strcmpi(*((const char **)v10 + 2), aSky08) && _strcmpi(*((const char **)v10 + 2), aCloud08) )
    _strcmpi(*((const char **)v10 + 2), aMesh05);
  sub_46C5C5(v5, v10 + 60, v8);
  *((float *)v5 + 3) = *((float *)v5 + 20) * *((float *)v10 + 18);
  LOBYTE(v6) = dword_520A78;
  *(float *)dword_520A78 = *(float *)dword_520A78 + 1.0;
  *((_BYTE *)v5 + 85) = 1;
  return v6;
}
