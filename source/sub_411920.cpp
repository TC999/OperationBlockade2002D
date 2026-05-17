//----- (00411920) --------------------------------------------------------
void __thiscall sub_411920(int this, int **a2, int a3)
{
  struct _RTL_CRITICAL_SECTION *v4; // ebx
  int *v5; // esi
  int *v6; // edx
  int v7; // eax
  int **v8; // ecx
  int v9; // eax
  int *v10; // ebx
  int *v11; // [esp+10h] [ebp-8h]
  struct _RTL_CRITICAL_SECTION *v12; // [esp+14h] [ebp-4h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(this + 112);
  v12 = (struct _RTL_CRITICAL_SECTION *)(this + 112);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 112));
  v5 = *(int **)(this + 136);
  v6 = 0;
  v11 = 0;
  if ( v5 )
  {
    while ( 1 )
    {
      v7 = 0;
      if ( a3 <= 0 )
        goto LABEL_8;
      v8 = a2;
      while ( *v8 != v5 )
      {
        ++v7;
        ++v8;
        if ( v7 >= a3 )
          goto LABEL_8;
      }
      v9 = *v5 - 1;
      *v5 = v9;
      if ( v9 > 0 )
      {
LABEL_8:
        v11 = v5;
        v5 = (int *)v5[2077];
      }
      else
      {
        if ( v6 )
          v6[2077] = v5[2077];
        else
          *(_DWORD *)(this + 136) = v5[2077];
        v10 = v5;
        v5 = (int *)v5[2077];
        sub_4119F0(v10);
        sub_4885A6(v10);
        InterlockedDecrement((volatile LONG *)(this + 100));
      }
      if ( !v5 )
        break;
      v6 = v11;
    }
    v4 = v12;
  }
  memset(a2, 0, 4 * a3);
  LeaveCriticalSection(v4);
}
