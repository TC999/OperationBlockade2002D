//----- (0042A860) --------------------------------------------------------
int __thiscall sub_42A860(LPVOID *this)
{
  int i; // ebp
  int v3; // edi
  void *v4; // eax

  *this = &off_49940C;
  sub_42A840(this);
  sub_4885A6(this[245]);
  this[245] = 0;
  this[246] = 0;
  this[247] = 0;
  if ( *((_BYTE *)this + 944) )
  {
    for ( i = 0; i < (int)this[234]; ++i )
    {
      v3 = *((_DWORD *)this[233] + i);
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
  memset(this[233], 0, 4 * (_DWORD)this[234]);
  v4 = this[233];
  this[234] = 0;
  sub_488CEE(v4);
  this[235] = 0;
  this[233] = 0;
  `eh vector destructor iterator'(this + 156, 0x18u, 5, (void (__thiscall *)(void *))sub_42A9D0);
  sub_4885A6(this[153]);
  this[153] = 0;
  this[154] = 0;
  this[155] = 0;
  return sub_4690A0(this);
}
