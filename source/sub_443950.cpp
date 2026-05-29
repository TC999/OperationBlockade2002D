//----- (00443950) --------------------------------------------------------
int __userpurge sub_443950(_DWORD *a1, int a2, int *a3, int *a4, int a5, _DWORD *a6)
{
  int v6; // edi
  int result; // eax
  double v9; // st7
  FILE *v10; // eax
  int v11; // eax
  int v12; // ebx
  int v13; // ecx
  int v14; // eax
  bool v15; // zf
  int v16; // [esp+Ch] [ebp-68h]
  int v17; // [esp+10h] [ebp-64h]
  _WORD v18[4]; // [esp+14h] [ebp-60h] BYREF
  _DWORD *v19; // [esp+1Ch] [ebp-58h]
  int v20; // [esp+20h] [ebp-54h]
  int v21; // [esp+24h] [ebp-50h]
  int v22; // [esp+28h] [ebp-4Ch]
  int v23; // [esp+2Ch] [ebp-48h]
  char v24; // [esp+30h] [ebp-44h]
  int v25[16]; // [esp+34h] [ebp-40h] BYREF

  v6 = (int)a6;
  if ( !sub_407A90(a1[103], a2, (int)a1, *a3, a3[1], a3[2], *a4, a4[1], a4[2], (int *)&a6, a6, v16, v17) )
    return 0;
  v9 = *(float *)(*(_DWORD *)(a5 + 4) + 300);
  if ( v9 > 0.0 )
  {
    v10 = sub_4229D0("boat %d %s damaged: node %d took %0.1f", a1[364], *(const char **)(a1[102] + 4), a6, v9);
    if ( *(_BYTE *)(dword_4F5CC4 + 936) || *(_BYTE *)(dword_4F5CC4 + 937) )
    {
      if ( !*(_BYTE *)(a5 + 124) )
      {
        v18[3] = *((_WORD *)a1 + 728);
        v19 = a6;
        v20 = *(_DWORD *)v6;
        v21 = *(_DWORD *)(v6 + 4);
        v22 = *(_DWORD *)(v6 + 8);
        v11 = *(_DWORD *)(a5 + 4);
        v23 = *(_DWORD *)(v11 + 300);
        v24 = *(_BYTE *)(v11 + 312);
        sub_4117D0(dword_4F5CC4, (_DWORD *)0x203, v18, 29, 2, 2000);
      }
    }
    else
    {
      v12 = *(_DWORD *)(a5 + 4);
      LOBYTE(v10) = *(_BYTE *)(v12 + 312);
      sub_443CD0((int)a6, v6, *(float *)(v12 + 300), *(float *)&v10);
    }
  }
  v13 = a1[103];
  memset(&v25[11], 0, 16);
  memset(&v25[6], 0, 16);
  memset(&v25[1], 0, 16);
  v25[15] = 1065353216;
  v25[10] = 1065353216;
  v25[5] = 1065353216;
  v25[0] = 1065353216;
  sub_407690(v13, (int)a6, v25);
  sub_46C5C5(v6, v6, v25);
  v14 = *(_DWORD *)(a1[102] + 292);
  if ( !v14 )
    return 6;
  v15 = v14 == 2;
  result = 7;
  if ( v15 )
    return 6;
  return result;
}
