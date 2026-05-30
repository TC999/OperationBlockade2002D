//----- (00406B00) --------------------------------------------------------
_DWORD *__cdecl sub_406B00(_DWORD *self, int a2, char a3)
{
  int v4; // ecx
  int v5; // edi
  void *v6; // eax
  void *v7; // edi
  int v8; // eax

  self[1] = 0;
  self[2] = 0;
  self[3] = 0;
  *((_BYTE *)self + 16) = 1;
  *self = &off_499040;
  v4 = *(_DWORD *)(a2 + 8);
  self[6] = 0;
  self[5] = v4;
  v5 = self[5];
  self[7] = a2;
  self[9] = 0;
  *((_BYTE *)self + 40) = a3;
  self[11] = 0;
  *((_BYTE *)self + 48) = 0;
  *self = &off_4990E8;
  self[8] = **(_DWORD **)(a2 + 44);
  v6 = operator new(96 * v5);
  if ( v6 )
    v7 = v6;
  else
    v7 = 0;
  v8 = self[5];
  self[6] = v7;
  memset(v7, 0, 4 * ((unsigned int)(96 * v8) >> 2));
  return self;
}
