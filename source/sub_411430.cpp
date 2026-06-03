//----- (00411430) --------------------------------------------------------
_DWORD *__cdecl sub_411430(_DWORD *self, int a2)
{
  _DWORD *v3; // edi
  _DWORD *result; // eax
  _DWORD *v5; // esi

  v3 = 0;
  result = (_DWORD *)self[5];
  while ( result )
  {
    if ( *result == a2 )
    {
      v5 = (_DWORD *)result[3];
      if ( v3 )
        v3[3] = (uint32)(uintptr_t)v5;
      else
        self[5] = (uint32)(uintptr_t)v5;
      sub_4885A6(result);
      result = v5;
    }
    else
    {
      v3 = result;
      result = (_DWORD *)result[3];
    }
  }
  return result;
}
