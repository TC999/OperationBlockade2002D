//----- (00405A30) --------------------------------------------------------
int __cdecl sub_405A30(_DWORD *self, char *String1, int a3, char a4)
{
  int v5; // ebp
  unsigned int v6; // kr04_4
  int i; // edi
  int v9; // edi
  int k; // ebx
  int v11; // eax
  int j; // ebx
  int v13; // eax
  int v14; // ecx
  size_t MaxCount; // [esp+10h] [ebp-4h]

  v5 = a3;
  v6 = strlen(String1) + 1;
  MaxCount = v6 - 1;
  if ( a3 == -1 )
  {
    v5 = 0;
    if ( (int)self[2] > 0 )
    {
      for ( i = 0; _strnicmp(String1, *(const char **)(self[1] + i + 8), MaxCount); i += 172 )
      {
        if ( ++v5 >= self[2] )
          return -1;
      }
      return v5;
    }
    return -1;
  }
  if ( !a4 )
  {
    v9 = a3 + 1;
    if ( a3 + 1 < self[2] )
    {
      for ( j = 172 * v9; ; j += 172 )
      {
        v13 = j + self[1];
        if ( !*(_BYTE *)v13 )
          break;
        v14 = *(_DWORD *)(v13 + 28);
        if ( v14 < a3 )
          break;
        if ( v14 == a3 && !_strnicmp(String1, *(const char **)(v13 + 8), MaxCount) )
          return v9;
        if ( ++v9 >= self[2] )
          return -1;
      }
    }
    return -1;
  }
  if ( _strnicmp(String1, *(const char **)(self[1] + 172 * a3 + 8), v6 - 1) )
  {
    v9 = a3 + 1;
    if ( a3 + 1 < self[2] )
    {
      for ( k = 172 * v9; ; k += 172 )
      {
        v11 = self[1] + k;
        if ( !*(_BYTE *)v11 || *(_DWORD *)(v11 + 28) < a3 )
          break;
        if ( !_strcmpi(String1, *(const char **)(v11 + 8)) )
          return v9;
        if ( ++v9 >= self[2] )
          return -1;
      }
    }
    return -1;
  }
  return v5;
}
