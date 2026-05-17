//----- (004085F0) --------------------------------------------------------
_DWORD *__thiscall sub_4085F0(int this, int a2, _DWORD *a3, _DWORD *a4)
{
  _DWORD *result; // eax
  _DWORD *v6; // eax

  sub_406F00((float *)this, a2);
  result = a3;
  if ( a3 )
    *a3 = *(_DWORD *)(96 * a2 + *(_DWORD *)(this + 24) + 12);
  if ( a4 )
  {
    v6 = (_DWORD *)(*(_DWORD *)(this + 24) + 96 * a2);
    *a4 = *v6;
    a4[1] = v6[1];
    result = (_DWORD *)v6[2];
    a4[2] = result;
  }
  return result;
}
