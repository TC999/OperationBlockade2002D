//----- (00493092) --------------------------------------------------------
// AUTO-FIX: Use static lpfn from sub_493081
#include <windows.h>

static LPTOP_LEVEL_EXCEPTION_FILTER lpfn = NULL;

LPTOP_LEVEL_EXCEPTION_FILTER sub_493092()
{
  return SetUnhandledExceptionFilter(lpfn);
}
