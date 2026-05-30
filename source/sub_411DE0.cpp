//----- (00411DE0) --------------------------------------------------------
void __cdecl sub_411DE0(int self, char *a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // ebx

  v3 = (struct _RTL_CRITICAL_SECTION *)(self + 112);
  EnterCriticalSection((LPCRITICAL_SECTION)(self + 112));
  strcpy(a2, (const char *)(self + 920));
  LeaveCriticalSection(v3);
}
