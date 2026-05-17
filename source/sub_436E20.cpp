//----- (00436E20) --------------------------------------------------------
_BYTE *__thiscall sub_436E20(char *this)
{
  _BYTE *result; // eax
  int v2; // ecx

  result = this + 56;
  v2 = 4;
  do
  {
    *result = 0;
    result += 52;
    --v2;
  }
  while ( v2 );
  return result;
}
