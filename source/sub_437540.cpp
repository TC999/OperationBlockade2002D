//----- (00437540) --------------------------------------------------------
int __thiscall sub_437540(_DWORD *self, int a2)
{
  int v3; // eax
  int v4; // ecx
  void *v5; // edx
  int v6; // eax
  int v7; // eax
  int v8; // edi
  int v9; // ecx
  int result; // eax

  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 24))(a2, 0);
  v3 = self[8];
  v4 = self[7] + 1;
  self[7] = v4;
  if ( v4 > v3 )
  {
    v5 = (void *)self[6];
    v6 = v3 + 8;
    self[8] = v6;
    v7 = sub_488DD7(v5, 4 * v6);
    if ( v7 )
    {
      v8 = self[7];
      v9 = self[8] - v8;
      self[6] = v7;
      memset((void *)(v7 + 4 * v8), 0, 4 * v9);
    }
  }
  result = self[7];
  *(_DWORD *)(self[6] + 4 * result - 4) = a2;
  return result;
}
