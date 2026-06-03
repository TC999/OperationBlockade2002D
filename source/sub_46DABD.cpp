//----- (0046DABD) --------------------------------------------------------
int __cdecl sub_46DABD(int self)
{
  int result; // eax
  void *v3; // esi

  sub_4885A6(*(void **)self);
  result = 0;
  v3 = *(void **)(self + 8);
  if ( v3 )
  {
    sub_46DABD((int)(intptr_t)v3);
    sub_4885A6(v3);
    result = 0;
  }
  return result;
}
