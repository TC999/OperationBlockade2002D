//----- (0043B6E0) --------------------------------------------------------
char __thiscall sub_43B6E0(_DWORD *self, int a2, int a3, int a4)
{
  const char *v4; // eax
  int v5; // ecx
  int v6; // edx

  v4 = sub_424350(self, aLevelhighscore);
  v5 = *(_DWORD *)(dword_520970 + 280);
  if ( a4 > *(_DWORD *)(v5 + 496) )
    v6 = 0;
  else
    v6 = *(_DWORD *)(*(_DWORD *)(v5 + 508) + 4 * a4);
  sub_421190(*((_DWORD *)v4 + 28), "%d", v6);
  return 1;
}
