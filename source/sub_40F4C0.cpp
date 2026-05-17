//----- (0040F4C0) --------------------------------------------------------
void *__thiscall sub_40F4C0(_DWORD *this, int a2, unsigned int a3, _WORD *a4)
{
  void *result; // eax

  *this = 0;
  this[1] = a2;
  this[2] = a3;
  result = (void *)sub_40E8E0(a3);
  this[4] = result;
  *((_WORD *)this + 6) = *a4;
  qmemcpy(result, a4, a3);
  return result;
}
