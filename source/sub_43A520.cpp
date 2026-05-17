//----- (0043A520) --------------------------------------------------------
int __thiscall sub_43A520(int *this)
{
  int result; // eax

  sub_43A1E0(this);
  result = (*(int (__thiscall **)(int *, _DWORD))(*this + 24))(this, 0);
  *(_BYTE *)(dword_520970 + 296) = 0;
  return result;
}
