//----- (0045B2B0) --------------------------------------------------------
int __cdecl sub_45B2B0(int self, const char *a2)
{
  int v3; // eax
  LPVOID *v4; // eax
  _WORD v6[3]; // [esp+10h] [ebp-48h] BYREF
  char v7[66]; // [esp+16h] [ebp-42h] BYREF

  sub_41CF50(*(_DWORD *)(self + 236));
  if ( *(_BYTE *)(dword_4F5CC4 + 936) )
  {
    sub_4229D0(aHostIsAborting);
    strcpy(v7, a2);
    sub_4117A0((_DWORD *)dword_4F5CC4, (_DWORD *)0x504, v6, 70, 15, 0);
  }
  v3 = dword_520970;
  if ( !*(_BYTE *)(dword_520970 + 296) )
  {
    *(_BYTE *)(dword_520970 + 296) = 1;
    v3 = dword_520970;
  }
  if ( !*(_BYTE *)(dword_4F5CC4 + 936) && !*(_BYTE *)(dword_4F5CC4 + 937) )
    *(_BYTE *)(v3 + 20) = 1;
  *(_DWORD *)(self + 100) = 11;
  strcpy((char *)(self + 140), a2);
  sub_4262D0(*(_DWORD *)(dword_520970 + 232));
  sub_436FA0(*(float **)(dword_520970 + 224), 0.0, 1.0);
  v4 = (LPVOID *)sub_450BF0((_DWORD *)dword_520970, 1, 0.0);
  return sub_421110(v4, AppName);
}
