//----- (0045A7E0) --------------------------------------------------------
int __thiscall sub_45A7E0(_DWORD *this)
{
  sub_4282E0(
    *(_DWORD *)(this[19] + 352) != 0,
    "Higgins boat in a mission where gunGuys was not specified, see mission %s",
    (const char *)this[19]);
  return *(_DWORD *)(this[19] + 352);
}
