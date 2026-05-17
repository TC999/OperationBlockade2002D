//----- (00429A90) --------------------------------------------------------
void *__thiscall sub_429A90(void *this, int a2, int a3, int a4, char *Source)
{
  *(_DWORD *)this = a2;
  *((_DWORD *)this + 1) = a3;
  *((_DWORD *)this + 2) = a4;
  strncpy((char *)this + 12, Source, 0x100u);
  *((_BYTE *)this + 268) = 0;
  return this;
}
