//----- (0042A370) --------------------------------------------------------
char __thiscall sub_42A370(_DWORD *this)
{
  int v1; // eax

  if ( *this )
    LOBYTE(v1) = 1;
  else
    return (*(_DWORD *)(this[3] + 12) >> 4) & 1;
  return v1;
}
