//----- (0045A7E0) --------------------------------------------------------
int __thiscall sub_45A7E0(_DWORD *self)
{
  sub_4282E0(
    *(_DWORD *)(self[19] + 352) != 0,
    "Higgins boat in a mission where gunGuys was not specified, see mission %s",
    (const char *)self[19]);
  return *(_DWORD *)(self[19] + 352);
}
