//----- (0043C930) --------------------------------------------------------
char __thiscall sub_43C930(int *this)
{
  if ( *(_BYTE *)(dword_4F5CC4 + 936) || *(_BYTE *)(dword_4F5CC4 + 937) )
  {
    sub_4262D0(this[10]);
    return sub_45AB70(*(_DWORD *)(dword_520970 + 236));
  }
  else
  {
    sub_45ABF0(*(_DWORD *)(dword_520970 + 236));
    return sub_4261C0((_DWORD *)this[10], aLevelselect, 0);
  }
}
