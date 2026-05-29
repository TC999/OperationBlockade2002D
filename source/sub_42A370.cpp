//----- (0042A370) --------------------------------------------------------
char __thiscall sub_42A370(_DWORD *self)
{
  int v1; // eax

  if ( *self )
    LOBYTE(v1) = 1;
  else
    return (*(_DWORD *)(self[3] + 12) >> 4) & 1;
  return v1;
}
