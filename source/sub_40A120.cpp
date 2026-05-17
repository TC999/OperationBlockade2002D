//----- (0040A120) --------------------------------------------------------
char sub_40A120(char a1, char *Format, ...)
{
  char result; // al
  char Buffer[512]; // [esp+0h] [ebp-200h] BYREF
  va_list va; // [esp+20Ch] [ebp+Ch] BYREF

  va_start(va, Format);
  result = a1;
  if ( !a1 )
  {
    byte_4F5B00 = 1;
    if ( _vsnprintf(Buffer, 0x1FEu, Format, va) == -1 )
      Buffer[510] = 0;
    strcat(Buffer, asc_4A1F30);
    fputs(Buffer, dword_4F5B04);
    return fflush(dword_4F5B04);
  }
  return result;
}
