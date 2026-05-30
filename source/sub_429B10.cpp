//----- (00429B10) --------------------------------------------------------
bool __cdecl sub_429B10(_DWORD *self, _DWORD *a2)
{
  if ( *self < *a2 )
    return 1;
  if ( *self <= *a2 )
    return self[1] < a2[1];
  return 0;
}
