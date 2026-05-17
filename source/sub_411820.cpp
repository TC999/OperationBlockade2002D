//----- (00411820) --------------------------------------------------------
char __thiscall sub_411820(int this, __int16 a2, int a3, unsigned int a4)
{
  _DWORD *v5; // ebx
  _DWORD *v6; // eax
  int v7; // ecx

  *(_WORD *)a3 = a2;
  *(_DWORD *)(a3 + 2) = 0;
  *(_DWORD *)(a3 + 2) = 8;
  v5 = (_DWORD *)sub_40E8E0(20);
  sub_40F4C0(v5, *(_DWORD *)(this + 84), a4, (_WORD *)a3);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 44));
  v6 = *(_DWORD **)(this + 28);
  if ( v6 )
  {
    *(_DWORD *)(this + 28) = v6[1];
  }
  else
  {
    v6 = operator new(8u);
    *v6 = 0;
  }
  v6[1] = 0;
  *v6 = v5;
  v6[1] = 0;
  if ( *(_DWORD *)(this + 32) )
    *(_DWORD *)(*(_DWORD *)(this + 36) + 4) = v6;
  else
    *(_DWORD *)(this + 32) = v6;
  v7 = *(_DWORD *)(this + 40) + 1;
  *(_DWORD *)(this + 36) = v6;
  *(_DWORD *)(this + 40) = v7;
  LeaveCriticalSection((LPCRITICAL_SECTION)(this + 44));
  return 1;
}
