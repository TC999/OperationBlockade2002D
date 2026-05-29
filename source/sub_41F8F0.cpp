//----- (0041F8F0) --------------------------------------------------------
char __usercall sub_41F8F0(int a1, int a2)
{
  int v2; // edi
  int i; // eax
  __int16 v4; // dx
  __int16 v5; // si
  __int16 v6; // cx
  char result; // al
  int v8; // [esp+44h] [ebp-4h] BYREF
  char *retaddr; // [esp+48h] [ebp+0h]

  v8 = a1;
  if ( (*(int (__stdcall **)(_DWORD, int, int, int, int, int *))(**(_DWORD **)ArgList + 96))(
         *(_DWORD *)ArgList,
         3072,
         8,
         101,
         1,
         &dword_520124)
    || (*(int (__stdcall **)(_DWORD, int, int, int, int, int *))(**(_DWORD **)ArgList + 92))(
         *(_DWORD *)ArgList,
         24576,
         8,
         322,
         1,
         &dword_5200F8) )
  {
    result = 0;
    dword_520100 = -1;
  }
  else
  {
    (*(void (__stdcall **)(int, _DWORD, int, int *, _DWORD, int))(*(_DWORD *)dword_520124 + 44))(
      dword_520124,
      0,
      3072,
      &v8,
      0,
      a2);
    v2 = 0;
    for ( i = 0; i < 3072; i += 12 )
    {
      *(_WORD *)&retaddr[i] = 4 * v2;
      v4 = 4 * v2 + 1;
      *(_WORD *)&retaddr[i + 2] = v4;
      v5 = 4 * v2 + 2;
      v6 = 4 * v2 + 3;
      *(_WORD *)&retaddr[i + 4] = v5;
      ++v2;
      *(_WORD *)&retaddr[i + 6] = v6;
      *(_WORD *)&retaddr[i + 8] = v5;
      *(_WORD *)&retaddr[i + 10] = v4;
    }
    (*(void (__cdecl **)(int))(*(_DWORD *)dword_520124 + 48))(dword_520124);
    result = 1;
    dword_520100 = -1;
  }
  return result;
}
