//----- (0048CB2B) --------------------------------------------------------
#include <windows.h>

extern "C" {
void *_except_handler3 = 0;
}

static int stru_49D698[4] = {0};

void __cdecl sub_48CB2B(EXCEPTION_POINTERS *self)
{
  int v1; // [esp-Ch] [ebp-24h] BYREF
  CPPEH_RECORD ms_exc; // [esp+0h] [ebp-18h]

  *((void**)&ms_exc + 4) = stru_49D698;
  *((void**)&ms_exc + 3) = &_except_handler3;
  *((void**)&ms_exc + 2) = 0;
  ms_exc.exc_ptr = (int)self;
  ms_exc.old_esp = (DWORD)&v1;
  *((int*)&ms_exc + 5) = 0;
  if ( off_4B2954 )
  {
    *((int*)&ms_exc + 5) = 1;
    ((void(*)())off_4B2954)();
  }
  *((int*)&ms_exc + 5) = -1;
}
