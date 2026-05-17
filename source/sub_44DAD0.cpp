//----- (0044DAD0) --------------------------------------------------------
_DWORD *__stdcall sub_44DAD0(int *a1, float *a2, float a3, int a4)
{
  int v4; // edi
  int *v5; // ebx
  _DWORD *v6; // esi
  _DWORD v8[3]; // [esp+Ch] [ebp-Ch] BYREF

  v4 = (int)a2;
  if ( sub_401200(a2) )
    v4 = *(_DWORD *)(dword_520970 + 120) + 56;
  v5 = a1;
  if ( !a1 )
    return 0;
  sub_44D850((int)a1, (float *)v4, &a2, &a1);
  if ( *(float *)&a2 == 0.0 )
    return 0;
  v6 = (_DWORD *)sub_41E2D0(*(_DWORD **)(dword_520970 + 120), (int)a2, 1, 1);
  if ( v6 )
  {
    sub_41D8A0(*((_BYTE *)v5 + 330));
    sub_41D8B0(v6, *a1, a1[3], a1[5], a1[1], a1[2], a1[4]);
    sub_41D8E0(*((_BYTE *)v5 + 328), *(_DWORD *)(v4 + 8));
    memset(v8, 0, sizeof(v8));
    sub_41D960(v6, (_DWORD *)v4, v8);
    if ( a3 != 0.0 )
      sub_41D940(LODWORD(a3), a4);
    sub_41D840(v6);
  }
  return v6;
}
