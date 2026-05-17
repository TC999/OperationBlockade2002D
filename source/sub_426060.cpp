//----- (00426060) --------------------------------------------------------
char __thiscall sub_426060(int this, int a2, int ArgList)
{
  int v4; // eax
  int v5; // eax
  int v6; // edi
  int v7; // ecx
  int v8; // eax
  int v9; // ebp
  int v10; // edi
  int v11; // eax
  _DWORD *v12; // eax
  const char **v13; // ecx

  if ( !a2 )
    goto LABEL_23;
  v4 = *(_DWORD *)(a2 + 36);
  if ( v4 == 6 )
  {
    v5 = sub_421B20(*(_DWORD *)(a2 + 108));
    v6 = *(_DWORD *)(this + 64) - *(_DWORD *)(a2 + 88);
    v7 = v5 - 2;
    if ( v5 == 2 )
      v8 = 1;
    else
      v8 = v6 / v7;
    v9 = *(_DWORD *)(a2 + 128);
    if ( v9 + v8 >= *(_DWORD *)(a2 + 132) - 1 )
    {
      v10 = *(_DWORD *)(a2 + 132) - 1;
    }
    else if ( v7 )
    {
      v10 = v6 / v7 + v9;
    }
    else
    {
      v10 = v9 + 1;
    }
    LOBYTE(v11) = (*(int (__thiscall **)(_DWORD, int, _DWORD, int))(**(_DWORD **)(this + 52) + 48))(
                    *(_DWORD *)(this + 52),
                    a2,
                    *(_DWORD *)(a2 + 124),
                    v10);
    if ( (_BYTE)v11 )
    {
      *(_DWORD *)(a2 + 124) = v10;
      *(_BYTE *)(a2 + 136) = 1;
      LOBYTE(v11) = (unsigned __int8)sub_4229D0(
                                       "UI: button %d clicked listbox %s item %d",
                                       ArgList,
                                       (const char *)a2,
                                       v10);
    }
    return v11;
  }
  if ( v4 == 3 )
  {
    LOBYTE(v11) = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 52) + 44))(
                    *(_DWORD *)(this + 52),
                    a2,
                    ArgList);
    if ( (_BYTE)v11 )
    {
      v11 = *(_DWORD *)(this + 76);
      if ( v11 != a2 )
      {
        if ( v11 )
        {
          v12 = *(_DWORD **)(v11 + 112);
          if ( v12 )
            sub_421280(v12);
        }
        *(_DWORD *)(this + 76) = a2;
        v13 = *(const char ***)(a2 + 112);
        if ( v13 )
          sub_4211E0(v13, 95);
        LOBYTE(v11) = (unsigned __int8)sub_4229D0("UI: button %d clicked editbox %s", ArgList, (const char *)a2);
      }
      *(_DWORD *)(this + 76) = a2;
    }
  }
  else
  {
LABEL_23:
    sub_4229D0("UI: button %d clicked %s", ArgList, (const char *)a2);
    LOBYTE(v11) = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 52) + 44))(
                    *(_DWORD *)(this + 52),
                    a2,
                    ArgList);
    if ( (_BYTE)v11 )
    {
      if ( a2 )
      {
        v11 = *(_DWORD *)(a2 + 36);
        if ( v11 == 5 || v11 == 4 )
        {
          LOBYTE(v11) = *(_BYTE *)(a2 + 172);
          *(_BYTE *)(a2 + 172) = (_BYTE)v11 == 0;
        }
      }
    }
  }
  return v11;
}
