//----- (0041C760) --------------------------------------------------------
unsigned int __thiscall sub_41C760(int self, const char *a2)
{
  unsigned int result; // eax

  sub_41C940(self);
  result = strlen(a2) + 1;
  qmemcpy((void *)(self + 40), a2, result);
  return result;
}
