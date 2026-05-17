//----- (0045A840) --------------------------------------------------------
int __thiscall sub_45A840(_DWORD *this)
{
  sub_4282E0(
    *(_DWORD *)(this[19] + 360) != 0,
    "LCT or LST in a mission where tanks was not specified, see mission %s",
    (const char *)this[19]);
  return *(_DWORD *)(this[19] + 360);
}
