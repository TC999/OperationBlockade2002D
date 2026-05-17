//----- (0047B0C6) --------------------------------------------------------
unsigned int __usercall sub_47B0C6@<eax>(unsigned __int16 *a1@<eax>, unsigned int *a2)
{
  int v2; // eax
  unsigned __int8 v3; // dl
  char v4; // cl
  unsigned int v5; // eax
  unsigned int result; // eax
  unsigned int v7; // [esp+4h] [ebp-4h]

  v2 = *a1;
  v3 = 8 * v2;
  HIWORD(v7) = HIWORD(v2);
  LOWORD(v7) = (unsigned __int16)v2 >> 5;
  v4 = (unsigned __int16)v2 >> 5;
  v5 = v7;
  LOBYTE(v7) = (v3 >> 5) | v3;
  BYTE1(v7) = ((unsigned __int8)(4 * v4) >> 6) | (4 * v4);
  BYTE2(v7) = ((unsigned __int8)(8 * (v5 >> 6)) >> 5) | (8 * (v5 >> 6));
  result = v7;
  *a2 = v7;
  return result;
}
