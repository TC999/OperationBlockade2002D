static char aResumebutton[] = "ResumeButton";
static char aOptionsbutton[] = "OptionsButton";
static char aOptions[] = "Options";
static char aAbortmissionbu[] = "AbortMissionButton";
static char aRestartmission[] = "RestartMissionButton";
extern char aIpx[];
extern char aTcpip_0[];
extern char aLevelselect[];
extern char aStaging[];
static char aIngamemenu[] = "InGameMenu";

//----- (0043D5D0) --------------------------------------------------------
char __cdecl sub_43D5D0(int self, char *String1, int a3)
{
  int v5; // esi
  int v6; // edi
  int v7; // eax

  if ( *(_BYTE *)(self + 44) )
    return 0;
  if ( !String1 )
    return 1;
  if ( !_strcmpi(String1, aResumebutton) )
  {
    sub_4262D0(*(_DWORD *)(self + 40));
    return 1;
  }
  if ( !_strcmpi(String1, aOptionsbutton) )
  {
    strcpy(&byte_521688, aIngamemenu);
    sub_4261C0(*(_DWORD **)(self + 40), aOptions, 0);
    return 1;
  }
  if ( _strcmpi(String1, aAbortmissionbu) )
  {
    if ( !_strcmpi(String1, aRestartmission) )
    {
      if ( *(_BYTE *)(dword_4F5CC4 + 936) )
      {
        v5 = *(_DWORD *)(*(_DWORD *)(dword_520970 + 236) + 72);
        v6 = *(_DWORD *)(*(_DWORD *)(dword_520970 + 252) + 20);
        v7 = rand();
        sub_45B150((_DWORD *)v5, v6, v7 % 10, 0);
      }
      else if ( !*(_BYTE *)(dword_4F5CC4 + 937) )
      {
        sub_45AA80((_DWORD *)*(_DWORD *)(dword_520970 + 236));
        sub_4262D0(*(_DWORD *)(self + 40));
        return 1;
      }
    }
    return 1;
  }
  sub_4262D0(*(_DWORD *)(self + 40));
  if ( *(_BYTE *)(dword_4F5CC4 + 937) )
  {
    sub_411C50(dword_4F5CC4);
    sub_45ABF0(*(_DWORD *)(dword_520970 + 236));
    sub_45ECB0((_DWORD *)*(_DWORD *)(dword_520970 + 280));
    if ( byte_521684 )
    {
      sub_45B2B0(*(_DWORD *)(dword_520970 + 236), aIpx);
      return 1;
    }
    sub_45B2B0(*(_DWORD *)(dword_520970 + 236), aTcpip_0);
    return 1;
  }
  else
  {
    if ( !*(_BYTE *)(dword_4F5CC4 + 936) )
    {
      sub_45B2B0(*(_DWORD *)(dword_520970 + 236), aLevelselect);
      return 1;
    }
    sub_45B2B0(*(_DWORD *)(dword_520970 + 236), aStaging);
    return 1;
  }
}
