//----- (00458CD0) --------------------------------------------------------
_DWORD *__cdecl sub_458CD0(_DWORD *a1, _DWORD *a2)
{
  _DWORD *result; // eax

  result = a1;
  if ( a1 )
  {
    *a1 = *a2;
    a1[1] = a2[1];
  }
  return result;
}
