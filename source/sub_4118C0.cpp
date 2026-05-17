//----- (004118C0) --------------------------------------------------------
int __thiscall sub_4118C0(int this, _DWORD *a2, int a3)
{
  struct _RTL_CRITICAL_SECTION *v4; // ebx
  int v5; // eax
  int i; // edi

  v4 = (struct _RTL_CRITICAL_SECTION *)(this + 112);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 112));
  v5 = *(_DWORD *)(this + 136);
  for ( i = 0; v5; v5 = *(_DWORD *)(v5 + 8308) )
  {
    if ( i >= a3 )
      break;
    if ( !*(_BYTE *)(v5 + 4) )
    {
      *a2++ = v5;
      ++*(_DWORD *)v5;
      ++i;
    }
  }
  LeaveCriticalSection(v4);
  return i;
}
