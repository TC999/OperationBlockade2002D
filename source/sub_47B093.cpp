//----- (0047B093) --------------------------------------------------------
_WORD *__usercall sub_47B093@<eax>(_BYTE *a1@<eax>, _WORD *a2)
{
  __int16 v2; // cx
  _WORD *result; // eax

  v2 = (*a1 >> 3) | (32 * ((a1[1] >> 2) | (a1[2] >> 3 << 6)));
  result = a2;
  *a2 = v2;
  return result;
}
