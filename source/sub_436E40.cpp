//----- (00436E40) --------------------------------------------------------
int __cdecl sub_436E40(char *self, const char *a2)
{
  int v2; // edi
  char *i; // esi
  int result; // eax
  LPVOID *v5; // ecx
  int v6; // eax
  double v7; // st7
  double v8; // st6

  v2 = 0;
  for ( i = self + 48; i[8]; i += 52 )
  {
    if ( ++v2 >= 4 )
      return -1;
  }
  v5 = (LPVOID *)*((_DWORD *)i + 8);
  i[8] = 1;
  sub_421110(v5, a2);
  v6 = *((_DWORD *)i + 8);
  v7 = (double)*((int *)i + 1);
  v8 = (double)(unsigned int)dword_5209F4 - *(float *)(v6 + 24);
  *(_BYTE *)(v6 + 32) = 0;
  *(float *)(v6 + 12) = v8 - 16.0;
  *(float *)(v6 + 16) = v7;
  result = v2;
  *(_DWORD *)(*((_DWORD *)i + 8) + 20) = 1064514355;
  return result;
}
