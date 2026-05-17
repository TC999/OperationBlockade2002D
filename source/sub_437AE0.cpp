//----- (00437AE0) --------------------------------------------------------
_DWORD *__thiscall sub_437AE0(_DWORD *this)
{
  _DWORD *result; // eax
  int v2; // ecx

  result = this + 182;
  v2 = 12;
  do
  {
    *(result - 2) = 8;
    *result = 0;
    *(result - 1) = 1050253722;
    result[1] = 1058642330;
    result += 35;
    --v2;
  }
  while ( v2 );
  return result;
}
