//----- (00450790) --------------------------------------------------------
void __thiscall sub_450790(_DWORD *self)
{
  _DWORD *v2; // ecx

  if ( !self[46] )
    sub_45ABF0(*(_DWORD *)(dword_520970 + 236));
  sub_408EE0(self);
  v2 = (_DWORD *)self[46];
  if ( v2 )
  {
    sub_403B70(v2);
    self[46] = 0;
  }
}
