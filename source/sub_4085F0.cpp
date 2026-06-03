//----- (004085F0) --------------------------------------------------------
_DWORD *__cdecl sub_4085F0(int self, int a2, _DWORD *a3, _DWORD *a4)
{
  _DWORD *result; // eax
  _DWORD *v6; // eax

  sub_406F00((float *)self, a2);
  result = a3;
  if ( a3 )
    *a3 = *(_DWORD *)(96 * a2 + *(_DWORD *)(self + 24) + 12);
  if ( a4 )
  {
    v6 = (_DWORD *)(*(_DWORD *)(self + 24) + 96 * a2);
    *a4 = *v6;
    a4[1] = v6[1];
    result = (_DWORD *)v6[2];
    a4[2] = *(uint32*)(result);
  }
  return result;
}
