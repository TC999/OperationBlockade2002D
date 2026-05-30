//----- (004073F0) --------------------------------------------------------
int __cdecl sub_4073F0(_DWORD *self, int a2, const void *a3)
{
  char *v4; // eax

  v4 = (char *)sub_407190(self, a2, 1);
  v4[2] = 1;
  qmemcpy(v4 + 4, a3, 0x40u);
  return sub_407120(self, a2);
}
