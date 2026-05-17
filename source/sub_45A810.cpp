//----- (0045A810) --------------------------------------------------------
int __thiscall sub_45A810(_DWORD *this)
{
  sub_4282E0(
    *(_DWORD *)(this[19] + 356) != 0,
    "Higgins boat in a mission where mortarGuys was not specified, see mission %s",
    (const char *)this[19]);
  return *(_DWORD *)(this[19] + 356);
}
