//----- (004233C0) --------------------------------------------------------
_DWORD *__cdecl sub_4233C0(_DWORD *self, int a2, const char *a3)
{
  char *v4; // edx

  self[1] = 0;
  self[2] = 0;
  self[3] = 0;
  *((_BYTE *)self + 16) = 1;
  self[6] = 0;
  self[7] = 0;
  self[8] = 0;
  *((_BYTE *)self + 36) = 1;
  self[10] = a2;
  *self = &off_499368;
  v4 = (char *)operator new(strlen(a3) + 1);
  self[5] = v4;
  strcpy(v4, a3);
  sub_423600(self);
  sub_423520(0);
  return self;
}
