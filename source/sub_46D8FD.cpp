//----- (0046D8FD) --------------------------------------------------------
void sub_46D8FD(int a1, char *Format, ...)
{
  CHAR OutputString[256]; // [esp+4h] [ebp-200h] BYREF
  char Buffer[256]; // [esp+104h] [ebp-100h] BYREF
  va_list va; // [esp+214h] [ebp+10h] BYREF

  va_start(va, Format);
  _vsnprintf(Buffer, 0x100u, Format, va);
  Buffer[255] = 0;
  _snprintf(OutputString, 0x100u, "D3DX: %s\r\n", Buffer);
  OutputString[255] = 0;
  OutputDebugStringA(OutputString);
}
