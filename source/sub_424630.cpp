//----- (00424630) --------------------------------------------------------
char __thiscall sub_424630(int *this)
{
  int v2; // eax
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  float v6; // [esp+0h] [ebp-18h]

  v2 = this[20];
  if ( !v2 )
  {
    v3 = operator new(0x15Cu);
    if ( v3 )
      v4 = sub_41C6A0(v3);
    else
      v4 = 0;
    this[20] = (int)v4;
    sub_41C7A0((int)v4, 1);
    sub_41C760(this[20], aSoundsUiMusicW);
    sub_41C7E0((_BYTE *)this[20], 1);
    sub_41CA40(this[20]);
    v6 = (double)*(int *)&dword_4A34C0 * 0.0099999998 * 0.40000001 + 0.60000002;
    sub_41CFD0(this[20], v6);
    LOBYTE(v2) = sub_41CD90(this[20]);
  }
  return v2;
}
