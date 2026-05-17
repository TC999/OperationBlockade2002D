//----- (00413990) --------------------------------------------------------
char __stdcall sub_413990(_BYTE *a1)
{
  char result; // al

  result = 1;
  memset(a1, 0, 0xC0u);
  a1[4] = 1;
  a1[112] = 1;
  return result;
}
