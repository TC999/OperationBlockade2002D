//----- (00406DF0) --------------------------------------------------------
int __thiscall sub_406DF0(_DWORD *this, float a2)
{
  int v2; // esi
  int v3; // ebx
  char v4; // al
  int v5; // eax
  int v6; // ecx
  int v7; // ecx
  int result; // eax
  _DWORD *v9; // ecx

  v2 = this[6] + 96 * LODWORD(a2);
  v3 = *(_DWORD *)(this[7] + 4) + 172 * LODWORD(a2);
  v4 = *(_BYTE *)(v2 + 84);
  if ( v4 && *(_DWORD *)(v2 + 88) )
  {
    sub_409A00(*(_DWORD *)(v2 + 88));
    *(_DWORD *)(v2 + 88) = 0;
    goto LABEL_11;
  }
  if ( !*(_BYTE *)(v3 + 81) || v4 )
  {
LABEL_11:
    result = *(_DWORD *)(v2 + 88);
    if ( !result )
      return result;
    goto LABEL_12;
  }
  if ( !*(_DWORD *)(v2 + 88) )
  {
    v5 = sub_409960(this);
    *(_DWORD *)(v2 + 88) = v5;
    v6 = *(_DWORD *)(v3 + 52);
    if ( v6 )
      v7 = *(_DWORD *)(v6 + 84);
    else
      v7 = 0;
    *(_DWORD *)(v5 + 36) = v7;
    *(_DWORD *)(*(_DWORD *)(v2 + 88) + 12) = *(_DWORD *)(v3 + 76);
    *(float *)(*(_DWORD *)(v2 + 88) + 40) = a2;
    goto LABEL_11;
  }
LABEL_12:
  sub_406F00(a2);
  if ( *(_DWORD *)(v3 + 76) == 1 )
  {
    sub_4085B0(a2, *(_DWORD *)(v2 + 88) + 16);
    *(_DWORD *)(*(_DWORD *)(v2 + 88) + 28) = 0;
  }
  else
  {
    v9 = (_DWORD *)(*(_DWORD *)(v2 + 88) + 16);
    *v9 = *(_DWORD *)v2;
    v9[1] = *(_DWORD *)(v2 + 4);
    v9[2] = *(_DWORD *)(v2 + 8);
    *(_DWORD *)(*(_DWORD *)(v2 + 88) + 28) = 1;
  }
  result = *(_DWORD *)(v2 + 12);
  *(_DWORD *)(*(_DWORD *)(v2 + 88) + 32) = result;
  return result;
}
