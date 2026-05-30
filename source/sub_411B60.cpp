//----- (00411B60) --------------------------------------------------------
_DWORD *__cdecl sub_411B60(int self, int a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // edi
  _DWORD *v4; // esi

  v3 = (struct _RTL_CRITICAL_SECTION *)(self + 112);
  EnterCriticalSection((LPCRITICAL_SECTION)(self + 112));
  v4 = *(_DWORD **)(self + 136);
  if ( v4 )
  {
    while ( v4[2] != a2 )
    {
      v4 = (_DWORD *)v4[2077];
      if ( !v4 )
      {
        LeaveCriticalSection(v3);
        return 0;
      }
    }
    ++*v4;
  }
  LeaveCriticalSection(v3);
  return v4;
}
