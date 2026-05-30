//----- (0040FD50) --------------------------------------------------------
int __cdecl sub_40FD50(struct _RTL_CRITICAL_SECTION *self, char **a2, int a3)
{
  ULONG_PTR SpinCount; // edx
  int i; // esi
  char *v7; // ebx
  struct _RTL_CRITICAL_SECTION *lpCriticalSection; // [esp+10h] [ebp-4h]

  lpCriticalSection = self + 40;
  EnterCriticalSection(self + 40);
  SpinCount = self[39].SpinCount;
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
