//----- (00466410) --------------------------------------------------------
int __thiscall sub_466410(int this, int *a2, int *a3, int a4, int a5)
{
  float v6; // edi
  int v7; // eax
  _DWORD *v8; // ecx
  __int16 v9; // bx
  int v10; // eax
  int v11; // ecx
  _WORD v13[4]; // [esp+8h] [ebp-60h] BYREF
  int v14; // [esp+10h] [ebp-58h]
  int v15; // [esp+14h] [ebp-54h]
  int v16; // [esp+18h] [ebp-50h]
  int v17; // [esp+1Ch] [ebp-4Ch]
  int v18; // [esp+20h] [ebp-48h]
  char v19; // [esp+24h] [ebp-44h]
  int v20[16]; // [esp+28h] [ebp-40h] BYREF

  if ( !*(_BYTE *)(this + 16) )
    return 0;
  v6 = *(float *)&a5;
  if ( !sub_407710(*(float **)(this + 416), *a2, a2[1], a2[2], *a3, a3[1], a3[2], &a5, a5) )
    return 0;
  v7 = 0;
  v8 = (_DWORD *)(*(_DWORD *)(this + 412) + 1120);
  do
  {
    if ( a5 == *v8 )
      break;
    ++v7;
    v8 += 3;
  }
  while ( v7 < 3 );
  if ( *(_BYTE *)(dword_4F5CC4 + 936) || *(_BYTE *)(dword_4F5CC4 + 937) )
  {
    if ( !*(_BYTE *)(a4 + 124) )
    {
      v9 = *(_WORD *)(this + 392);
      v14 = v7;
      v13[3] = v9;
      v15 = *(_DWORD *)LODWORD(v6);
      v16 = *(_DWORD *)(LODWORD(v6) + 4);
      v17 = *(_DWORD *)(LODWORD(v6) + 8);
      v10 = *(_DWORD *)(a4 + 4);
      v18 = *(_DWORD *)(v10 + 300);
      v19 = *(_BYTE *)(v10 + 312);
      sub_4117A0((_DWORD *)dword_4F5CC4, (_DWORD *)0x803, v13, 29, 2, 10000);
    }
  }
  else
  {
    sub_4666E0(v7, LODWORD(v6), *(_DWORD *)(*(_DWORD *)(a4 + 4) + 300), *(_BYTE *)(*(_DWORD *)(a4 + 4) + 312));
  }
  v11 = *(_DWORD *)(this + 416);
  memset(&v20[11], 0, 16);
  memset(&v20[6], 0, 16);
  memset(&v20[1], 0, 16);
  v20[15] = 1065353216;
  v20[10] = 1065353216;
  v20[5] = 1065353216;
  v20[0] = 1065353216;
  sub_407690(v11, a5, v20);
  sub_46C5C5(LODWORD(v6), LODWORD(v6), v20);
  return 8;
}
