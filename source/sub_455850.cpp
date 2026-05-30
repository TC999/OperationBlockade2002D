//----- (00455850) --------------------------------------------------------
int __cdecl sub_455850(int *self, int a2, int *a3, int a4)
{
  int *v4; // esi
  int v5; // edi
  int v6; // eax
  void *v7; // eax
  int v8; // esi
  int v9; // eax
  int v10; // edx
  int *v11; // esi
  _DWORD *v12; // eax
  _DWORD *v13; // edi
  int v14; // edx
  unsigned int v15; // ecx
  int v16; // eax
  int v17; // eax
  _DWORD *v18; // eax
  _DWORD *v19; // ebx
  _DWORD *j; // ebp
  int v21; // eax
  _DWORD *i; // eax
  __int16 v25[3]; // [esp+14h] [ebp-28h] BYREF
  int v26; // [esp+1Ah] [ebp-22h]
  int v27; // [esp+1Eh] [ebp-1Eh]
  int v28; // [esp+22h] [ebp-1Ah]
  int v29; // [esp+26h] [ebp-16h]
  int v30; // [esp+2Ah] [ebp-12h]
  int v31; // [esp+38h] [ebp-4h]
  int v32; // [esp+40h] [ebp+4h]
  _DWORD *v33; // [esp+44h] [ebp+8h]

  v4 = self;
  v5 = a4;
  if ( *(_BYTE *)(dword_4F5CC4 + 936) )
  {
    v26 = *(_DWORD *)(a2 + 8);
    v28 = *a3;
    v6 = a3[1];
    v27 = a4;
    v29 = v6;
    v30 = a3[2];
    sub_4117A0((_DWORD *)dword_4F5CC4, (_DWORD *)0x901, v25, 26, 15, 0);
  }
  v7 = operator new(0x564u);
  v31 = 0;
  if ( v7 )
  {
    v8 = v4[100];
    if ( v8 )
      v9 = sub_4560B0((int)v7, a2, a3, (self[101] - v8) >> 2, v5);
    else
      v9 = sub_4560B0((int)v7, a2, a3, 0, v5);
    v4 = self;
  }
  else
  {
    v9 = 0;
  }
  v10 = v4[102];
  v11 = v4 + 99;
  a4 = v9;
  v31 = -1;
  v12 = (_DWORD *)v11[2];
  v13 = v12;
  if ( (v10 - (int)v12) >> 2 )
  {
    sub_448B80(v12, v12, v12 + 1);
    sub_44B480((_DWORD *)v11[2], (_DWORD *)(1 - ((v11[2] - (int)v13) >> 2)), &a4);
    for ( i = (_DWORD *)v11[2]; v13 != i; ++v13 )
      *v13 = a4;
    v11[2] += 4;
  }
  else
  {
    v14 = v11[1];
    if ( !v14 || (v15 = ((int)v12 - v14) >> 2, v15 <= 1) )
      v15 = 1;
    if ( v14 )
      v16 = ((int)v12 - v14) >> 2;
    else
      v16 = 0;
    v17 = v15 + v16;
    v32 = v17;
    if ( v17 < 0 )
      v17 = 0;
    v18 = operator new(4 * v17);
    v19 = (_DWORD *)v11[1];
    v33 = v18;
    for ( j = v18; v19 != v13; ++j )
      sub_448BE0(j, v19++);
    sub_44B480(j, (_DWORD *)1, &a4);
    sub_448B80(v13, (_DWORD *)v11[2], j + 1);
    nullsub_8(v11[1], v11[2]);
    sub_4885A6((LPVOID)v11[1]);
    v11[3] = (int)&v33[v32];
    v21 = sub_4481C0(v11);
    v11[1] = (int)v33;
    v11[2] = (int)&v33[v21 + 1];
  }
  return sub_428680(self, a4);
}
