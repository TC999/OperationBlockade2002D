//----- (004690A0) --------------------------------------------------------
int __thiscall sub_4690A0(void *this)
{
  void *v2; // eax
  int result; // eax

  v2 = (void *)*((_DWORD *)this + 1);
  *(_DWORD *)this = &off_499D18;
  sub_4885A6(v2);
  sub_4885A6(*((LPVOID *)this + 70));
  result = 0;
  *((_DWORD *)this + 70) = 0;
  *((_DWORD *)this + 71) = 0;
  *((_DWORD *)this + 72) = 0;
  return result;
}
