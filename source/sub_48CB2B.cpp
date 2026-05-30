//----- (0048CB2B) --------------------------------------------------------
void __cdecl sub_48CB2B(EXCEPTION_POINTERS *self)
{
  int v1; // [esp-Ch] [ebp-24h] BYREF
  CPPEH_RECORD ms_exc; // [esp+0h] [ebp-18h]

  ms_exc.registration.ScopeTable = stru_49D698;
  ms_exc.registration.ExceptionHandler = _except_handler3;
  ms_exc.registration.Next = (struct _EH3_EXCEPTION_REGISTRATION *)NtCurrentTeb()->NtTib.ExceptionList;
  ms_exc.exc_ptr = self;
  ms_exc.old_esp = (DWORD)&v1;
  ms_exc.registration.TryLevel = 0;
  if ( off_4B2954 )
  {
    ms_exc.registration.TryLevel = 1;
    off_4B2954();
  }
  ms_exc.registration.TryLevel = -1;
  JUMPOUT(0x48CACA);
}
