//----- (00403A30) --------------------------------------------------------
_DWORD *sub_403A30(_DWORD *a1, int a2, char *Format, ...)
{
  char *v3; // eax
  va_list va; // [esp+14h] [ebp+10h] BYREF

  va_start(va, Format);
  *a1 = a2;
  v3 = (char *)malloc(0x100u);
  a1[1] = v3;
  _vsnprintf(v3, 0xFFu, Format, va);
  return a1;
}
