//----- (00469370) --------------------------------------------------------
unsigned int __cdecl sub_469370(int self, int a2)
{
  int v2; // esi
  unsigned int result; // eax
  int v5; // ecx
  int v6; // ebx
  int v7; // eax
  char v8; // al
  char *v9; // [esp-10h] [ebp-24h]
  const char *v10; // [esp-Ch] [ebp-20h]
  const char *v11; // [esp-8h] [ebp-1Ch]
  unsigned int i; // [esp+10h] [ebp-4h]

  v2 = 0;
  for ( i = 0; ; ++i )
  {
    result = *(_DWORD *)(self + 280);
    if ( !result )
      break;
    v5 = *(_DWORD *)(self + 284) - result;
    result = i;
    if ( i >= v5 >> 4 )
      break;
    v6 = *(_DWORD *)(self + 280);
    if ( !*(_DWORD *)(v2 + v6 + 4) )
    {
      *(_DWORD *)(v2 + v6 + 4) = sub_469650((_DWORD *)self, *(char **)(v2 + v6 + 12), *(char **)(v2 + v6 + 8), 1);
      sub_40A120(
        *(_DWORD *)(*(_DWORD *)(self + 280) + v2 + 4) != 0,
        (char *)"could not find type info for %s, see %s",
        *(const char **)(*(_DWORD *)(self + 280) + v2 + 8),
        *(const char **)(self + 4));
      v7 = *(_DWORD *)(self + 280);
      if ( **(_DWORD **)(v2 + v7) )
      {
        v11 = *(const char **)(self + 4);
        v10 = *(const char **)(*(_DWORD *)(v2 + v7 + 4) + 12);
        v9 = *(char **)(v2 + v7 + 12);
        v8 = sub_4696E0(*(_DWORD *)(v2 + v7 + 4), v9);
        sub_40A120(
          v8,
          (char *)"linking mismatch, requested %s, received %s, see %s : %s",
          v9,
          v10,
          v11,
          (const char *)(self + 16));
      }
      **(_DWORD **)(v2 + *(_DWORD *)(self + 280)) = *(_DWORD *)(v2 + *(_DWORD *)(self + 280) + 4);
      sub_4885A6(*(LPVOID *)(*(_DWORD *)(self + 280) + v2 + 8));
      *(_DWORD *)(*(_DWORD *)(self + 280) + v2 + 8) = 0;
      sub_4885A6(*(LPVOID *)(*(_DWORD *)(self + 280) + v2 + 12));
      *(_DWORD *)(*(_DWORD *)(self + 280) + v2 + 12) = 0;
    }
    v2 += 16;
  }
  return result;
}
