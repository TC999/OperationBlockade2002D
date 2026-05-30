//----- (0042A860) --------------------------------------------------------
int __cdecl sub_42A860(LPVOID *self)
{
  int i; // ebp
  int v3; // edi
  void *v4; // eax

  *self = &off_49940C;
  sub_42A840(self);
  sub_4885A6(self[245]);
  self[245] = 0;
  self[246] = 0;
  self[247] = 0;
  if ( *((_BYTE *)self + 944) )
  {
    for ( i = 0; i < (int)self[234]; ++i )
    {
      v3 = *((_DWORD *)self[233] + i);
      if ( v3 )
      {
        sub_4885A6(*(LPVOID *)(v3 + 8));
        *(_DWORD *)(v3 + 8) = 0;
        *(_DWORD *)(v3 + 12) = 0;
        *(_DWORD *)(v3 + 16) = 0;
        sub_4885A6((LPVOID)v3);
      }
    }
  }
  memset(self[233], 0, 4 * (_DWORD)self[234]);
  v4 = self[233];
  self[234] = 0;
  sub_488CEE(v4);
  self[235] = 0;
  self[233] = 0;
  `eh vector destructor iterator'(self + 156, 0x18u, 5, (void (__cdecl *)(void *))sub_42A9D0);
  sub_4885A6(self[153]);
  self[153] = 0;
  self[154] = 0;
  self[155] = 0;
  return sub_4690A0(self);
}
