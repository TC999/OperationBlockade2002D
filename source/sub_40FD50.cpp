//----- (0040FD50) --------------------------------------------------------
int __thiscall sub_40FD50(struct _RTL_CRITICAL_SECTION *this, char **a2, int a3)
{
  ULONG_PTR SpinCount; // edx
  int i; // esi
  char *v7; // ebx
  struct _RTL_CRITICAL_SECTION *lpCriticalSection; // [esp+10h] [ebp-4h]

  lpCriticalSection = this + 40;
  EnterCriticalSection(this + 40);
  SpinCount = this[39].SpinCount;
  for ( i = 0; SpinCount; SpinCount = *(_DWORD *)(SpinCount + 276) )
  {
    if ( i >= a3 )
      break;
    v7 = *a2;
    ++i;
    ++a2;
    strcpy(v7, (const char *)SpinCount);
  }
  LeaveCriticalSection(lpCriticalSection);
  return i;
}
