//----- (00403BB0) --------------------------------------------------------
bool __cdecl sub_403BB0(_DWORD *self, int a2, const char *a3)
{
  int v3; // ebx
  char *v4; // edx
  int v5; // eax

  v3 = *(_DWORD *)(self[1] + 172 * a2 + 52);
  if ( !v3 || !*(_DWORD *)(v3 + 84) )
    return 0;
  if ( *(_DWORD *)(v3 + 76) )
    sub_4885A6(*(LPVOID *)(v3 + 76));
  v4 = (char *)operator new(strlen(a3) + 1);
  *(_DWORD *)(v3 + 76) = v4;
  strcpy(v4, a3);
  if ( *(_DWORD *)(v3 + 84) )
  {
    sub_422230();
    *(_DWORD *)(v3 + 84) = 0;
  }
  if ( byte_4A1D44 )
  {
    v5 = sub_422400(*(char **)(v3 + 76), 0);
    *(_DWORD *)(v3 + 84) = v5;
    return v5 != 0;
  }
  else
  {
    *(_DWORD *)(v3 + 84) = 0;
    return 0;
  }
}
