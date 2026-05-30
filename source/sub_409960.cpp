//----- (00409960) --------------------------------------------------------
_DWORD *__cdecl sub_409960(_DWORD *self, int a2)
{
  int v3; // eax
  int v4; // eax
  _DWORD *v5; // ebx
  int v6; // eax
  int v7; // ecx
  void *v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // edi
  int v12; // ecx

  v3 = self[12];
  if ( v3 <= 0 )
  {
    v5 = operator new(0x94u);
    memset(v5, 0, 0x94u);
  }
  else
  {
    v4 = v3 - 1;
    v5 = *(_DWORD **)(self[11] + 4 * v4);
    self[12] = v4;
  }
  *v5 = a2;
  v6 = self[9];
  v7 = self[8] + 1;
  self[8] = v7;
  if ( v7 > v6 )
  {
    v8 = (void *)self[7];
    v9 = v6 + 8;
    self[9] = v9;
    v10 = sub_488DD7(v8, 4 * v9);
    if ( v10 )
    {
      v11 = self[8];
      v12 = self[9] - v11;
      self[7] = v10;
      memset((void *)(v10 + 4 * v11), 0, 4 * v12);
    }
  }
  *(_DWORD *)(self[7] + 4 * self[8] - 4) = v5;
  return v5;
}
