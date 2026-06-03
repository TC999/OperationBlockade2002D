//----- (0043A080) --------------------------------------------------------
char __cdecl sub_43A080(_DWORD *self, int a2, int a3)
{
  int v4; // eax
  int v5; // eax
  LPVOID *v6; // eax
  const char *v8; // [esp-4h] [ebp-10h]

  if ( (_BYTE)a3 )
  {
    if ( a2 == 12 )
    {
      v4 = self[100] - 1;
      self[100] = v4;
      if ( v4 < 0 )
        self[100] = 12;
LABEL_8:
      v8 = ((const char **)off_4AA5F0)[self[100]];
      v6 = (LPVOID *)sub_450BF0((_DWORD *)dword_520970, 1, 2.0);
      sub_421110(v6, v8);
      sub_43A120((int)self, self[100]);
      return sub_428590(self, a2, a3);
    }
    if ( a2 == 13 )
    {
      v5 = self[100] + 1;
      self[100] = v5;
      if ( v5 >= 12 )
        self[100] = 0;
      goto LABEL_8;
    }
  }
  return sub_428590(self, a2, a3);
}
