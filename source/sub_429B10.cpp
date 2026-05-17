//----- (00429B10) --------------------------------------------------------
bool __thiscall sub_429B10(_DWORD *this, _DWORD *a2)
{
  if ( *this < *a2 )
    return 1;
  if ( *this <= *a2 )
    return this[1] < a2[1];
  return 0;
}
