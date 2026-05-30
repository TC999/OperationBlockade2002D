//----- (0043A520) --------------------------------------------------------
int __cdecl sub_43A520(int *self)
{
  int result; // eax

  sub_43A1E0(self);
  result = (*(int (__cdecl **)(int *, _DWORD))(*self + 24))(self, 0);
  *(_BYTE *)(dword_520970 + 296) = 0;
  return result;
}
