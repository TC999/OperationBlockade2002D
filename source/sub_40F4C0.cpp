//----- (0040F4C0) --------------------------------------------------------
void *__thiscall sub_40F4C0(_DWORD *self, int a2, unsigned int a3, _WORD *a4)
{
  void *result; // eax

  *self = 0;
  self[1] = a2;
  self[2] = a3;
  result = (void *)sub_40E8E0(a3);
  self[4] = result;
  *((_WORD *)self + 6) = *a4;
  qmemcpy(result, a4, a3);
  return result;
}
