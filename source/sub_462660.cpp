//----- (00462660) --------------------------------------------------------
_DWORD *__thiscall sub_462660(_DWORD *this)
{
  int v1; // eax
  int v2; // edx
  int v3; // eax
  _DWORD *result; // eax
  int v5; // esi

  v1 = 88 * this[128];
  this[2901] = this[v1 + 231];
  v2 = 0;
  v3 = this[v1 + 231];
  this[2903] = 0;
  this[2902] = v3;
  this[2904] = 0;
  result = this + 2906;
  do
  {
    result += 4;
    *(result - 5) = this[88 * this[128] + 233 + v2];
    v5 = v2 + 88 * this[128];
    ++v2;
    *(result - 4) = this[v5 + 233];
    *(result - 3) = 0;
    *(result - 2) = 0;
  }
  while ( v2 < 10 );
  return result;
}
