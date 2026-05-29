//----- (00437B10) --------------------------------------------------------
_DWORD *__thiscall sub_437B10(_DWORD *self)
{
  _DWORD *result; // eax
  int v2; // ecx

  result = self + 182;
  v2 = 12;
  do
  {
    *(result - 2) = 5;
    *result = 0;
    *(result - 1) = 0;
    result[1] = 1065353216;
    result += 35;
    --v2;
  }
  while ( v2 );
  return result;
}
