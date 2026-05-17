//----- (00421810) --------------------------------------------------------
int __thiscall sub_421810(int this, const char *a2, int a3, int a4)
{
  char *v5; // ebx
  int v6; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // esi
  int v13; // ecx
  int v14; // edx
  int v15; // esi
  double v16; // st7
  double v17; // st7
  double v18; // st7
  double v19; // st6
  double v20; // st6
  __int64 v21; // rax

  v5 = (char *)operator new(0x114u);
  *((_DWORD *)v5 + 66) = a3;
  strcpy(v5, a2);
  v6 = sub_422400(v5, 1);
  *((_DWORD *)v5 + 65) = v6;
  if ( !v6 )
    return -1;
  *((_DWORD *)v5 + 67) = a4;
  v8 = *(_DWORD *)(this + 28);
  v9 = *(_DWORD *)(this + 24) + 1;
  *(_DWORD *)(this + 24) = v9;
  if ( v9 > v8 )
  {
    v10 = v8 + 8;
    *(_DWORD *)(this + 28) = v10;
    v11 = sub_488DD7(*(LPVOID *)(this + 20), 4 * v10);
    if ( v11 )
    {
      v12 = *(_DWORD *)(this + 24);
      v13 = *(_DWORD *)(this + 28) - v12;
      *(_DWORD *)(this + 20) = v11;
      memset((void *)(v11 + 4 * v12), 0, 4 * v13);
    }
  }
  *(_DWORD *)(*(_DWORD *)(this + 20) + 4 * *(_DWORD *)(this + 24) - 4) = v5;
  v14 = *((_DWORD *)v5 + 65);
  *((_DWORD *)v5 + 68) = 0;
  v15 = *((_DWORD *)v5 + 66);
  v16 = (double)*(int *)(v14 + 28);
  if ( v16 == 0.0 )
    v17 = 1.0;
  else
    v17 = 1.0 / v16;
  if ( *(_BYTE *)v15 )
  {
    v18 = v17 + v17;
    do
    {
      v19 = v18 + *(float *)(v15 + 12);
      *(float *)(v15 + 12) = v19;
      *(float *)(v15 + 20) = (v19 - *(float *)(v15 + 4)) * (double)*(int *)(*((_DWORD *)v5 + 65) + 28);
      v20 = (*(float *)(v15 + 16) - *(float *)(v15 + 8)) * (double)*(int *)(*((_DWORD *)v5 + 65) + 32);
      *(float *)(v15 + 24) = v20;
      if ( *((_DWORD *)v5 + 68) <= (int)(__int64)v20 )
        v21 = (__int64)*(float *)(v15 + 24);
      else
        LODWORD(v21) = *((_DWORD *)v5 + 68);
      v15 += 28;
      *((_DWORD *)v5 + 68) = v21;
    }
    while ( *(_BYTE *)v15 );
  }
  return *(_DWORD *)(this + 24) - 1;
}
