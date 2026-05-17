//----- (0041CD90) --------------------------------------------------------
char __thiscall sub_41CD90(int this)
{
  int v2; // eax
  int v3; // edi
  BOOL v4; // ecx

  LOBYTE(v2) = *(_BYTE *)(this + 3);
  if ( (_BYTE)v2 )
    LOBYTE(v2) = sub_41CA40(this);
  v3 = *(_DWORD *)(this + 32);
  *(_BYTE *)(this + 1) = 1;
  if ( v3 )
  {
    (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)v3 + 60))(v3, (__int64)(*(float *)(this + 12) * 10000.0 - 10000.0));
    v4 = *(_BYTE *)(this + 2) || *(_BYTE *)this;
    v2 = (*(int (__stdcall **)(_DWORD, _DWORD, _DWORD, BOOL))(**(_DWORD **)(this + 32) + 48))(
           *(_DWORD *)(this + 32),
           0,
           0,
           v4);
    if ( v2 == -2005401450 )
    {
      v2 = (*(int (__stdcall **)(_DWORD))(**(_DWORD **)(this + 32) + 80))(*(_DWORD *)(this + 32));
      if ( v2 >= 0 )
      {
        if ( *(_BYTE *)(this + 2) )
        {
          sub_41CE60(*(_DWORD *)(this + 32));
          (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, int))(**(_DWORD **)(this + 32) + 48))(
            *(_DWORD *)(this + 32),
            0,
            0,
            1);
          LOBYTE(v2) = sub_41C740((_DWORD *)this);
        }
        else
        {
          if ( sub_41CA40(this) )
            (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, bool))(**(_DWORD **)(this + 32) + 48))(
              *(_DWORD *)(this + 32),
              0,
              0,
              *(_BYTE *)this != 0);
          LOBYTE(v2) = sub_41C740((_DWORD *)this);
        }
      }
    }
  }
  else
  {
    *(_BYTE *)(this + 1) = 0;
  }
  return v2;
}
