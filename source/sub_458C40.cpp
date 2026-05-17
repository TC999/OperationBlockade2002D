//----- (00458C40) --------------------------------------------------------
_DWORD *__stdcall sub_458C40(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *result; // eax
  _DWORD *v4; // edx

  result = a2;
  if ( a2 )
  {
    v4 = a2;
    result = a1;
    do
    {
      if ( result )
      {
        *result = *a3;
        result[1] = a3[1];
      }
      result += 2;
      v4 = (_DWORD *)((char *)v4 - 1);
    }
    while ( v4 );
  }
  return result;
}
