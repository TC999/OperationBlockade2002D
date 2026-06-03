extern char aUsername[];
extern char Default[];

//----- (0043B440) --------------------------------------------------------
char __cdecl sub_43B440(int self, char *String1, int a3)
{
  char result; // al
  char v5[260]; // [esp+10h] [ebp-208h] BYREF
  char Buffer[260]; // [esp+114h] [ebp-104h] BYREF

  if ( !String1 )
    goto LABEL_10;
  if ( !_strcmpi(String1, aCancelbutton) )
  {
    sub_4261C0(*(_DWORD **)(self + 40), aNameentry, 0);
    return 1;
  }
  if ( _strcmpi(String1, aOkbutton) )
  {
LABEL_10:
    if ( String1 == *(char **)(self + 48) )
    {
      *(_DWORD *)(self + 60) = 0;
      *(_DWORD *)(*(_DWORD *)(dword_520970 + 236) + 20) = 0;
      result = 1;
      *(_BYTE *)(*(_DWORD *)(self + 52) + 172) = 0;
      *(_BYTE *)(*(_DWORD *)(self + 56) + 172) = 0;
      return result;
    }
    if ( String1 == *(char **)(self + 52) )
    {
      *(_DWORD *)(self + 60) = 1;
      *(_DWORD *)(*(_DWORD *)(dword_520970 + 236) + 20) = 1;
      *(_BYTE *)(*(_DWORD *)(self + 48) + 172) = 0;
      result = 1;
      *(_BYTE *)(*(_DWORD *)(self + 56) + 172) = 0;
      return result;
    }
    if ( String1 == *(char **)(self + 56) )
    {
      *(_DWORD *)(self + 60) = 2;
      *(_DWORD *)(*(_DWORD *)(dword_520970 + 236) + 20) = 2;
      *(_BYTE *)(*(_DWORD *)(self + 48) + 172) = 0;
      *(_BYTE *)(*(_DWORD *)(self + 52) + 172) = 0;
    }
    return 1;
  }
  strcpy(v5, *(const char **)(*(_DWORD *)(*(_DWORD *)(self + 44) + 112) + 8));
  if ( !v5[0] )
    return 1;
  sprintf(Buffer, "Saved\\%s.sps", v5);
  if ( sub_422AE0(Buffer) )
    return 1;
  strcpy(String, v5);
  sub_422E60(AppName, aUsername, String);
  sub_4229D0("UI NameEntry: current name=%s", String);
  sub_45E720((char *)*(_DWORD *)(dword_520970 + 280), String, *(_DWORD *)(self + 60));
  if ( !(unsigned __int8)sub_45E760(*(_DWORD *)(dword_520970 + 280)) )
  {
    sub_45E720((char *)*(_DWORD *)(dword_520970 + 280), String, *(_DWORD *)(self + 60));
    sub_45E880(*(_DWORD *)(dword_520970 + 280));
  }
  sub_422D00(AppName, aUsername, (CHAR *)0x18, String, Default);
  sub_421110(*(LPVOID **)(*(_DWORD *)(self + 44) + 112), String);
  sub_4262D0(*(_DWORD *)(dword_520970 + 232));
  sub_450AC0(dword_520970, 1, -1);
  return 1;
}
