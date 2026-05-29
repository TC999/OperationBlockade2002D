//----- (00407460) --------------------------------------------------------
int __thiscall sub_407460(_DWORD *self, int a2)
{
  _BYTE *v3; // eax

  v3 = sub_407190(self, a2, 1);
  v3[2] = 1;
  qmemcpy(v3 + 4, (const void *)(self[6] + 96 * a2 + 16), 0x40u);
  *v3 = 1;
  v3[1] = 0;
  return sub_407120(self, a2);
}
