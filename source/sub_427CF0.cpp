//----- (00427CF0) --------------------------------------------------------
int sub_427CF0()
{
  void **v0; // ecx
  int v1; // eax
  int v3; // [esp+80h] [ebp-4h]

  sub_41BB90((_DWORD *)dword_520A50);
  v0 = (void **)dword_52087C;
  *(_BYTE *)(dword_52087C + 33) = byte_520A90;
  sub_421540(v0);
  (*(void (__stdcall **)(_DWORD, int, _DWORD))(**(_DWORD **)ArgList + 200))(*(_DWORD *)ArgList, 35, 0);
  (*(void (__stdcall **)(_DWORD, int, int))(**(_DWORD **)ArgList + 200))(*(_DWORD *)ArgList, 140, 3);
  (*(void (__stdcall **)(_DWORD, int, _DWORD))(**(_DWORD **)ArgList + 200))(*(_DWORD *)ArgList, 48, 0);
  (*(void (__stdcall **)(_DWORD, int, int))(**(_DWORD **)ArgList + 200))(*(_DWORD *)ArgList, 34, dword_4A4DD0);
  (*(void (__stdcall **)(_DWORD, int, int))(**(_DWORD **)ArgList + 200))(*(_DWORD *)ArgList, 139, dword_4A4DD4);
  (*(void (__stdcall **)(_DWORD, int, int))(**(_DWORD **)ArgList + 200))(*(_DWORD *)ArgList, 36, dword_4A4DD8);
  v3 = dword_4A4DDC;
  (*(void (__stdcall **)(_DWORD, int, int))(**(_DWORD **)ArgList + 200))(*(_DWORD *)ArgList, 37, dword_4A4DDC);
  (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, int, int, int, _DWORD))(**(_DWORD **)ArgList + 144))(
    *(_DWORD *)ArgList,
    0,
    0,
    3,
    dword_4A4DD0,
    1065353216,
    0);
  if ( (*(int (__stdcall **)(_DWORD))(**(_DWORD **)ArgList + 136))(*(_DWORD *)ArgList) >= 0 )
  {
    (*(void (__stdcall **)(_DWORD, int, int, int))(**(_DWORD **)ArgList + 200))(*(_DWORD *)ArgList, 8, 3, v3);
    if ( dword_520970 )
      *(float *)dword_520978 = (double)(*(int (__thiscall **)(int))(*(_DWORD *)dword_520970 + 44))(dword_520970)
                             + *(float *)dword_520978;
    (*(void (__cdecl **)(_DWORD))(**(_DWORD **)ArgList + 140))(*(_DWORD *)ArgList);
    v1 = (*(int (__stdcall **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(**(_DWORD **)ArgList + 60))(
           *(_DWORD *)ArgList,
           0,
           0,
           0,
           0);
    switch ( v1 )
    {
      case -2005530519:
        sub_4229D0(aPresentNotRese);
        if ( byte_5209DC )
        {
          (*(void (__stdcall **)(_DWORD, int *))(**(_DWORD **)ArgList + 56))(*(_DWORD *)ArgList, &dword_520980);
          return 0;
        }
        break;
      case -2005530520:
        sub_4229D0(aPresentDeviceL);
        return 0;
      case -2005530516:
        sub_4229D0(aPresentInvalid);
        break;
    }
  }
  return 0;
}
