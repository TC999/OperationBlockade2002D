//----- (0043A080) --------------------------------------------------------
char __thiscall sub_43A080(_DWORD *this, int a2, int a3)
{
  int v4; // eax
  int v5; // eax
  LPVOID *v6; // eax
  const char *v8; // [esp-4h] [ebp-10h]

  if ( (_BYTE)a3 )
  {
    if ( a2 == 12 )
    {
      v4 = this[100] - 1;
      this[100] = v4;
      if ( v4 < 0 )
        this[100] = 12;
LABEL_8:
      v8 = off_4AA5F0[this[100]];
      v6 = (LPVOID *)sub_450BF0(1, 2.0);
      sub_421110(v6, v8);
      sub_43A120(this[100]);
      return sub_428590(this, a2, a3);
    }
    if ( a2 == 13 )
    {
      v5 = this[100] + 1;
      this[100] = v5;
      if ( v5 >= 12 )
        this[100] = 0;
      goto LABEL_8;
    }
  }
  return sub_428590(this, a2, a3);
}
