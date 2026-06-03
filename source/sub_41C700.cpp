//----- (0041C700) --------------------------------------------------------
static char aSoundDoneDestr[] = "Sound done destroying %s\n";

int __cdecl sub_41C700(LPVOID *self)
{
  char *v2;

  v2 = (char *)self + 40;
  sub_4229D0(aSoundDestroyin, v2);
  sub_41C940((int)self);
  sub_4885A6(self[9]);
  self[9] = 0;
  return (int)(uintptr_t)sub_4229D0(aSoundDoneDestr, v2);
}
