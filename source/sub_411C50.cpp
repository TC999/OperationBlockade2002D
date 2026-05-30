//----- (00411C50) --------------------------------------------------------
int __cdecl sub_411C50(int self)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  char v6; // [esp+0h] [ebp-8h]
  char v7; // [esp+0h] [ebp-8h]

  sub_4229D0(aMpStartingDisc, v6);
  if ( *(_DWORD *)(self + 24) )
  {
    if ( *(_BYTE *)(self + 938) )
    {
      *(_BYTE *)(self + 938) = 0;
      *(_DWORD *)(self + 940) = -1;
      sub_488CEE(0);
    }
    (*(void (__stdcall **)(_DWORD, _DWORD, int))(**(_DWORD **)(self + 24) + 20))(*(_DWORD *)(self + 24), 0, 2);
    (*(void (__stdcall **)(_DWORD, _DWORD))(**(_DWORD **)(self + 24) + 96))(*(_DWORD *)(self + 24), 0);
    ResetEvent(*(HANDLE *)(self + 984));
    CloseHandle(*(HANDLE *)(self + 984));
    v2 = *(_DWORD *)(self + 24);
    *(_DWORD *)(self + 984) = 0;
    if ( v2 )
    {
      (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      *(_DWORD *)(self + 24) = 0;
    }
    *(_BYTE *)(self + 937) = 0;
    *(_BYTE *)(self + 936) = 0;
  }
  v3 = *(_DWORD *)(self + 92);
  if ( v3 )
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v3 + 8))(*(_DWORD *)(self + 92));
    *(_DWORD *)(self + 92) = 0;
  }
  v4 = *(_DWORD *)(self + 96);
  if ( v4 )
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v4 + 8))(*(_DWORD *)(self + 96));
    *(_DWORD *)(self + 96) = 0;
  }
  sub_411D20(self);
  return sub_4229D0(aMpDisconnectFi, v7);
}
