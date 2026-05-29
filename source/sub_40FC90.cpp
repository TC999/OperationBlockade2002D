//----- (0040FC90) --------------------------------------------------------
int __thiscall sub_40FC90(struct _RTL_CRITICAL_SECTION *self)
{
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // eax
  struct _RTL_CRITICAL_SECTION *v3; // edi
  ULONG_PTR SpinCount; // esi
  ULONG_PTR v5; // edi
  int v6; // eax
  int v7; // eax
  char v9; // [esp+4h] [ebp-14h]
  char v10; // [esp+4h] [ebp-14h]

  DebugInfo = self[1].DebugInfo;
  if ( DebugInfo )
    (*(void (__stdcall **)(PRTL_CRITICAL_SECTION_DEBUG, _DWORD, int))(*(_DWORD *)&DebugInfo->Type + 20))(
      DebugInfo,
      0,
      2);
  v3 = self + 40;
  EnterCriticalSection(self + 40);
  sub_4229D0(aStopsearchfori, v9);
  SpinCount = self[39].SpinCount;
  if ( SpinCount )
  {
    do
    {
      v5 = *(_DWORD *)(SpinCount + 276);
      sub_4885A6(*(LPVOID *)(SpinCount + 260));
      v6 = *(_DWORD *)(SpinCount + 264);
      if ( v6 )
      {
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v6 + 8))(*(_DWORD *)(SpinCount + 264));
        *(_DWORD *)(SpinCount + 264) = 0;
      }
      v7 = *(_DWORD *)(SpinCount + 268);
      if ( v7 )
      {
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v7 + 8))(*(_DWORD *)(SpinCount + 268));
        *(_DWORD *)(SpinCount + 268) = 0;
      }
      sub_4885A6((LPVOID)SpinCount);
      SpinCount = v5;
    }
    while ( v5 );
    v3 = self + 40;
  }
  self[39].SpinCount = 0;
  LeaveCriticalSection(v3);
  return sub_4229D0(aStopsearchfori_0, v10);
}
