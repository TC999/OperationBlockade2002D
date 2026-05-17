//----- (004233C0) --------------------------------------------------------
_DWORD *__thiscall sub_4233C0(_DWORD *this, int a2, const char *a3)
{
  char *v4; // edx

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  *((_BYTE *)this + 16) = 1;
  this[6] = 0;
  this[7] = 0;
  this[8] = 0;
  *((_BYTE *)this + 36) = 1;
  this[10] = a2;
  *this = &off_499368;
  v4 = (char *)operator new(strlen(a3) + 1);
  this[5] = v4;
  strcpy(v4, a3);
  sub_423600(this);
  sub_423520(0);
  return this;
}
