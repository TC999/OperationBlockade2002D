//----- (00469700) --------------------------------------------------------
int __cdecl sub_469700(_DWORD *self, int a2, const char *a3)
{
  char *v4; // eax
  int v5; // eax
  int v6; // ecx
  void *v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // edi
  int v11; // ecx
  int result; // eax

  v4 = (char *)operator new(0x80u);
  *(_DWORD *)(a2 + 4) = v4;
  sprintf(v4, "%s %d", a3, self[9]);
  v5 = self[7];
  v6 = self[6] + 1;
  self[6] = v6;
  if ( v6 > v5 )
  {
    v7 = (void *)self[5];
    v8 = v5 + 8;
    self[7] = v8;
    v9 = sub_488DD7(v7, 4 * v8);
    if ( v9 )
    {
      v10 = self[6];
      v11 = self[7] - v10;
      self[5] = v9;
      memset((void *)(v9 + 4 * v10), 0, 4 * v11);
    }
  }
  *(_DWORD *)(self[5] + 4 * self[6] - 4) = a2;
  result = self[9] + 1;
  self[9] = result;
  return result;
}
