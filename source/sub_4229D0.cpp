//----- (004229D0) --------------------------------------------------------
extern char aA[];
extern char asc_4A4AA4[];
extern char asc_4A4AA0[];
FILE *sub_4229D0(char *Format, ...)
{
  FILE *v1; // eax
  FILE *result; // eax
  char Buffer[32]; // [esp+0h] [ebp-220h] BYREF
  CHAR OutputString[512]; // [esp+20h] [ebp-200h] BYREF
  va_list va; // [esp+228h] [ebp+8h] BYREF

  va_start(va, Format);
  if ( !Stream )
  {
    if ( byte_520534 )
    {
      v1 = fopen(&byte_520534, aA);
      Stream = (int)(intptr_t)v1;
      if ( v1 )
        fputs(asc_4A4AA4, v1);
    }
  }
  if ( _vsnprintf(OutputString, 0x1FEu, Format, va) == -1 )
    OutputString[510] = 0;
  strcat(OutputString, asc_4A1F30);
  OutputDebugStringA(OutputString);
  result = (FILE *)Stream;
  if ( Stream )
  {
    sub_4228F0(Buffer);
    fputs(Buffer, (FILE *)Stream);
    fputs(asc_4A4AA0, (FILE *)Stream);
    fputs(OutputString, (FILE *)Stream);
    return (FILE *)fflush((FILE *)Stream);
  }
  return result;
}
