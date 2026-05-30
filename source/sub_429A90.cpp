//----- (00429A90) --------------------------------------------------------
void *__cdecl sub_429A90(void *self, int a2, int a3, int a4, char *Source)
{
  *(_DWORD *)self = a2;
  *((_DWORD *)self + 1) = a3;
  *((_DWORD *)self + 2) = a4;
  strncpy((char *)self + 12, Source, 0x100u);
  *((_BYTE *)self + 268) = 0;
  return self;
}
