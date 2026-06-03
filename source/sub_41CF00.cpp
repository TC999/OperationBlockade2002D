//----- (0041CF00) --------------------------------------------------------
char __cdecl sub_41CF00(int self)
{
  int v2; // eax

  if ( *(_BYTE *)(self + 3) )
  {
    v2 = (int)(unsigned __int8)sub_41C940(self);
    *(_BYTE *)(self + 1) = 0;
  }
  else if ( *(_BYTE *)(self + 2) )
  {
    v2 = (int)(unsigned __int8)sub_41D1A0((char *)self);
    *(_BYTE *)(self + 1) = 0;
  }
  else
  {
    v2 = *(_DWORD *)(self + 32);
    if ( v2 )
    {
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v2 + 72))(*(_DWORD *)(self + 32));
      v2 = (int)(unsigned __int8)(*(int (__stdcall **)(_DWORD, _DWORD))(**(_DWORD **)(self + 32) + 52))(*(_DWORD *)(self + 32), 0);
    }
    *(_BYTE *)(self + 1) = 0;
  }
  return v2;
}
