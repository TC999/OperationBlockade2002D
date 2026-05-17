//----- (00404510) --------------------------------------------------------
bool __thiscall sub_404510(int this)
{
  int v2; // edi
  bool v3; // bl
  int *v4; // eax
  _DWORD *v5; // ebp
  void *v6; // edi
  int v7; // ecx
  char *v8; // eax
  char *v9; // edi
  int v10; // edx
  void *v11; // ecx
  _DWORD *v12; // eax
  int v13; // edx
  int v14; // ecx
  _DWORD *v15; // eax
  int v16; // edx
  int v17; // ecx

  if ( !sub_405820((FILE **)this, (FILE **)0xDEFF2843) )
    return 0;
  v2 = *(_DWORD *)(this + 28);
  v3 = 1;
  if ( v2 > 0 )
  {
    v4 = (int *)operator new(172 * v2 + 4);
    if ( v4 )
    {
      v5 = v4 + 1;
      *v4 = v2;
      `eh vector constructor iterator'(v4 + 1, 0xACu, v2, sub_4046A0, sub_403A90);
      v6 = v5;
    }
    else
    {
      v6 = 0;
    }
    v7 = *(_DWORD *)(this + 28);
    *(_DWORD *)(this + 32) = v6;
    memset(v6, 0, 172 * v7);
    v3 = sub_4046C0((_DWORD *)this, -1, 0);
  }
  if ( *(_DWORD *)(this + 52) )
  {
    sub_4050B0((_DWORD *)this);
    v8 = *(char **)(this + 32);
    if ( v8 )
    {
      v9 = v8 - 4;
      `eh vector destructor iterator'(v8, 0xACu, *((_DWORD *)v8 - 1), sub_403A90);
      sub_4885A6(v9);
    }
  }
  else
  {
    *(_DWORD *)(this + 4) = *(_DWORD *)(this + 32);
  }
  v10 = *(_DWORD *)(this + 52);
  v11 = *(void **)(this + 44);
  *(_DWORD *)(this + 32) = 0;
  v12 = sub_488DD7(v11, 4 * v10 + 4);
  v13 = *(_DWORD *)(this + 52);
  v14 = *(_DWORD *)(this + 36);
  *(_DWORD *)(this + 44) = v12;
  v12[v13] = v14;
  v15 = sub_488DD7(*(LPVOID *)(this + 48), 4 * *(_DWORD *)(this + 52) + 4);
  v16 = *(_DWORD *)(this + 52);
  v17 = *(_DWORD *)(this + 40);
  *(_DWORD *)(this + 48) = v15;
  v15[v16] = v17;
  if ( !v3 )
    return 0;
  return sub_405820((FILE **)this, (FILE **)0xDEFF2844);
}
