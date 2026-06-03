extern char aVolume[];

//----- (0043AC00) --------------------------------------------------------
char __cdecl sub_43AC00(int self, char *String1, int a3)
{
  int v5; // ecx
  _DWORD *v6; // eax
  int v7; // ecx
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // esi
  int v12; // [esp+8h] [ebp-18h] BYREF
  int v13; // [esp+Ch] [ebp-14h]
  int v14; // [esp+10h] [ebp-10h]
  _DWORD v15[3]; // [esp+14h] [ebp-Ch] BYREF

  if ( String1 && !_strcmpi(String1, aOkbutton) )
  {
    sub_43AB00((_DWORD *)self);
    sub_4261C0(*(_DWORD **)(self + 40), &byte_521688, 0);
    return 1;
  }
  if ( String1 == *(char **)(self + 56) )
  {
    if ( a3 )
    {
      if ( a3 == 1 )
      {
        *(_DWORD *)&dword_4A34C0 -= 10;
        if ( *(int *)&dword_4A34C0 < 0 )
          *(_DWORD *)&dword_4A34C0 = 100;
      }
    }
    else
    {
      *(_DWORD *)&dword_4A34C0 += 10;
      if ( *(int *)&dword_4A34C0 > 100 )
        *(_DWORD *)&dword_4A34C0 = 0;
    }
    sub_421190(*(_DWORD *)(*(_DWORD *)(self + 56) + 112), "%d%%", *(_DWORD *)&dword_4A34C0);
    sub_422DC0((HKEY)AppName, aVolume, *(int *)&dword_4A34C0);
    v5 = *(_DWORD *)(self + 80);
    if ( v5 )
    {
      sub_41D860(v5);
      v12 = 0;
      v13 = 0;
      v14 = 0;
      memset(v15, 0, sizeof(v15));
      if ( sub_408F30((_DWORD *)dword_520970) )
      {
        v6 = (_DWORD *)sub_408F30((_DWORD *)dword_520970);
        v7 = v6[8];
        v6 += 8;
        v12 = v7;
        v13 = v6[1];
        v14 = v6[2];
      }
      sub_41D960(*(_DWORD **)(self + 80), (uint32 *)&v12, v15);
      sub_41D840(*(_DWORD *)(self + 80));
      return 1;
    }
    return 1;
  }
  if ( String1 != *(char **)(self + 52) )
  {
    v8 = *(_DWORD *)(self + 48);
    if ( String1 == (char *)v8 )
    {
      if ( a3 )
      {
        if ( a3 == 1 )
        {
          v10 = *(_DWORD *)(self + 44) - 1;
          *(_DWORD *)(self + 44) = v10;
          if ( v10 < 0 )
            *(_DWORD *)(self + 44) = 2;
        }
      }
      else
      {
        v9 = *(_DWORD *)(self + 44) + 1;
        *(_DWORD *)(self + 44) = v9;
        if ( v9 >= 3 )
          *(_DWORD *)(self + 44) = 0;
      }
      v11 = *(_DWORD *)(self + 44);
      switch ( v11 )
      {
        case 0:
          sub_421110(*(LPVOID **)(v8 + 112), aLow);
          return 1;
        case 1:
          sub_421110(*(LPVOID **)(v8 + 112), aMedium);
          return 1;
        case 2:
          sub_421110(*(LPVOID **)(v8 + 112), aHigh);
          break;
      }
    }
    return 1;
  }
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      *(_DWORD *)&dword_4A1EC4 -= 10;
      if ( *(int *)&dword_4A1EC4 < 10 )
        *(_DWORD *)&dword_4A1EC4 = 100;
    }
  }
  else
  {
    *(_DWORD *)&dword_4A1EC4 += 10;
    if ( *(int *)&dword_4A1EC4 > 100 )
      *(_DWORD *)&dword_4A1EC4 = 10;
  }
  sub_421190(*(_DWORD *)(*(_DWORD *)(self + 52) + 112), "%d%%", *(_DWORD *)&dword_4A1EC4);
  sub_422DC0((HKEY)AppName, aMousespeed, *(int *)&dword_4A1EC4);
  return 1;
}
