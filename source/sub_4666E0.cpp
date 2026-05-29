//----- (004666E0) --------------------------------------------------------
bool __thiscall sub_4666E0(char *self, int a2, int a3, float a4, char a5)
{
  double v6; // st7
  double v7; // st7
  int v8; // edx
  int v9; // ecx
  int v10; // edi
  int v11; // eax
  unsigned __int8 v13; // c0
  unsigned __int8 v14; // c3
  float v15; // eax
  _DWORD *v16; // ecx
  int v17; // eax
  _DWORD *v18; // ecx
  int v19; // ecx
  int v20; // eax
  char v22; // [esp+Ah] [ebp-Eh]
  bool v23; // [esp+Bh] [ebp-Dh]
  int v24; // [esp+Ch] [ebp-Ch] BYREF
  int v25; // [esp+10h] [ebp-8h]
  int v26; // [esp+14h] [ebp-4h]
  char v27; // [esp+28h] [ebp+10h]

  v23 = self[396] == 0;
  if ( !a5 )
    a4 = 0.0;
  v27 = 0;
  v22 = 0;
  if ( a2 )
  {
    if ( a2 != 1 && a2 != 2 )
      return !self[396] && !v23;
    if ( *((float *)self + 107) <= 0.0 )
      return !self[396] && !v23;
    v7 = *((float *)self + 107) - a4;
    *((float *)self + 107) = v7;
    if ( v7 > 0.0 )
      return !self[396] && !v23;
    v22 = 1;
  }
  else
  {
    if ( *((float *)self + 106) <= 0.0 )
      return !self[396] && !v23;
    v6 = *((float *)self + 106) - a4;
    *((float *)self + 106) = v6;
    if ( v6 > 0.0 )
      return !self[396] && !v23;
    v27 = 1;
  }
  if ( self[436] )
  {
    v8 = 0;
    v9 = *(_DWORD *)(dword_520970 + 212);
    v10 = *(_DWORD *)(v9 + 24);
    while ( 1 )
    {
      v11 = v10 ? (*(_DWORD *)(v9 + 28) - v10) >> 2 : 0;
      if ( v8 >= v11 )
        break;
      if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v9 + 24) + 4 * v8) + 408) + 292) == 3 && v13 | v14 )
        goto LABEL_22;
      ++v8;
    }
    if ( v27 )
    {
      sub_467A50(1);
      self[420] = 0;
      if ( !*(_BYTE *)(dword_4F5CC4 + 937) )
      {
        sub_4164A0(*((_DWORD **)self + 113), 6);
        v16 = (_DWORD *)*((_DWORD *)self + 113);
        *((_DWORD *)self + 112) = 2;
        sub_416F80(v16, 1);
      }
      v17 = *((_DWORD *)self + 103);
      self[421] = 0;
      if ( *(_DWORD *)(v17 + 1228) )
      {
        v24 = 0;
        v25 = 0;
        v26 = 0;
        sub_44E040(
          *(char **)(dword_520970 + 240),
          *(_DWORD *)(v17 + 1228),
          (int)(self + 488),
          *((_DWORD *)self + 104),
          *(_DWORD *)(v17 + 1116),
          &v24);
      }
    }
    else
    {
      if ( !v22 )
        return !self[396] && !v23;
      sub_467A50(1);
      self[420] = 0;
      if ( !*(_BYTE *)(dword_4F5CC4 + 937) )
      {
        sub_4164A0(*((_DWORD **)self + 113), 6);
        v18 = (_DWORD *)*((_DWORD *)self + 113);
        *((_DWORD *)self + 112) = 2;
        sub_416F80(v18, 1);
      }
      v19 = *((_DWORD *)self + 103);
      self[421] = 0;
      sub_408640(*(_DWORD *)(v19 + 1128), 0);
      sub_408640(*(_DWORD *)(*((_DWORD *)self + 103) + 1140), 0);
      sub_407670(*(_DWORD *)(*((_DWORD *)self + 103) + 1132), 0);
      sub_407670(*(_DWORD *)(*((_DWORD *)self + 103) + 1144), 0);
      v20 = *((_DWORD *)self + 103);
      if ( *(_DWORD *)(v20 + 1224) )
      {
        v24 = 0;
        v25 = 0;
        v26 = 0;
        sub_44E040(
          *(char **)(dword_520970 + 240),
          *(_DWORD *)(v20 + 1224),
          (int)(self + 488),
          *((_DWORD *)self + 104),
          *(_DWORD *)(v20 + 1128),
          &v24);
      }
    }
    sub_4089D0(
      *((_DWORD **)self + 104),
      *(_DWORD *)(*((_DWORD *)self + 103) + 1084),
      *(_DWORD *)(*((_DWORD *)self + 103) + 1088));
    return !self[396] && !v23;
  }
  self[436] = 1;
LABEL_22:
  sub_467A50(1);
  (*(void (__thiscall **)(char *, _DWORD))(*(_DWORD *)self + 24))(self, 0);
  v15 = *(float *)(*((_DWORD *)self + 103) + 1232);
  if ( v15 != 0.0 )
    sub_44DF20(*(char **)(dword_520970 + 240), v15, COERCE_FLOAT(self + 460), (float *)self + 122);
  return !self[396] && !v23;
}
