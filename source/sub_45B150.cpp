//----- (0045B150) --------------------------------------------------------
char __cdecl sub_45B150(_DWORD *self, int ArgList, int a3, int a4)
{
  char result; // al
  int v6; // edx
  int v7; // eax
  _BYTE *v8; // ecx
  int v9; // ecx
  _WORD v10[3]; // [esp+10h] [ebp-18h] BYREF
  int v11; // [esp+16h] [ebp-12h]
  int v12; // [esp+1Ah] [ebp-Eh]
  int v13; // [esp+1Eh] [ebp-Ah]
  int v14; // [esp+22h] [ebp-6h]

  sub_4229D0("StartMultiplayerMission(mission=%d, sky=%d, clouds=%d)", ArgList, a3, a4);
  result = dword_4F5CC4;
  if ( *(_BYTE *)(dword_4F5CC4 + 936) )
  {
    *(_BYTE *)(dword_4F5CC4 + 108) = 0;
    v6 = *(_DWORD *)(dword_520970 + 280);
    v7 = 0;
    if ( *(int *)(v6 + 520) > 0 )
    {
      v8 = (_BYTE *)(v6 + 897);
      do
      {
        *v8 = 0;
        ++v7;
        v8 += 352;
      }
      while ( v7 < *(_DWORD *)(v6 + 520) );
    }
    v9 = self[5];
    self[25] = 10;
    v14 = v9;
    v11 = ArgList;
    v12 = a3;
    v13 = a4;
    return sub_4117A0((_DWORD *)dword_4F5CC4, (_DWORD *)0x501, v10, 22, 7, 0);
  }
  return result;
}
