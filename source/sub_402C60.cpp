//----- (00402C60) --------------------------------------------------------
char *__thiscall sub_402C60(char *Destination, char *Source)
{
  *((_DWORD *)Destination + 18) = 0;
  *((_DWORD *)Destination + 19) = 0;
  *((_DWORD *)Destination + 20) = 0;
  Destination[84] = 1;
  Destination[100] = 1;
  *((_DWORD *)Destination + 22) = 0;
  *((_DWORD *)Destination + 23) = 0;
  *((_DWORD *)Destination + 24) = 0;
  memset(Destination, 0, 0x40u);
  strncpy(Destination, Source, 0x3Fu);
  *((_DWORD *)Destination + 16) = 0;
  *((_DWORD *)Destination + 17) = 0;
  *((_DWORD *)Destination + 26) = 0;
  return Destination;
}
