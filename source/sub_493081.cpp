//----- (00493081) --------------------------------------------------------
// AUTO-FIX: Stub for __CxxUnhandledExceptionFilter
#include <windows.h>

static LPTOP_LEVEL_EXCEPTION_FILTER lpfn = NULL;

LONG (__stdcall *sub_493081())(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  LONG (__stdcall *result)(struct _EXCEPTION_POINTERS *);

  result = SetUnhandledExceptionFilter(NULL);
  lpfn = result;
  return result;
}
