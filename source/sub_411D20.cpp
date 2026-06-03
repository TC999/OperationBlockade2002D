//----- (00411D20) --------------------------------------------------------
int __cdecl sub_411D20(_DWORD *self)
{
  struct _RTL_CRITICAL_SECTION *v2; // ebx
  int *v3; // eax
  int v4; // edi
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  int result; // eax
  int v9; // edi
  int v10; // eax
  int v11; // eax

  v2 = (struct _RTL_CRITICAL_SECTION *)(self + 11);
  while ( 1 )
  {
    EnterCriticalSection(v2);
    v3 = (int *)self[8];
    if ( !v3 )
      break;
    v4 = *v3;
    v5 = v3[1];
    *v3 = 0;
    v3[1] = self[7];
    self[7] = (uint32)(uintptr_t)(v3);
    self[8] = v5;
    if ( !v5 )
      self[9] = 0;
    LeaveCriticalSection(v2);
    if ( !v4 )
      goto LABEL_12;
    if ( *(_WORD *)(v4 + 12) == 0xFF00 )
    {
      v6 = *(_DWORD *)(v4 + 16);
      if ( v6 )
      {
        v7 = *(_DWORD *)(v6 + 6);
        if ( v7 )
          sub_411BB0((int)self, *(_DWORD *)(v7 + 8));
      }
    }
    sub_4113D0(v4);
  }
  LeaveCriticalSection(v2);
LABEL_12:
  while ( 1 )
  {
    result = self[18];
    if ( result <= 0 )
      break;
    --result;
    v9 = *(_DWORD *)(self[17] + 4 * result);
    self[18] = result;
    if ( !v9 )
      break;
    if ( *(_WORD *)(v9 + 12) == 0xFF00 )
    {
      v10 = *(_DWORD *)(v9 + 16);
      if ( v10 )
      {
        v11 = *(_DWORD *)(v10 + 6);
        if ( v11 )
          sub_411BB0((int)self, *(_DWORD *)(v11 + 8));
      }
    }
    sub_4113D0(v9);
  }
  return result;
}
