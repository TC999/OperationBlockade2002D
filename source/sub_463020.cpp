//----- (00463020) --------------------------------------------------------
_DWORD *__thiscall sub_463020(_DWORD *this)
{
  _DWORD *v2; // ecx
  _DWORD *result; // eax
  int v4; // esi

  memset(this + 220, 0, 0x580u);
  this[130] = 0;
  v2 = this + 220;
  result = this + 585;
  v4 = 4;
  do
  {
    *v2 = -1;
    *result = -1;
    result += 13;
    v2 += 88;
    --v4;
  }
  while ( v4 );
  this[129] = -1;
  return result;
}
