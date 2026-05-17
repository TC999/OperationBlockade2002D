//----- (00438A70) --------------------------------------------------------
int __thiscall sub_438A70(int this)
{
  _DWORD *v2; // eax
  char *v3; // ecx
  int i; // edi
  LPVOID *v5; // eax

  v2 = *(_DWORD **)(this + 408);
  *(_DWORD *)(this + 396) = -1;
  *(_DWORD *)(this + 424) = 0;
  v2[8] = *(_DWORD *)(*(_DWORD *)(v2[7] + 44) + 4 * v2[11]);
  *(_DWORD *)(*(_DWORD *)(this + 408) + 36) = 1065353216;
  *(_BYTE *)(*(_DWORD *)(this + 408) + 48) = 0;
  if ( *(int *)(this + 428) > -1 )
    sub_408EF0(dword_520970, this);
  sub_41CF50(*(_DWORD *)(this + 416));
  sub_41CF00(*(_DWORD *)(this + 416));
  v3 = *(char **)(this + 404);
  *(_BYTE *)(this + 421) = 0;
  *(_BYTE *)(this + 420) = 0;
  sub_438430(v3, 12, 1065353216, 1065353216, 1065353216);
  for ( i = 0; i < 13; ++i )
    sub_4383D0(*(char **)(this + 404), i);
  v5 = (LPVOID *)sub_450BF0(1, 4.0);
  return sub_421110(v5, aDecember1941Op);
}
