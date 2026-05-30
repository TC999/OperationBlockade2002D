//----- (0045B200) --------------------------------------------------------
char __cdecl sub_45B200(_DWORD *self)
{
  int v2; // ecx
  LPVOID *v3; // eax

  v2 = self[58];
  if ( v2 )
    sub_41CF50(v2);
  v3 = (LPVOID *)sub_450BF0((_DWORD *)dword_520970, 1, 0.0);
  sub_421110(v3, AppName);
  sub_402FC0(self[23]);
  if ( !*(_BYTE *)(dword_4F5CC4 + 936) && !*(_BYTE *)(dword_4F5CC4 + 937) )
    sub_45EA00(self[18]);
  sub_4626F0(*(_DWORD *)(dword_520970 + 280));
  self[25] = 7;
  *(_BYTE *)(*(_DWORD *)(dword_520970 + 280) + 11796) = 1;
  return sub_4261C0(*(_DWORD **)(dword_520970 + 232), aScoring, 1);
}
