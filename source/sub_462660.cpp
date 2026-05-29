//----- (00462660) --------------------------------------------------------
_DWORD *__thiscall sub_462660(_DWORD *self)
{
  int v1; // eax
  int v2; // edx
  int v3; // eax
  _DWORD *result; // eax
  int v5; // esi

  v1 = 88 * self[128];
  self[2901] = self[v1 + 231];
  v2 = 0;
  v3 = self[v1 + 231];
  self[2903] = 0;
  self[2902] = v3;
  self[2904] = 0;
  result = self + 2906;
  do
  {
    result += 4;
    *(result - 5) = self[88 * self[128] + 233 + v2];
    v5 = v2 + 88 * self[128];
    ++v2;
    *(result - 4) = self[v5 + 233];
    *(result - 3) = 0;
    *(result - 2) = 0;
  }
  while ( v2 < 10 );
  return result;
}
