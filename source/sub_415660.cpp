//----- (00415660) --------------------------------------------------------
_DWORD *__thiscall sub_415660(_DWORD *self, int a2)
{
  _DWORD *result; // eax
  _DWORD *v3; // ecx
  int v4; // esi

  result = self;
  self[2] = 0;
  self[9] = 0;
  self[4] = 0;
  self[10] = 0;
  self[1033] = 0;
  self[1034] = 0;
  self[11] = 0;
  self[1035] = 0;
  *self = a2;
  self[5] = 1065353216;
  *((_BYTE *)self + 12) = 1;
  v3 = self + 35;
  v4 = 200;
  do
  {
    *(v3 - 1) = 1120403456;
    *v3 = 1120403456;
    v3[1] = 1120403456;
    v3 += 5;
    --v4;
  }
  while ( v4 );
  result[1071] = *(_DWORD *)(a2 + 292);
  result[1072] = *(_DWORD *)(a2 + 296);
  result[1073] = *(_DWORD *)(a2 + 300);
  result[1074] = *(_DWORD *)(a2 + 304);
  result[1075] = *(_DWORD *)(a2 + 308);
  result[1076] = *(_DWORD *)(a2 + 312);
  result[1077] = *(_DWORD *)(a2 + 316);
  result[1078] = *(_DWORD *)(a2 + 320);
  *((_BYTE *)result + 4316) = *(_BYTE *)(a2 + 324);
  result[1069] = 20;
  result[1070] = 10;
  return result;
}
