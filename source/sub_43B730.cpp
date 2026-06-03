extern char aShowalllevels[];
extern char aLevellist[];
extern char aLevelhighscore[];
extern char aGamescore[];

//----- (0043B730) --------------------------------------------------------
int __cdecl sub_43B730(int self)
{
  int v2; // edi
  int v3; // ebp
  const char *v4; // esi
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // ebp
  const char *v9; // eax
  int v10; // esi
  int v11; // ecx
  int v12; // esi
  const char *v13; // esi
  int v14; // eax
  int v16; // [esp+10h] [ebp-4h]

  sub_424630(*(int **)(self + 40));
  v2 = *(_DWORD *)(16 * *(_DWORD *)(*(_DWORD *)(dword_520970 + 236) + 20) + *(_DWORD *)(dword_520970 + 236) + 28);
  v3 = *(_DWORD *)(*(_DWORD *)(dword_520970 + 280) + 496);
  v16 = v3;
  if ( sub_422BA0(AppName, aShowalllevels, 0) )
    v3 = v2 - 1;
  v4 = sub_424350((_DWORD *)self, aLevellist);
  v5 = v3 + 2;
  *((_DWORD *)v4 + 32) = 0;
  if ( v3 + 2 >= v2 )
    v5 = v2;
  *((_DWORD *)v4 + 33) = v5;
  v6 = v2 - 1;
  if ( v16 + 1 < v2 - 1 )
    v6 = v16 + 1;
  v7 = *((_DWORD *)v4 + 30);
  *((_DWORD *)v4 + 31) = v6;
  if ( v6 > v7 - 1 )
  {
    do
    {
      v8 = v7 + *((_DWORD *)v4 + 32);
      *((_DWORD *)v4 + 32) = v8;
    }
    while ( v6 > v8 + v7 - 1 );
  }
  *((_BYTE *)v4 + 136) = 1;
  v9 = sub_424350((_DWORD *)self, aLevelhighscore);
  v10 = *((_DWORD *)v4 + 31);
  v11 = *(_DWORD *)(dword_520970 + 280);
  if ( v10 > *(_DWORD *)(v11 + 496) )
    v12 = 0;
  else
    v12 = *(_DWORD *)(*(_DWORD *)(v11 + 508) + 4 * v10);
  sub_421190(*((_DWORD *)v9 + 28), "%d", v12);
  v13 = sub_424350((_DWORD *)self, aGamescore);
  v14 = sub_45EA60((_DWORD *)*(_DWORD *)(dword_520970 + 280));
  sub_421190(*((_DWORD *)v13 + 28), "%d", v14);
  return sub_43B9E0((_DWORD *)self);
}
