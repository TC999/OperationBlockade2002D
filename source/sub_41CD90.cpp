//----- (0041CD90) --------------------------------------------------------
char __thiscall sub_41CD90(int self)
{
  int v2; // eax
  int v3; // edi
  BOOL v4; // ecx

  LOBYTE(v2) = *(_BYTE *)(self + 3);
  if ( (_BYTE)v2 )
    LOBYTE(v2) = sub_41CA40(self);
  v3 = *(_DWORD *)(self + 32);
  *(_BYTE *)(self + 1) = 1;
  if ( v3 )
  {
    (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)v3 + 60))(v3, (__int64)(*(float *)(self + 12) * 10000.0 - 10000.0));
    v4 = *(_BYTE *)(self + 2) || *(_BYTE *)self;
    v2 = (*(int (__stdcall **)(_DWORD, _DWORD, _DWORD, BOOL))(**(_DWORD **)(self + 32) + 48))(
           *(_DWORD *)(self + 32),
           0,
           0,
           v4);
    if ( v2 == -2005401450 )
    {
      v2 = (*(int (__stdcall **)(_DWORD))(**(_DWORD **)(self + 32) + 80))(*(_DWORD *)(self + 32));
      if ( v2 >= 0 )
      {
        if ( *(_BYTE *)(self + 2) )
        {
          sub_41CE60(*(_DWORD *)(self + 32));
          (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, int))(**(_DWORD **)(self + 32) + 48))(
            *(_DWORD *)(self + 32),
            0,
            0,
            1);
          LOBYTE(v2) = sub_41C740((_DWORD *)self);
        }
        else
        {
          if ( sub_41CA40(self) )
            (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, bool))(**(_DWORD **)(self + 32) + 48))(
              *(_DWORD *)(self + 32),
              0,
              0,
              *(_BYTE *)self != 0);
          LOBYTE(v2) = sub_41C740((_DWORD *)self);
        }
      }
    }
  }
  else
  {
    *(_BYTE *)(self + 1) = 0;
  }
  return v2;
}
