//----- (00469160) --------------------------------------------------------
unsigned int __cdecl sub_469160(int self, _DWORD *a2, const char *a3, const char *a4)
{
  int v5; // eax
  int v6; // ebx
  int v7; // ecx
  unsigned int v8; // edi
  unsigned int v9; // eax
  int v10; // eax
  int v11; // ebx
  unsigned int result; // eax
  int v13; // eax
  int v14; // ecx
  int v15; // esi
  int v16; // edx
  unsigned int v17; // eax
  unsigned int v18; // edi
  int v19; // edi
  char *v20; // [esp+10h] [ebp-14h]
  _DWORD v21[4]; // [esp+14h] [ebp-10h] BYREF

  if ( a3 && a4 )
  {
    v5 = *(_DWORD *)(self + 280);
    if ( v5 )
      v6 = (*(_DWORD *)(self + 284) - v5) >> 4;
    else
      v6 = 0;
    v7 = *(_DWORD *)(self + 280);
    v8 = v6 + 1;
    if ( v7 )
      v9 = (*(_DWORD *)(self + 284) - v7) >> 4;
    else
      v9 = 0;
    if ( v9 >= v8 )
    {
      if ( v8 < sub_448730(self + 276) )
        sub_448750((_DWORD *)(self + 276), (_DWORD *)(*(_DWORD *)(self + 280) + 16 * v8), *(_DWORD **)(self + 284));
    }
    else
    {
      v20 = *(char **)(self + 284);
      v10 = sub_448730(self + 276);
      sub_419CF0((char *)(self + 276), v20, v8 - v10, v21);
    }
    v11 = 16 * v6;
    *(_DWORD *)(*(_DWORD *)(self + 280) + v11) = a2;
    **(_DWORD **)(*(_DWORD *)(self + 280) + v11) = 0;
    *(_DWORD *)(*(_DWORD *)(self + 280) + v11 + 4) = 0;
    *(_DWORD *)(*(_DWORD *)(self + 280) + v11 + 8) = operator new(0x80u);
    strcpy(*(char **)(*(_DWORD *)(self + 280) + v11 + 8), a3);
    *(_DWORD *)(*(_DWORD *)(self + 280) + v11 + 12) = operator new(0x80u);
    result = strlen(a4) + 1;
    qmemcpy(*(void **)(*(_DWORD *)(self + 280) + v11 + 12), a4, result);
  }
  else
  {
    v13 = *(_DWORD *)(self + 280);
    v14 = self + 276;
    if ( v13 )
      v15 = (*(_DWORD *)(self + 284) - v13) >> 4;
    else
      v15 = 0;
    v16 = *(_DWORD *)(self + 280);
    v17 = v15 + 1;
    if ( v16 )
      v18 = (*(_DWORD *)(self + 284) - v16) >> 4;
    else
      v18 = 0;
    if ( v18 >= v17 )
    {
      if ( v16 && v17 < (*(_DWORD *)(self + 284) - v16) >> 4 )
        sub_448750((_DWORD *)v14, (_DWORD *)(v16 + 16 * v17), *(_DWORD **)(v14 + 8));
    }
    else
    {
      if ( v16 )
        v19 = (*(_DWORD *)(self + 284) - v16) >> 4;
      else
        v19 = 0;
      sub_419CF0((char *)v14, *(char **)(self + 284), v17 - v19, v21);
    }
    result = 16 * v15;
    *(_DWORD *)(*(_DWORD *)(self + 280) + result) = 0;
    *(_DWORD *)(*(_DWORD *)(self + 280) + result + 4) = *a2;
    *(_DWORD *)(*(_DWORD *)(self + 280) + result + 8) = 0;
    *(_DWORD *)(*(_DWORD *)(self + 280) + result + 12) = 0;
  }
  return result;
}
