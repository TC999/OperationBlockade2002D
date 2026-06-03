//----- (00421280) --------------------------------------------------------
int __cdecl sub_421280(_DWORD *self)
{
  char *v2; // esi
  unsigned int v3; // kr04_4

  v2 = (char *)self[2];
  v3 = strlen(v2) + 1;
  if ( (int)(v3 - 1) > 0 )
    v2[v3 - 2] = 0;
  return sub_421AB0(*self, (char *)self[2], (float *)(self + 6), self + 7);
}
