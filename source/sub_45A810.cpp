//----- (0045A810) --------------------------------------------------------
int __cdecl sub_45A810(_DWORD *self)
{
  sub_4282E0(
    *(_DWORD *)(self[19] + 356) != 0,
    "Higgins boat in a mission where mortarGuys was not specified, see mission %s",
    (const char *)self[19]);
  return *(_DWORD *)(self[19] + 356);
}
