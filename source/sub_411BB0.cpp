//----- (00411BB0) --------------------------------------------------------
void __thiscall sub_411BB0(int self, int a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // ebx
  int *v4; // esi
  int *v5; // eax
  int v6; // ecx

  v3 = (struct _RTL_CRITICAL_SECTION *)(self + 112);
  EnterCriticalSection((LPCRITICAL_SECTION)(self + 112));
  v4 = *(int **)(self + 136);
  v5 = 0;
  if ( v4 )
  {
    while ( v4[2] != a2 )
    {
      v5 = v4;
      v4 = (int *)v4[2077];
      if ( !v4 )
        goto LABEL_10;
    }
    v6 = *v4 - 1;
    *v4 = v6;
    if ( v6 <= 0 )
    {
      if ( v5 )
        v5[2077] = v4[2077];
      else
        *(_DWORD *)(self + 136) = v4[2077];
      InterlockedDecrement((volatile LONG *)(self + 100));
      sub_4119F0((int)v4);
      sub_4885A6(v4);
    }
  }
LABEL_10:
  LeaveCriticalSection(v3);
}
