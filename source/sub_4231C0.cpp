//----- (004231C0) --------------------------------------------------------
int __cdecl sub_4231C0(int a1)
{
  void *v1; // eax

  if ( dword_52073C < dword_4A4320 )
  {
    *(_DWORD *)(dword_520530 + 4 * dword_52073C) = a1;
  }
  else
  {
    v1 = operator new(4 * dword_4A4320 + 400);
    qmemcpy(v1, (const void *)dword_520530, 4 * dword_52073C);
    dword_520530 = (int)v1;
    *((_DWORD *)v1 + dword_52073C) = a1;
  }
  return ++dword_52073C;
}
