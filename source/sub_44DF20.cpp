//----- (0044DF20) --------------------------------------------------------
void __cdecl sub_44DF20(char *self, float a2, float a3, float *a4)
{
  int v6; // edx
  float v7; // ebx
  unsigned int i; // edi
  int v9; // eax
  int v10; // eax
  int v11; // eax
  float *v12; // esi
  int v13; // [esp+0h] [ebp-14h]
  float v14; // [esp+18h] [ebp+4h]

  if ( a2 != 0.0 )
  {
    v6 = *(_DWORD *)(LODWORD(a2) + 292);
    v7 = a3;
    v14 = 0.0;
    if ( v6 && (byte_4AC684 || _strnicmp(*(const char **)(v6 + 4), aBlood, strlen(aBlood))) )
    {
      sub_44D7C0(*(_DWORD *)(LODWORD(a2) + 292), (_DWORD *)LODWORD(v7), &a3);
      if ( a3 >= 0.0 )
        v14 = a3;
    }
    for ( i = 0; ; ++i )
    {
      v9 = *(_DWORD *)(LODWORD(a2) + 300);
      if ( !v9 || i >= (*(_DWORD *)(LODWORD(a2) + 304) - v9) >> 2 )
        break;
      v10 = *(_DWORD *)(v9 + 4 * i);
      if ( !*(_BYTE *)(v10 + 329) )
        v14 = 0.0;
      *(float *)&v13 = v14 * *(float *)(v10 + 296);
      sub_44DAD0((int *)v10, (float *)LODWORD(v7), v14, v13);
    }
    v11 = *(_DWORD *)(LODWORD(a2) + 312);
    if ( v11 )
      sub_44A490(*(char **)(dword_520970 + 276), v11, (_DWORD *)LODWORD(v7), a4, 0, 0);
    v12 = *(float **)(LODWORD(a2) + 316);
    if ( v12 )
      sub_44DD20(self, v12, (_DWORD *)LODWORD(v7));
  }
}
