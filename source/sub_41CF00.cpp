//----- (0041CF00) --------------------------------------------------------
char __thiscall sub_41CF00(int this)
{
  int v2; // eax

  if ( *(_BYTE *)(this + 3) )
  {
    LOBYTE(v2) = sub_41C940(this);
    *(_BYTE *)(this + 1) = 0;
  }
  else if ( *(_BYTE *)(this + 2) )
  {
    LOBYTE(v2) = sub_41D1A0(this);
    *(_BYTE *)(this + 1) = 0;
  }
  else
  {
    v2 = *(_DWORD *)(this + 32);
    if ( v2 )
    {
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v2 + 72))(*(_DWORD *)(this + 32));
      LOBYTE(v2) = (*(int (__stdcall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 32) + 52))(*(_DWORD *)(this + 32), 0);
    }
    *(_BYTE *)(this + 1) = 0;
  }
  return v2;
}
