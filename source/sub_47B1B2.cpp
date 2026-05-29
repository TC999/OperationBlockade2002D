//----- (0047B1B2) --------------------------------------------------------
float *__usercall sub_47B1B2(unsigned __int16 *a1, float *a2, float *a3, int a4)
{
  int v4; // ebx
  int i; // eax
  int v6; // ebx
  int j; // eax
  unsigned __int16 v8; // ax
  unsigned int v10; // [esp+Ch] [ebp-4h] BYREF

  v4 = 0;
  for ( i = (char *)a2 - (char *)flt_4B1580; ; i = (char *)a2 - (char *)flt_4B1580 )
  {
    *((_BYTE *)&v10 + v4) = (__int64)(*(float *)((char *)&flt_4B1580[v4] + i) / flt_4B1580[v4] * 255.0);
    if ( ++v4 >= 3 )
      break;
  }
  sub_47B093(&v10, a1);
  v6 = 0;
  for ( j = (char *)a3 - (char *)flt_4B1580; ; j = (char *)a3 - (char *)flt_4B1580 )
  {
    *((_BYTE *)&v10 + v6) = (__int64)(*(float *)((char *)&flt_4B1580[v6] + j) / flt_4B1580[v6] * 255.0);
    if ( ++v6 >= 3 )
      break;
  }
  sub_47B093(&v10, a1 + 1);
  v8 = *a1;
  if ( (a4 == 16) != a1[1] < *a1 )
  {
    *a1 = a1[1];
    a1[1] = v8;
  }
  sub_47B0C6(a1, &v10);
  sub_47B061(a2, (int)&v10);
  sub_47B0C6(a1 + 1, &v10);
  return sub_47B061(a3, (int)&v10);
}
