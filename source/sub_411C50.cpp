//----- (00411C50) --------------------------------------------------------
int __thiscall sub_411C50(int this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  char v6; // [esp+0h] [ebp-8h]
  char v7; // [esp+0h] [ebp-8h]

  sub_4229D0(aMpStartingDisc, v6);
  if ( *(_DWORD *)(this + 24) )
  {
    if ( *(_BYTE *)(this + 938) )
    {
      *(_BYTE *)(this + 938) = 0;
      *(_DWORD *)(this + 940) = -1;
      sub_488CEE(0);
    }
    (*(void (__stdcall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 24) + 20))(*(_DWORD *)(this + 24), 0, 2);
    (*(void (__stdcall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 24) + 96))(*(_DWORD *)(this + 24), 0);
    ResetEvent(*(HANDLE *)(this + 984));
    CloseHandle(*(HANDLE *)(this + 984));
    v2 = *(_DWORD *)(this + 24);
    *(_DWORD *)(this + 984) = 0;
    if ( v2 )
    {
      (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      *(_DWORD *)(this + 24) = 0;
    }
    *(_BYTE *)(this + 937) = 0;
    *(_BYTE *)(this + 936) = 0;
  }
  v3 = *(_DWORD *)(this + 92);
  if ( v3 )
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v3 + 8))(*(_DWORD *)(this + 92));
    *(_DWORD *)(this + 92) = 0;
  }
  v4 = *(_DWORD *)(this + 96);
  if ( v4 )
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v4 + 8))(*(_DWORD *)(this + 96));
    *(_DWORD *)(this + 96) = 0;
  }
  sub_411D20(this);
  return sub_4229D0(aMpDisconnectFi, v7);
}
