//----- (00411DE0) --------------------------------------------------------
void __thiscall sub_411DE0(int this, char *a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // ebx

  v3 = (struct _RTL_CRITICAL_SECTION *)(this + 112);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 112));
  strcpy(a2, (const char *)(this + 920));
  LeaveCriticalSection(v3);
}
