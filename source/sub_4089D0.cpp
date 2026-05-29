//----- (004089D0) --------------------------------------------------------
int __thiscall sub_4089D0(_DWORD *self, int a2, int a3)
{
  int v4; // edi
  int result; // eax
  int v6; // ebp
  int v7; // eax
  _BYTE *v8; // eax

  v4 = 0;
  result = self[5];
  if ( result > 0 )
  {
    v6 = 0;
    do
    {
      v7 = *(_DWORD *)(*(_DWORD *)(self[7] + 4) + v6 + 52);
      if ( v7 )
      {
        if ( *(_DWORD *)(v7 + 84) == a2 )
        {
          v8 = sub_407190(self, v4, 1);
          v8[84] = 1;
          *((_DWORD *)v8 + 22) = a3;
        }
      }
      result = self[5];
      ++v4;
      v6 += 172;
    }
    while ( v4 < result );
  }
  return result;
}
