//----- (0042A370) --------------------------------------------------------
char __cdecl sub_42A370(_DWORD *self)
{
  if ( *self )
    return 1;
  return (*(_DWORD *)(self[3] + 12) >> 4) & 1;
}
