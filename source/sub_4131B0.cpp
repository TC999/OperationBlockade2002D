//----- (004131B0) --------------------------------------------------------
_DWORD *__thiscall sub_4131B0(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax

  if ( this[27] )
    sub_422230();
  result = a2;
  this[27] = a2;
  if ( a2 )
    ++*a2;
  return result;
}
