//----- (004278F0) --------------------------------------------------------
int __cdecl sub_4278F0(int a1, int a2, int a3)
{
  void **v4; // ecx

  if ( dword_520970 )
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_520970 + 4))(dword_520970, a2, a3);
  if ( (_BYTE)a3 && a2 != 68 )
  {
    if ( a2 == 67 )
    {
      dword_5209F0 = 1;
      return 0;
    }
    if ( a2 == 63 )
    {
      v4 = (void **)dword_5209B8;
      *(_BYTE *)(dword_5209B8 + 33) = *(_BYTE *)(dword_5209B8 + 33) == 0;
      sub_421540(v4);
    }
  }
  return 0;
}
