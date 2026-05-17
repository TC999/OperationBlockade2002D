//----- (00450790) --------------------------------------------------------
void __thiscall sub_450790(_DWORD *this)
{
  _DWORD *v2; // ecx

  if ( !this[46] )
    sub_45ABF0(*(_DWORD *)(dword_520970 + 236));
  sub_408EE0(this);
  v2 = (_DWORD *)this[46];
  if ( v2 )
  {
    sub_403B70(v2);
    this[46] = 0;
  }
}
