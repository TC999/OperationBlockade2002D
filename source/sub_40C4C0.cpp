//----- (0040C4C0) --------------------------------------------------------
_DWORD *__cdecl sub_40C4C0(_DWORD *self, _DWORD *a2)
{
  int v3; // ebp
  int v4; // eax
  _DWORD *v5; // ebx
  int v6; // edi
  _DWORD *result; // eax
  char v8; // cl
  int v9; // edi
  int v10; // ebx
  int v11; // ecx
  int v12; // edx
  char v13; // [esp+0h] [ebp-30h]
  char v14; // [esp+13h] [ebp-1Dh]
  _DWORD v15[2]; // [esp+14h] [ebp-1Ch] BYREF
  _DWORD *v16; // [esp+1Ch] [ebp-14h]
  _DWORD v17[4]; // [esp+20h] [ebp-10h] BYREF

  v3 = 0;
  v4 = self[4];
  v5 = self + 69;
  self[71] = 0;
  self[70] = 0;
  v16 = self + 69;
  self[69] = 0;
  if ( v4 )
  {
    v14 = 0;
    if ( (*(int (__stdcall **)(_DWORD, int, _DWORD *))(*(_DWORD *)self[4] + 36))(self[4], 16, v17) )
    {
      v14 = 1;
      v6 = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)self[4] + 28))(self[4]);
      self[72] = 0;
      *v5 = 0;
      v5[1] = 0;
      v5[2] = 0;
      if ( v6 < 0 )
      {
        sub_403A30(a2, v6, aCanTAcquireMou);
        return a2;
      }
      sub_4229D0(aReacquiredMous, v13);
      sub_40C4C0(v15);
      sub_488CEE((LPVOID)v15[1]);
    }
    do
    {
      v8 = *((_BYTE *)self + v3 + 288);
      LOBYTE(v15[0]) = *((_BYTE *)&v17[3] + v3) >> 7;
      if ( LOBYTE(v15[0]) != v8 )
      {
        *((_BYTE *)self + v3 + 288) = v15[0];
        v9 = self[1];
        if ( v9 )
        {
          v10 = v15[0];
          do
          {
            if ( !(*(int (__cdecl **)(_DWORD, int, int))v9)(*(_DWORD *)(v9 + 4), v3, v10) )
              break;
            v9 = *(_DWORD *)(v9 + 8);
          }
          while ( v9 );
          v5 = v16;
        }
      }
      ++v3;
    }
    while ( v3 < 4 );
    if ( !v14 )
    {
      v11 = v17[1];
      v12 = v17[2];
      *v5 = v17[0];
      self[70] = v11;
      self[71] = v12;
    }
  }
  result = a2;
  *a2 = 0;
  a2[1] = 0;
  return result;
}
