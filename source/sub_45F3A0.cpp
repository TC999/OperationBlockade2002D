//----- (0045F3A0) --------------------------------------------------------
int __cdecl sub_45F3A0(char *self, int a2, bool *a3, bool *a4, _DWORD *a5)
{
  char *v5; // edx
  int v6; // eax
  bool v7; // cc
  bool v8; // al
  bool v9; // al
  __int64 v10; // rax

  v5 = &self[28 * a2];
  if ( !*((_DWORD *)v5 + 2880) )
    goto LABEL_19;
  v6 = *((_DWORD *)v5 + 2881);
  v7 = v6 <= 0;
  if ( !v6 )
  {
    if ( *((_DWORD *)v5 + 2882) )
    {
      v7 = 1;
      goto LABEL_5;
    }
LABEL_19:
    LODWORD(v10) = a4;
    *a4 = 0;
    *a3 = 0;
    *a5 = 0;
    return v10;
  }
LABEL_5:
  v8 = !v7 && *((float *)v5 + 2885) <= 0.0;
  *a3 = v8;
  v9 = *((_DWORD *)v5 + 2882) > 0;
  *a4 = v9;
  if ( !*a3 && !v9 )
    *a5 = *((_DWORD *)v5 + 2885);
  v10 = (unsigned int)(self + 11528);
  while ( !*(_DWORD *)(v10 - 8) || *(int *)v10 <= 0 )
  {
    ++HIDWORD(v10);
    LODWORD(v10) = v10 + 28;
    if ( SHIDWORD(v10) >= 3 )
      return v10;
  }
  if ( *a3 )
  {
    *a3 = 0;
    *a4 = 1;
  }
  return v10;
}
