//----- (0045A840) --------------------------------------------------------
int __thiscall sub_45A840(_DWORD *self)
{
  sub_4282E0(
    *(_DWORD *)(self[19] + 360) != 0,
    "LCT or LST in a mission where tanks was not specified, see mission %s",
    (const char *)self[19]);
  return *(_DWORD *)(self[19] + 360);
}
