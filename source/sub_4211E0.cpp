//----- (004211E0) --------------------------------------------------------
int __cdecl sub_4211E0(const char **self, char a2)
{
  unsigned int v3; // kr04_4
  char *v5; // [esp+Ch] [ebp-4h]

  v3 = strlen(self[2]) + 1;
  if ( (int)(v3 + 1) > (int)self[1] )
  {
    v5 = strcpy((char *)operator new(v3 + 1), self[2]);
    sub_4885A6((LPVOID)self[2]);
    self[2] = v5;
    self[1] = (const char *)(v3 + 1);
  }
  self[2][v3 - 1] = a2;
  self[2][v3] = 0;
  return sub_421AB0(*self, self[2], self + 6, self + 7);
}
