//----- (0041F2F0) --------------------------------------------------------
char __usercall sub_41F2F0(int a1, void *a2)
{
  _UNKNOWN *retaddr; // [esp+48h] [ebp+0h] BYREF

  if ( (*(int (__stdcall **)(_DWORD, int, int, int, int, int *))(**(_DWORD **)ArgList + 92))(
         *(_DWORD *)ArgList,
         1488,
         8,
         18,
         1,
         &dword_5200EC) )
  {
    return 0;
  }
  if ( (*(int (__stdcall **)(_DWORD, int, int, int, int, int *, int))(**(_DWORD **)ArgList + 96))(
         *(_DWORD *)ArgList,
         720,
         8,
         101,
         1,
         &dword_5200F0,
         a1) )
  {
    (*(void (__cdecl **)(int))(*(_DWORD *)dword_5200EC + 8))(dword_5200EC);
    dword_5200EC = 0;
    return 0;
  }
  else
  {
    (*(void (__stdcall **)(int, _DWORD, _DWORD, _UNKNOWN **))(*(_DWORD *)dword_5200F0 + 44))(
      dword_5200F0,
      0,
      0,
      &retaddr);
    qmemcpy(a2, &unk_4A3BA8, 0x2D0u);
    (*(void (__stdcall **)(int))(*(_DWORD *)dword_5200F0 + 48))(dword_5200F0);
    return 1;
  }
}
