//----- (004630B0) --------------------------------------------------------
_DWORD *__thiscall sub_4630B0(_DWORD *this)
{
  _DWORD *result; // eax
  int v2; // ecx

  result = this + 231;
  v2 = 4;
  do
  {
    result[1] = 0;
    *result = 0;
    result += 88;
    --v2;
  }
  while ( v2 );
  return result;
}
