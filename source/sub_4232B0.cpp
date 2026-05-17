//----- (004232B0) --------------------------------------------------------
int sub_4232B0()
{
  int v0; // edi
  int *v1; // esi
  int v2; // eax
  int v3; // edx
  int v4; // ebx
  int v5; // eax
  int result; // eax

  v0 = 0;
  v1 = dword_52012C;
  do
  {
    v2 = sub_423310(v0, 8);
    v3 = 8;
    v2 <<= 24;
    *v1 = v2;
    v4 = v2;
    do
    {
      v5 = (2 * v4) ^ (v4 < 0 ? 0x4C11DB7 : 0);
      --v3;
      v4 = v5;
    }
    while ( v3 );
    *v1 = v5;
    result = sub_423310(v5, 32);
    *v1++ = result;
    ++v0;
  }
  while ( (int)v1 <= (int)&dword_520528 );
  return result;
}
