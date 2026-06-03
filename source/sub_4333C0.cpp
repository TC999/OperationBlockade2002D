//----- (004333C0) --------------------------------------------------------
char __cdecl sub_4333C0(int self, int a2)
{
  int v3; // edx
  int v4; // eax
  int v5; // esi
  int v6; // esi
  int v7; // eax

  sub_4317B0((_DWORD *)self, 2);
  if ( !*(_BYTE *)(self + 396) )
    return 0;
  if ( !*(_BYTE *)(dword_4F5CC4 + 937) && (_BYTE)a2 )
    sub_462520(*(_DWORD **)(*(_DWORD *)(self + 428) + 592), dword_5216E8, 0);
  v4 = *(_DWORD *)(self + 428);
  *(_BYTE *)(self + 396) = 0;
  SLOBYTE(v3) = *(_DWORD *)(v4 + 292) == 1;
  sub_45A420(*(float **)(dword_520970 + 236), v4, a2, v3, 1);
  v5 = *(_DWORD *)(self + 428);
  if ( *(_BYTE *)(v5 + 300) )
  {
    v6 = *(_DWORD *)(v5 + 292);
    if ( v6 )
    {
      if ( v6 == 3 )
        v7 = 1;
      else
        v7 = (v6 != 2) + 2;
    }
    else
    {
      v7 = 0;
    }
    sub_45F350((_DWORD *)v7, a2, 0);
  }
  return 1;
}
