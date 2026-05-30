//----- (00426F70) --------------------------------------------------------
char byte_520860 = 0;

LONG __stdcall TopLevelExceptionFilter(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  const char *v1;
  PVOID ExceptionAddress;
  CHAR Filename[260];

  if ( !byte_520860 )
  {
    byte_520860 = 1;
    if ( !GetModuleFileNameA(0, Filename, 0x104u) )
      Filename[0] = 0;
    ExceptionAddress = ExceptionInfo->ExceptionRecord->ExceptionAddress;
    v1 = (const char *)sub_426FE0();
    sub_4229D0("%s caused %s: 0x%04x", Filename, v1, ExceptionAddress);
    sub_428420();
  }
  return 0;
}
