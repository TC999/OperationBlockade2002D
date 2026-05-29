//----- (00413300) --------------------------------------------------------
void __thiscall sub_413300(LPVOID *self)
{
  void *v2; // ecx
  _DWORD *v3; // esi
  _DWORD *v4; // ebx

  *self = &off_4991F4;
  sub_4885A6(self[6]);
  v2 = self[7];
  self[6] = 0;
  sub_4885A6(v2);
  v3 = self[10];
  self[7] = 0;
  if ( v3 )
  {
    do
    {
      v4 = (_DWORD *)v3[173];
      if ( v3 )
      {
        `eh vector destructor iterator'(v3 + 94, 0xCu, 26, (void (__thiscall *)(void *))sub_40E620);
        sub_4885A6(v3);
      }
      v3 = v4;
    }
    while ( v4 );
    self[10] = 0;
    *self = &off_499040;
  }
  else
  {
    self[10] = 0;
    *self = &off_499040;
  }
}
