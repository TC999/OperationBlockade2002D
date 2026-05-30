//----- (00416F80) --------------------------------------------------------
char __cdecl sub_416F80(_DWORD *self, char a2)
{
  int v4; // edi
  bool v5; // zf
  int v6; // edi
  int v7; // ecx
  unsigned __int8 (__cdecl *v8)(_DWORD); // eax
  _DWORD *i; // eax
  int v10; // eax
  int v11; // edx
  int v12; // eax
  int v14; // edi
  _DWORD *v15; // ecx
  _DWORD *v16; // esi
  int v17; // [esp+14h] [ebp+4h]

  v4 = a2 != 0 ? 10 : 1000;
  v5 = a2 == 0;
  v17 = v4;
  if ( !v5 && (int)self[1033] < 6 )
  {
    sub_4164A0(self, 0);
    v6 = 6;
    do
    {
      sub_416350((int)self, self + 6, 0);
      --v6;
    }
    while ( v6 );
    v4 = v17;
    self[30] = self[9];
    self[31] = self[10];
    self[32] = self[11];
  }
  v7 = self[1033];
  if ( v7 >= self[1069] )
    return 1;
  while ( --v4 > 0 )
  {
    v8 = (unsigned __int8 (__cdecl *)(_DWORD))self[2];
    if ( v8 )
    {
      if ( !v8(self[1]) )
      {
        for ( i = &self[5 * self[1033] + 32]; ; i = &self[5 * self[1033] + 32] )
        {
          ++*i;
          if ( (int)self[1033] <= 8 )
          {
            v10 = sub_417160(self);
            v11 = 3 * self[1070];
          }
          else
          {
            v10 = sub_417160(self);
            v11 = self[1070];
          }
          if ( v10 <= v11 )
            break;
          v12 = self[1033];
          if ( v12 <= 6 )
          {
            if ( a2 )
            {
              sub_4164A0(self, 0);
              v14 = 6;
              do
              {
                sub_416350((int)self, self + 6, 0);
                --v14;
              }
              while ( v14 );
              v15 = self + 9;
              v16 = self + 30;
              *v16 = *v15;
              v16[1] = v15[1];
              v16[2] = v15[2];
            }
            return 0;
          }
          sub_4164A0(self, v12 - 1);
        }
      }
    }
    else
    {
      self[1033] = v7 + 1;
      LOBYTE(self[5 * v7 + 33]) = 0;
      sub_417260(self);
    }
    v7 = self[1033];
    if ( v7 >= self[1069] )
      return 1;
  }
  return 0;
}
