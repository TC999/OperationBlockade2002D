//----- (0043E8F0) --------------------------------------------------------
char __cdecl sub_43E8F0(_DWORD *self, int a2, int a3)
{
  int v4; // eax
  _WORD v6[3]; // [esp+8h] [ebp-48h] BYREF
  char v7[66]; // [esp+Eh] [ebp-42h] BYREF

  if ( (_BYTE)a3 )
  {
    v4 = self[21];
    if ( *(_DWORD *)(self[10] + 76) == v4 )
    {
      if ( a2 == 1 )
      {
        sub_421110(*(LPVOID **)(v4 + 112), asc_4AA198);
      }
      else if ( a2 == 28 )
      {
        sub_421280(*(_DWORD **)(v4 + 112));
        strcpy(v7, *(const char **)(*(_DWORD *)(self[21] + 112) + 8));
        sub_4117A0((_DWORD *)dword_4F5CC4, (_DWORD *)0x401, v6, 70, 5, 5000);
        sub_421110(*(LPVOID **)(self[21] + 112), asc_4AA198);
      }
    }
  }
  return sub_428590(self, a2, a3);
}
