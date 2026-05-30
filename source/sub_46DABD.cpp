//----- (0046DABD) --------------------------------------------------------
int __cdecl sub_46DABD(int self)
{
  int result; // eax
  void *v3; // esi

  result = sub_4885A6(*(LPVOID *)self);
  v3 = *(void **)(self + 8);
  if ( v3 )
  {
    sub_46DABD(v3);
    return sub_4885A6(v3);
  }
  return result;
}
