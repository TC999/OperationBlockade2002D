//----- (004072A0) --------------------------------------------------------
char __cdecl sub_4072A0(_DWORD *self, int a2, int a3, char a4)
{
  _BYTE *v5; // esi
  int v6; // eax
  int v7; // esi
  int v8; // ebx

  v5 = sub_407190(self, a2, 1);
  sub_407120(self, a2);
  v5[70] = 1;
  *((_DWORD *)v5 + 18) = a3;
  LOBYTE(v6) = a4;
  if ( a4 )
  {
    v6 = self[5];
    v7 = a2 + 1;
    if ( a2 + 1 < v6 )
    {
      v8 = 172 * v7;
      do
      {
        v6 = *(_DWORD *)(self[7] + 4);
        if ( *(_DWORD *)(v6 + v8 + 28) < a2 )
          break;
        sub_4072A0(v7, a3, 0);
        v6 = self[5];
        ++v7;
        v8 += 172;
      }
      while ( v7 < v6 );
    }
  }
  return v6;
}
