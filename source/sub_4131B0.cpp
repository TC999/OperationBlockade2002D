//----- (004131B0) --------------------------------------------------------
_DWORD *__thiscall sub_4131B0(_DWORD *self, _DWORD *a2)
{
  _DWORD *result; // eax

  if ( self[27] )
    sub_422230();
  result = a2;
  self[27] = a2;
  if ( a2 )
    ++*a2;
  return result;
}
