//----- (004690A0) --------------------------------------------------------
int __cdecl sub_4690A0(void *self)
{
  void *v2; // eax
  int result; // eax

  v2 = (void *)*((_DWORD *)self + 1);
  *(_DWORD *)self = (uint32)(uintptr_t)&off_499D18;
  sub_4885A6(v2);
  sub_4885A6(*((LPVOID *)self + 70));
  result = 0;
  *((_DWORD *)self + 70) = 0;
  *((_DWORD *)self + 71) = 0;
  *((_DWORD *)self + 72) = 0;
  return result;
}
