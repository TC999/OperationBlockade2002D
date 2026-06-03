//----- (0044B3F0) --------------------------------------------------------
int __cdecl sub_44B3F0(_DWORD *self)
{
  int v2; // ebp
  _DWORD *v3; // esi
  int result; // eax
  int (__cdecl ***v5)(_DWORD, int); // ecx

  v2 = 2024;
  v3 = self + 38;
  do
  {
    if ( *((_BYTE *)v3 - 120) )
    {
      *((_BYTE *)v3 - 120) = 0;
      if ( !*((_BYTE *)v3 - 119) && *v3 )
        sub_409A00(dword_520970, (void *)*v3);
      *v3 = 0;
      result = v3[3];
      if ( result )
      {
        result = sub_4286C0(self, v3[3]);
        v5 = (int (__cdecl ***)(_DWORD, int))v3[3];
        if ( v5 )
          result = (**v5)((_DWORD)(uintptr_t)v5, 1);
        v3[3] = 0;
      }
    }
    v3 += 34;
    --v2;
  }
  while ( v2 );
  return result;
}
