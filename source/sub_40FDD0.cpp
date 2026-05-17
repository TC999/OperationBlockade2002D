//----- (0040FDD0) --------------------------------------------------------
_DWORD *__thiscall sub_40FDD0(int this, _DWORD *a2, char *String2)
{
  struct _RTL_CRITICAL_SECTION *v4; // ebp
  int v5; // esi
  int v6; // esi
  _DWORD *result; // eax
  char *v8; // [esp+14h] [ebp-18h]
  int v9; // [esp+28h] [ebp-4h] BYREF

  v9 = 0;
  v4 = (struct _RTL_CRITICAL_SECTION *)(this + 960);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 960));
  v5 = *(_DWORD *)(this + 956);
  if ( !v5 )
  {
LABEL_4:
    LeaveCriticalSection(v4);
    v8 = aHostNotFound;
LABEL_13:
    sub_403A30(a2, 1, v8);
    return a2;
  }
  while ( _strcmpi((const char *)v5, String2) )
  {
    v5 = *(_DWORD *)(v5 + 276);
    if ( !v5 )
      goto LABEL_4;
  }
  v6 = (*(int (__stdcall **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int *, _DWORD))(**(_DWORD **)(this + 24) + 24))(
         *(_DWORD *)(this + 24),
         *(_DWORD *)(v5 + 260),
         *(_DWORD *)(v5 + 264),
         *(_DWORD *)(v5 + 268),
         0,
         0,
         0,
         0,
         0,
         0,
         &v9,
         0);
  LeaveCriticalSection(v4);
  if ( v6 < 0 )
  {
    if ( v6 == -2146073072 )
    {
      v8 = aSessionIsFull;
    }
    else if ( v6 == -2146074016 )
    {
      v8 = aHostRejectedTh;
    }
    else
    {
      v8 = aConnectionFail;
    }
    goto LABEL_13;
  }
  *(_BYTE *)(this + 936) = 0;
  *(_BYTE *)(this + 937) = 0;
  *(_BYTE *)(this + 938) = 1;
  *(_DWORD *)(this + 940) = 0;
  sub_488CEE(0);
  result = a2;
  *a2 = 0;
  a2[1] = 0;
  return result;
}
