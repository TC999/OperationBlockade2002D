//----- (0044B480) --------------------------------------------------------
_DWORD *__stdcall sub_44B480(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *result; // eax
  _DWORD *v4; // ecx

  result = a2;
  if ( a2 )
  {
    v4 = a2;
    result = a1;
    do
    {
      if ( result )
        *result = *a3;
      ++result;
      v4 = (_DWORD *)((char *)v4 - 1);
    }
    while ( v4 );
  }
  return result;
}
