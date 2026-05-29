//----- (004261C0) --------------------------------------------------------
char __thiscall sub_4261C0(_DWORD *self, char *String2, char a3)
{
  int v4; // ebx
  const char **v5; // edi
  int v7; // eax
  int v8; // eax
  _DWORD *v9; // eax
  int v10; // [esp+10h] [ebp-4h]

  v4 = 0;
  v10 = self[10];
  if ( v10 <= 0 )
    return 0;
  while ( 1 )
  {
    v5 = *(const char ***)(self[9] + 4 * v4);
    if ( !_strcmpi(v5[5], String2) )
      break;
    if ( ++v4 >= v10 )
      return 0;
  }
  if ( !v5 )
    return 0;
  v7 = self[13];
  if ( v7 )
  {
    sub_4229D0("UI: Deactivating dialog %s", *(const char **)(v7 + 20));
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)self[13] + 40))(self[13]);
    (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)self[13] + 24))(self[13], 0);
  }
  self[13] = v5;
  sub_4229D0("UI: Activating dialog %s", v5[5]);
  (*((void (__thiscall **)(const char **, int))*v5 + 6))(v5, 1);
  (*((void (__thiscall **)(const char **))*v5 + 9))(v5);
  self[14] = sub_426040(aCursor);
  v8 = self[19];
  if ( v8 )
  {
    v9 = *(_DWORD **)(v8 + 112);
    if ( v9 )
      sub_421280(v9);
  }
  self[19] = 0;
  if ( !*(_BYTE *)(dword_520970 + 296) )
    *(_BYTE *)(dword_520970 + 296) = 1;
  if ( (unsigned __int8)sub_450BC0() )
  {
    if ( !a3 )
      *(_BYTE *)(dword_520970 + 20) = 1;
  }
  return 1;
}
