//----- (00493081) --------------------------------------------------------
LONG (__stdcall *sub_493081())(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  LONG (__stdcall *result)(struct _EXCEPTION_POINTERS *); // eax

  result = SetUnhandledExceptionFilter(__CxxUnhandledExceptionFilter);
  lpfn = result;
  return result;
}
