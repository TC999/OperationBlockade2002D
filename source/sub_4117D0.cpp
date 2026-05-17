//----- (004117D0) --------------------------------------------------------
bool __thiscall sub_4117D0(int this, _DWORD *a2, _WORD *a3, int a4, int a5, int a6)
{
  struct _RTL_CRITICAL_SECTION *v7; // edi
  bool v8; // bl

  v7 = (struct _RTL_CRITICAL_SECTION *)(this + 112);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 112));
  v8 = sub_411480((_DWORD *)this, a2, *(_DWORD *)(this + 88), a3, a4, a5, a6);
  LeaveCriticalSection(v7);
  return v8;
}
