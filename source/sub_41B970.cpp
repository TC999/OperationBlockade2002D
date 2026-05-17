//----- (0041B970) --------------------------------------------------------
int __cdecl sub_41B970(int a1, int a2, int a3, _DWORD *a4)
{
  if ( (unsigned int)dword_4F5D14 <= 0x10
    && !dword_5200A8
    && (*(int (__stdcall **)(int, int, int, int, int, int, int))(*(_DWORD *)dword_520A14 + 40))(
         dword_520A14,
         a1,
         a2,
         a3,
         2,
         1,
         80) >= 0
    && (*(int (__stdcall **)(int, int, int, int, int, int))(*(_DWORD *)dword_520A14 + 48))(
         dword_520A14,
         a1,
         a2,
         a3,
         a3,
         80) >= 0 )
  {
    *a4 = 80;
    return 1;
  }
  if ( (unsigned int)dword_4F5D14 <= 0xF
    && (unsigned int)dword_5200A8 <= 1
    && (*(int (__stdcall **)(int, int, int, int, int, int, int))(*(_DWORD *)dword_520A14 + 40))(
         dword_520A14,
         a1,
         a2,
         a3,
         2,
         1,
         73) >= 0
    && (*(int (__stdcall **)(int, int, int, int, int, int))(*(_DWORD *)dword_520A14 + 48))(
         dword_520A14,
         a1,
         a2,
         a3,
         a3,
         73) >= 0 )
  {
    *a4 = 73;
    return 1;
  }
  if ( (unsigned int)dword_4F5D14 > 0x18 )
    goto LABEL_29;
  if ( !dword_5200A8
    && (*(int (__stdcall **)(int, int, int, int, int, int, int))(*(_DWORD *)dword_520A14 + 40))(
         dword_520A14,
         a1,
         a2,
         a3,
         2,
         1,
         77) >= 0
    && (*(int (__stdcall **)(int, int, int, int, int, int))(*(_DWORD *)dword_520A14 + 48))(
         dword_520A14,
         a1,
         a2,
         a3,
         a3,
         77) >= 0 )
  {
    *a4 = 77;
    return 1;
  }
  if ( (unsigned int)dword_4F5D14 > 0x18 )
    goto LABEL_29;
  if ( (unsigned int)dword_5200A8 <= 8
    && (*(int (__stdcall **)(int, int, int, int, int, int, int))(*(_DWORD *)dword_520A14 + 40))(
         dword_520A14,
         a1,
         a2,
         a3,
         2,
         1,
         75) >= 0
    && (*(int (__stdcall **)(int, int, int, int, int, int))(*(_DWORD *)dword_520A14 + 48))(
         dword_520A14,
         a1,
         a2,
         a3,
         a3,
         75) >= 0 )
  {
    *a4 = 75;
    return 1;
  }
  if ( (unsigned int)dword_4F5D14 > 0x18
    || (unsigned int)dword_5200A8 > 4
    || (*(int (__stdcall **)(int, int, int, int, int, int, int))(*(_DWORD *)dword_520A14 + 40))(
         dword_520A14,
         a1,
         a2,
         a3,
         2,
         1,
         79) < 0
    || (*(int (__stdcall **)(int, int, int, int, int, int))(*(_DWORD *)dword_520A14 + 48))(
         dword_520A14,
         a1,
         a2,
         a3,
         a3,
         79) < 0 )
  {
LABEL_29:
    if ( (unsigned int)dword_4F5D14 > 0x20
      || dword_5200A8
      || (*(int (__stdcall **)(int, int, int, int, int, int, int))(*(_DWORD *)dword_520A14 + 40))(
           dword_520A14,
           a1,
           a2,
           a3,
           2,
           1,
           71) < 0
      || (*(int (__stdcall **)(int, int, int, int, int, int))(*(_DWORD *)dword_520A14 + 48))(
           dword_520A14,
           a1,
           a2,
           a3,
           a3,
           71) < 0 )
    {
      return 0;
    }
    else
    {
      *a4 = 71;
      return 1;
    }
  }
  else
  {
    *a4 = 79;
    return 1;
  }
}
