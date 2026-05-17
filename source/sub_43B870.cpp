//----- (0043B870) --------------------------------------------------------
char __thiscall sub_43B870(int this, char *String1, int a3)
{
  int v5; // eax
  const char *v6; // eax
  int v7; // ecx
  int v8; // ecx
  int v9; // edx
  int v10; // ecx
  int v11; // edi

  if ( !String1 )
    return 1;
  if ( !_strcmpi(String1, aCancelbutton) )
  {
    sub_4261C0(*(_DWORD **)(this + 40), aNameentry, 0);
    return 1;
  }
  if ( !_strcmpi(String1, aOkbutton) )
  {
    v5 = *((_DWORD *)sub_424350((_DWORD *)this, aLevellist) + 31);
    byte_5216E4 = 0;
    *(_DWORD *)dword_5216E0 = v5;
    sub_4261C0(*(_DWORD **)(this + 40), aObjectives, 0);
    sub_4229D0("UI LevelSelect: launching mission %d", *(_DWORD *)dword_5216E0);
    return 1;
  }
  if ( !_strcmpi(String1, aLevelup) )
  {
    v6 = sub_424350((_DWORD *)this, aLevellist);
    v7 = *((_DWORD *)v6 + 32) - *((_DWORD *)v6 + 30);
    *((_DWORD *)v6 + 32) = v7;
    v8 = v7 < 0 ? 0 : v7;
    goto LABEL_11;
  }
  if ( !_strcmpi(String1, aLeveldown) )
  {
    v6 = sub_424350((_DWORD *)this, aLevellist);
    v9 = *((_DWORD *)v6 + 30);
    v10 = v9 + *((_DWORD *)v6 + 32);
    v11 = *((_DWORD *)v6 + 33) - 1;
    *((_DWORD *)v6 + 32) = v10;
    if ( v10 <= v11 )
    {
LABEL_12:
      *((_BYTE *)v6 + 136) = 1;
      sub_43B9E0(this);
      return 1;
    }
    v8 = v10 - v9;
LABEL_11:
    *((_DWORD *)v6 + 32) = v8;
    goto LABEL_12;
  }
  return 1;
}
