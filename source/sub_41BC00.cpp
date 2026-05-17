//----- (0041BC00) --------------------------------------------------------
int __thiscall sub_41BC00(_DWORD *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int result; // eax
  int v10; // [esp+64h] [ebp-4h]

  if ( a2 != -1 && a2 != *this )
  {
    *this = a2;
    if ( a2 )
      (*(void (__stdcall **)(_DWORD, int, _DWORD))(**(_DWORD **)ArgList + 200))(*(_DWORD *)ArgList, 137, 0);
    else
      (*(void (__stdcall **)(_DWORD, int, int))(**(_DWORD **)ArgList + 200))(*(_DWORD *)ArgList, 137, 1);
  }
  if ( a3 != -1 && a3 != this[1] )
  {
    this[1] = a3;
    if ( a3 )
    {
      if ( a3 == 1 )
      {
        (*(void (__stdcall **)(_DWORD, int, int, int))(**(_DWORD **)ArgList + 200))(*(_DWORD *)ArgList, 19, 5, v10);
        (*(void (__stdcall **)(_DWORD, int, int))(**(_DWORD **)ArgList + 200))(*(_DWORD *)ArgList, 20, 6);
      }
      else
      {
        if ( a3 != 2 )
          goto LABEL_15;
        (*(void (__stdcall **)(_DWORD, int, int, int))(**(_DWORD **)ArgList + 200))(*(_DWORD *)ArgList, 19, 5, v10);
        (*(void (__stdcall **)(_DWORD, int, int))(**(_DWORD **)ArgList + 200))(*(_DWORD *)ArgList, 20, 2);
      }
      (*(void (__stdcall **)(_DWORD, int, int))(**(_DWORD **)ArgList + 200))(*(_DWORD *)ArgList, 27, 1);
      (*(void (__stdcall **)(_DWORD, int, int))(**(_DWORD **)ArgList + 200))(*(_DWORD *)ArgList, 24, 1);
      (*(void (__stdcall **)(_DWORD, int, int))(**(_DWORD **)ArgList + 200))(*(_DWORD *)ArgList, 15, 1);
      (*(void (__stdcall **)(_DWORD, int))(**(_DWORD **)ArgList + 200))(*(_DWORD *)ArgList, 25);
      goto LABEL_15;
    }
    (*(void (__stdcall **)(_DWORD, int, int, int))(**(_DWORD **)ArgList + 200))(*(_DWORD *)ArgList, 19, 2, v10);
    (*(void (__stdcall **)(_DWORD, int, int))(**(_DWORD **)ArgList + 200))(*(_DWORD *)ArgList, 20, 1);
    (*(void (__stdcall **)(_DWORD, int))(**(_DWORD **)ArgList + 200))(*(_DWORD *)ArgList, 27);
  }
LABEL_15:
  if ( a4 != -1 && a4 != this[2] )
  {
    this[2] = a4;
    if ( a4 )
    {
      if ( a4 == 1 )
        (*(void (__stdcall **)(_DWORD, int, int))(**(_DWORD **)ArgList + 200))(*(_DWORD *)ArgList, 23, 4);
    }
    else
    {
      (*(void (__stdcall **)(_DWORD, int, int))(**(_DWORD **)ArgList + 200))(*(_DWORD *)ArgList, 23, 3);
    }
  }
  if ( a5 != -1 && a5 != this[3] )
  {
    this[3] = a5;
    if ( byte_5209BC && a5 )
    {
      if ( a5 == 1 )
        (*(void (__stdcall **)(_DWORD, int, _DWORD))(**(_DWORD **)ArgList + 200))(*(_DWORD *)ArgList, 14, 0);
    }
    else
    {
      (*(void (__stdcall **)(_DWORD, int, int))(**(_DWORD **)ArgList + 200))(*(_DWORD *)ArgList, 14, 1);
    }
  }
  if ( a6 != -1 && a6 != this[4] )
  {
    this[4] = a6;
    if ( a6 )
    {
      if ( a6 == 1 )
      {
        (*(void (__stdcall **)(_DWORD, int, int))(**(_DWORD **)ArgList + 200))(*(_DWORD *)ArgList, 22, 3);
      }
      else if ( a6 == 2 )
      {
        (*(void (__stdcall **)(_DWORD, int, int))(**(_DWORD **)ArgList + 200))(*(_DWORD *)ArgList, 22, 1);
      }
    }
    else
    {
      (*(void (__stdcall **)(_DWORD, int, int))(**(_DWORD **)ArgList + 200))(*(_DWORD *)ArgList, 22, 2);
    }
  }
  if ( a7 != -1 && a7 != this[5] )
  {
    this[5] = a7;
    if ( a7 )
    {
      if ( a7 == 1 )
        (*(void (__stdcall **)(_DWORD, int, int))(**(_DWORD **)ArgList + 200))(*(_DWORD *)ArgList, 8, 2);
    }
    else
    {
      (*(void (__stdcall **)(_DWORD, int, int))(**(_DWORD **)ArgList + 200))(*(_DWORD *)ArgList, 8, 3);
    }
  }
  result = a8;
  if ( a8 != -1 && a8 != this[6] )
  {
    this[6] = a8;
    if ( a8 )
    {
      if ( a8 == 1 )
      {
        (*(void (__stdcall **)(_DWORD, int, _DWORD))(**(_DWORD **)ArgList + 200))(*(_DWORD *)ArgList, 141, 0);
        (*(void (__stdcall **)(_DWORD, int, _DWORD))(**(_DWORD **)ArgList + 200))(*(_DWORD *)ArgList, 145, 0);
        return (*(int (__stdcall **)(_DWORD, int, _DWORD))(**(_DWORD **)ArgList + 200))(*(_DWORD *)ArgList, 147, 0);
      }
    }
    else
    {
      (*(void (__stdcall **)(_DWORD, int, int))(**(_DWORD **)ArgList + 200))(*(_DWORD *)ArgList, 141, 1);
      (*(void (__stdcall **)(_DWORD, int, int))(**(_DWORD **)ArgList + 200))(*(_DWORD *)ArgList, 145, 1);
      return (*(int (__stdcall **)(_DWORD, int, int))(**(_DWORD **)ArgList + 200))(*(_DWORD *)ArgList, 147, 1);
    }
  }
  return result;
}
