//----- (0045ED50) --------------------------------------------------------
void __cdecl sub_45ED50(_DWORD *a1, int a2, _DWORD *a3, _DWORD *a4)
{
  _DWORD *v4; // ebp
  int v6; // eax
  int v7; // esi
  int v8; // eax
  unsigned int v9; // edi
  unsigned int v10; // edx
  int v11; // edx
  int v12; // ecx
  char v13[4]; // [esp+Ch] [ebp-4h] BYREF

  v4 = a3;
  if ( a3[73] != 3 )
  {
    (*(void (__cdecl **)(_DWORD *, int))(*a3 + 4))(a3, a2);
    v6 = a1[642];
    if ( v6 )
      v7 = (a1[643] - v6) >> 3;
    else
      v7 = 0;
    v8 = a1[642];
    v9 = v7 + 1;
    if ( v8 )
      v10 = (a1[643] - v8) >> 3;
    else
      v10 = 0;
    if ( v10 >= v9 )
    {
      if ( v8 )
      {
        if ( v9 < (a1[643] - v8) >> 3 )
          sub_463AF0((_DWORD *)(v8 + 8 * v9), (_DWORD *)a1[643], 0);
        v4 = a4;
      }
    }
    else
    {
      if ( v8 )
        v11 = (a1[643] - v8) >> 3;
      else
        v11 = 0;
      sub_4638A0(a1[643], (char *)(v9 - v11), 0, (_DWORD *)v13);
    }
    *(_DWORD *)(a1[642] + 8 * v7) = (DWORD)(uintptr_t)v4;
    sub_428680(a1, *(_DWORD *)(*(_DWORD *)(a1[642] + 8 * v7) + 652));
    v12 = *(_DWORD *)(*(_DWORD *)(a1[642] + 8 * v7) + 652);
    (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v12 + 24))(v12, 0);
    *(_DWORD *)(a1[642] + 8 * v7 + 4) = 0;
    if ( !v7 )
      sub_45EE50((int)a1, 0);
  }
}
