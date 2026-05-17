//----- (00458CA0) --------------------------------------------------------
_DWORD *__cdecl sub_458CA0(int a1, int a2, _DWORD *a3)
{
  int v3; // ecx
  _DWORD *result; // eax
  int v5; // esi

  v3 = a2;
  if ( a1 == a2 )
    return a3;
  result = a3;
  do
  {
    v5 = *(_DWORD *)(v3 - 8);
    v3 -= 8;
    result -= 2;
    *result = v5;
    result[1] = *(_DWORD *)(v3 + 4);
  }
  while ( v3 != a1 );
  return result;
}
