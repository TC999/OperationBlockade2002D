//----- (0043AF30) --------------------------------------------------------
char __thiscall sub_43AF30(int self, char *String1, int a3)
{
  int v5; // eax
  int v6; // eax
  const char *v7; // eax
  int v8; // ecx
  int v9; // ecx
  int v10; // edx
  int v11; // ecx
  int v12; // esi

  if ( !String1 )
    return 1;
  if ( !_strcmpi(String1, aAddbutton) )
  {
    sub_4261C0(*(_DWORD **)(self + 40), aAddplayer, 0);
    return 1;
  }
  if ( !_strcmpi(String1, aDeletebutton) )
  {
    v5 = *(_DWORD *)(*(_DWORD *)(self + 52) + 124);
    if ( v5 > -1 && v5 < *(_DWORD *)(self + 48) )
    {
      strcpy(byte_521580, *(const char **)(*(_DWORD *)(self + 44) + 4 * v5));
      sub_4261C0(*(_DWORD **)(self + 40), aDeletechar, 0);
      return 1;
    }
    return 1;
  }
  if ( !_strcmpi(String1, aCancelbutton) )
  {
    sub_4261C0(*(_DWORD **)(self + 40), aMainmenu, 0);
    return 1;
  }
  if ( _strcmpi(String1, aOkbutton) )
  {
    if ( _strcmpi(String1, aArrowup) )
    {
      if ( _strcmpi(String1, aArrowdown) )
        return 1;
      v7 = sub_424350((_DWORD *)self, aSavedgames_0);
      v10 = *((_DWORD *)v7 + 30);
      v11 = v10 + *((_DWORD *)v7 + 32);
      v12 = *((_DWORD *)v7 + 33) - 1;
      *((_DWORD *)v7 + 32) = v11;
      if ( v11 <= v12 )
      {
LABEL_20:
        *((_BYTE *)v7 + 136) = 1;
        sub_43B330(self);
        return 1;
      }
      v9 = v11 - v10;
    }
    else
    {
      v7 = sub_424350((_DWORD *)self, aSavedgames_0);
      v8 = *((_DWORD *)v7 + 32) - *((_DWORD *)v7 + 30);
      *((_DWORD *)v7 + 32) = v8;
      v9 = v8 < 0 ? 0 : v8;
    }
    *((_DWORD *)v7 + 32) = v9;
    goto LABEL_20;
  }
  v6 = *(_DWORD *)(*(_DWORD *)(self + 52) + 124);
  if ( v6 > -1 && v6 < *(_DWORD *)(self + 48) )
  {
    strcpy(String, *(const char **)(*(_DWORD *)(self + 44) + 4 * v6));
    sub_422E60(AppName, aUsername, String);
    sub_4229D0("UI NameEntry: current name=%s", String);
    sub_45E720(String, 1);
    sub_45E760(*(_DWORD *)(dword_520970 + 280));
    sub_4261C0(*(_DWORD **)(self + 40), aLevelselect, 0);
    return 1;
  }
  return 1;
}
