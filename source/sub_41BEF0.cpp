//----- (0041BEF0) --------------------------------------------------------
int __thiscall sub_41BEF0(_DWORD *self, int a2, int a3, int a4, int a5)
{
  int v6; // eax
  int v7; // ecx
  int result; // eax
  int v9; // [esp+34h] [ebp-8h]

  if ( a3 != self[a2 + 7] )
  {
    self[a2 + 7] = a3;
    if ( a3 )
    {
      sub_422270(a2);
      (*(void (__stdcall **)(_DWORD, int, int, int))(**(_DWORD **)ArgList + 252))(*(_DWORD *)ArgList, a2, 1, 4);
      (*(void (__stdcall **)(_DWORD, int, int, int))(**(_DWORD **)ArgList + 252))(*(_DWORD *)ArgList, a2, 4, 4);
    }
    else
    {
      (*(void (__stdcall **)(_DWORD, int, _DWORD))(**(_DWORD **)ArgList + 244))(*(_DWORD *)ArgList, a2, 0);
      (*(void (__stdcall **)(_DWORD, int, int, int))(**(_DWORD **)ArgList + 252))(*(_DWORD *)ArgList, a2, 1, 1);
      (*(void (__stdcall **)(_DWORD, int, int, int))(**(_DWORD **)ArgList + 252))(*(_DWORD *)ArgList, a2, 4, 1);
    }
  }
  if ( a4 != -1 && self[a2 + 15] != a4 )
  {
    self[a2 + 15] = a4;
    if ( !a4 )
    {
      (*(void (__stdcall **)(_DWORD, _DWORD, int, _DWORD, int))(**(_DWORD **)ArgList + 252))(
        *(_DWORD *)ArgList,
        0,
        17,
        0,
        v9);
      v6 = *(_DWORD *)ArgList;
      v7 = **(_DWORD **)ArgList;
LABEL_11:
      (*(void (__stdcall **)(int, _DWORD, int))(v7 + 252))(v6, 0, 16);
      goto LABEL_12;
    }
    if ( a4 == 1 )
    {
      (*(void (__stdcall **)(_DWORD, _DWORD, int, int, int))(**(_DWORD **)ArgList + 252))(
        *(_DWORD *)ArgList,
        0,
        17,
        2,
        v9);
      v6 = *(_DWORD *)ArgList;
      v7 = **(_DWORD **)ArgList;
      goto LABEL_11;
    }
  }
LABEL_12:
  result = a5;
  if ( a5 != -1 && self[a2 + 23] != a5 )
  {
    self[a2 + 23] = a5;
    if ( a5 )
    {
      if ( a5 == 1 )
      {
        (*(void (__stdcall **)(_DWORD, int, int, int))(**(_DWORD **)ArgList + 252))(*(_DWORD *)ArgList, a2, 13, 3);
        return (*(int (__stdcall **)(_DWORD, int, int, int))(**(_DWORD **)ArgList + 252))(*(_DWORD *)ArgList, a2, 14, 3);
      }
    }
    else
    {
      (*(void (__stdcall **)(_DWORD, int, int, int))(**(_DWORD **)ArgList + 252))(*(_DWORD *)ArgList, a2, 13, 1);
      return (*(int (__stdcall **)(_DWORD, int, int, int))(**(_DWORD **)ArgList + 252))(*(_DWORD *)ArgList, a2, 14, 1);
    }
  }
  return result;
}
