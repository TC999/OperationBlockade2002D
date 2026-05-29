//----- (0047F42A) --------------------------------------------------------
_DWORD *__thiscall sub_47F42A(_DWORD *self)
{
  _DWORD *result; // eax
  bool v2; // cf
  int v3; // ecx
  int v4; // ecx

  result = (_DWORD *)self[97];
  if ( (int)self[72] <= 1 )
  {
    v2 = self[32] < (unsigned int)(self[70] - 1);
    v3 = self[73];
    if ( v2 )
      v4 = *(_DWORD *)(v3 + 12);
    else
      v4 = *(_DWORD *)(v3 + 72);
    result[7] = v4;
  }
  else
  {
    result[7] = 1;
  }
  result[5] = 0;
  result[6] = 0;
  return result;
}
