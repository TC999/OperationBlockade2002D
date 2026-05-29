//----- (0047B061) --------------------------------------------------------
float *__usercall sub_47B061(float *result, int a2)
{
  int v2; // ecx
  char *v3; // edx
  int v4; // [esp+4h] [ebp-4h]

  v2 = 0;
  v3 = (char *)((char *)&flt_4B1580 - (char *)result);
  do
  {
    v4 = *(unsigned __int8 *)(v2 + a2);
    ++v2;
    *result = (double)v4 * *(float *)((char *)result + (_DWORD)v3) * 0.0039215689;
    ++result;
  }
  while ( v2 < 3 );
  return result;
}
