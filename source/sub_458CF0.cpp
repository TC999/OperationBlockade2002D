//----- (00458CF0) --------------------------------------------------------
extern "C" void __cdecl __eh_vector_ctor_iterator(void *, unsigned int, int, void (__cdecl *)(void *), void (__cdecl *)(void *));

_DWORD *__cdecl sub_458CF0(_DWORD *self)
{
  self[1] = 0;
  self[2] = 0;
  self[3] = 0;
  *((_BYTE *)self + 16) = 1;
  *self = (DWORD)&off_499040;
  __eh_vector_ctor_iterator(self + 6, 0x10u, 3, (void (__cdecl *)(void *))sub_458DD0, (void (__cdecl *)(void *))sub_45C880);
  *((_BYTE *)self + 116) = 0;
  self[30] = 0;
  self[31] = 0;
  self[32] = 0;
  *((_BYTE *)self + 208) = 0;
  self[53] = 0;
  self[54] = 0;
  self[55] = 0;
  self[57] = 0;
  self[58] = 0;
  self[59] = 0;
  *self = (DWORD)&off_499B48;
  self[5] = 1;
  return self;
}
