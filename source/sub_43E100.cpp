//----- (0043E100) --------------------------------------------------------
char __thiscall sub_43E100(int this, char *String1, int a3)
{
  int v4; // edi
  int v5; // eax
  int v6; // ebx
  const char *v7; // edi
  const char *v8; // eax
  int v10; // ebx
  int v11; // ebx
  int v12; // eax
  int v13; // eax
  int v14; // ebx
  const char *v15; // edi
  const char *v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // edx
  int v20; // eax
  _WORD v21[3]; // [esp+Ch] [ebp-110h] BYREF
  bool v22; // [esp+12h] [ebp-10Ah]
  _WORD v23[3]; // [esp+14h] [ebp-108h] BYREF
  char v24[37]; // [esp+1Ah] [ebp-102h] BYREF

  if ( !String1 )
    goto LABEL_38;
  if ( !_strcmpi(String1, aYear) )
    return 1;
  if ( !_strcmpi(String1, aTimeOfDay) )
  {
    if ( *(_BYTE *)(dword_4F5CC4 + 936) )
    {
      if ( a3 )
      {
        v6 = *(_DWORD *)(this + 104) - 1;
        *(_DWORD *)(this + 104) = v6;
        v5 = v6 < 0 ? 0 : v6;
      }
      else
      {
        v4 = *(_DWORD *)(this + 104) + 1;
        *(_DWORD *)(this + 104) = v4;
        if ( v4 >= sub_4647F0(*(_DWORD *)(dword_520970 + 252)) - 1 )
          v5 = sub_4647F0(*(_DWORD *)(dword_520970 + 252)) - 1;
        else
          v5 = v4;
      }
      *(_DWORD *)(this + 104) = v5;
      v7 = sub_424350((_DWORD *)this, aTimeOfDay);
      if ( v7 )
      {
        v8 = (const char *)sub_464800(*(_DWORD *)(this + 104));
        sub_421110(*((LPVOID **)v7 + 28), v8);
      }
      sub_422DC0((HKEY)AppName, aMultiplayersky, *(_DWORD *)(this + 104));
      sub_43E0C0((_DWORD *)this);
      return 1;
    }
    return 1;
  }
  if ( _strcmpi(String1, aMonth) )
  {
    if ( !_strcmpi(String1, aDifficulty_0) )
    {
      if ( !*(_BYTE *)(dword_4F5CC4 + 936) )
        return 1;
      v17 = *(_DWORD *)(this + 108);
      if ( v17 )
      {
        if ( v17 == 1 )
        {
          *(_DWORD *)(this + 108) = 2;
        }
        else if ( v17 == 2 )
        {
          *(_DWORD *)(this + 108) = 0;
        }
      }
      else
      {
        *(_DWORD *)(this + 108) = 1;
      }
      v18 = *(_DWORD *)(this + 108);
      if ( v18 )
      {
        if ( v18 == 1 )
        {
          sub_421110(*(LPVOID **)(*(_DWORD *)(this + 88) + 112), aSoldier);
        }
        else if ( v18 == 2 )
        {
          sub_421110(*(LPVOID **)(*(_DWORD *)(this + 88) + 112), aVeteran);
        }
      }
      else
      {
        sub_421110(*(LPVOID **)(*(_DWORD *)(this + 88) + 112), aRecruit);
      }
      *(_DWORD *)(*(_DWORD *)(dword_520970 + 236) + 20) = *(_DWORD *)(this + 108);
      sub_43E0C0((_DWORD *)this);
      return 1;
    }
LABEL_38:
    if ( String1 == *(char **)(this + 56) )
    {
      v22 = String1[172] == 0;
      sub_4117D0(dword_4F5CC4, (_DWORD *)0x403, v21, 7, 7, 0);
      return 0;
    }
    if ( !String1 || _strcmpi(String1, aCancelbutton) )
    {
      if ( String1 == *(char **)(this + 64) )
      {
        v19 = *(_DWORD *)(*(_DWORD *)(this + 52) + 124);
        if ( v19 > 0 )
        {
          strcpy(v24, aTheHostKickedY);
          sub_411480(
            (_DWORD *)dword_4F5CC4,
            (_DWORD *)0x404,
            *(_DWORD *)(*(_DWORD *)(dword_520970 + 280) + 352 * v19 + 888),
            v23,
            262,
            7,
            0);
          return 1;
        }
      }
      else if ( String1 == *(char **)(this + 60) && *(_BYTE *)(dword_4F5CC4 + 936) )
      {
        sub_4262D0(*(_DWORD *)(this + 40));
        v20 = rand();
        sub_45B150(*(_DWORD *)(this + 100), *(_DWORD *)(this + 104), v20 % 10);
      }
      return 1;
    }
    sub_411C50(dword_4F5CC4);
    sub_45ABF0(*(_DWORD *)(dword_520970 + 236));
    sub_45ECB0(*(_DWORD *)(dword_520970 + 280));
    if ( byte_521684 )
      sub_4261C0(*(_DWORD **)(this + 40), aIpx, 0);
    else
      sub_4261C0(*(_DWORD **)(this + 40), aTcpip_0, 0);
    return 1;
  }
  if ( !*(_BYTE *)(dword_4F5CC4 + 936) )
    return 1;
  v10 = *(_DWORD *)(this + 100);
  if ( a3 )
  {
    v14 = v10 - 1;
    *(_DWORD *)(this + 100) = v14;
    v13 = v14 < 0 ? 0 : v14;
  }
  else
  {
    v11 = v10 + 1;
    *(_DWORD *)(this + 100) = v11;
    v12 = *(_DWORD *)(dword_520970 + 236);
    if ( v11 >= *(_DWORD *)(16 * *(_DWORD *)(v12 + 20) + v12 + 28) - 1 )
      v13 = *(_DWORD *)(16 * *(_DWORD *)(v12 + 20) + v12 + 28) - 1;
    else
      v13 = v11;
  }
  *(_DWORD *)(this + 100) = v13;
  v15 = sub_424350((_DWORD *)this, aMonth);
  if ( v15 )
  {
    v16 = (const char *)sub_45A870(*(_DWORD *)(this + 100));
    sub_421110(*((LPVOID **)v15 + 28), v16);
  }
  sub_422DC0((HKEY)AppName, aMultiplayermis, *(_DWORD *)(this + 100));
  sub_43E0C0((_DWORD *)this);
  return 1;
}
