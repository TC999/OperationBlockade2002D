//----- (00413780) --------------------------------------------------------
_DWORD *__thiscall sub_413780(_DWORD *self)
{
  _DWORD *v2; // esi
  _DWORD *result; // eax
  int v4; // ecx

  v2 = operator new(0x2B8u);
  if ( v2 )
  {
    v2[90] = 0;
    v2[91] = 0;
    v2[92] = 0;
    *((_BYTE *)v2 + 372) = 0;
    `eh vector constructor iterator'(v2 + 94, 0xCu, 26, sub_40E5F0, sub_40E620);
    v2[173] = 0;
    *(_BYTE *)v2 = 0;
    *((_BYTE *)v2 + 33) = 0;
    *((_BYTE *)v2 + 293) = 0;
    result = v2;
  }
  else
  {
    result = 0;
  }
  result[173] = self[10];
  v4 = self[9] + 1;
  self[10] = result;
  self[9] = v4;
  return result;
}
