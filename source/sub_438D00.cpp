//----- (00438D00) --------------------------------------------------------
int __cdecl sub_438D00(int *self)
{
  _DWORD *v2; // eax
  _DWORD *v3; // eax
  float v5; // [esp+0h] [ebp-18h]

  self[121] = 7;
  v2 = operator new(0x15Cu);
  if ( v2 )
    v3 = sub_41C6A0(v2);
  else
    v3 = 0;
  self[104] = (int)v3;
  sub_41C7A0((int)v3, 1);
  sub_41C760(self[104], aSoundsDialogue);
  sub_41C7E0((_BYTE *)self[104], 1);
  v5 = (double)*(int *)&dword_4A34C0 * 0.0099999998 * 0.40000001 + 0.60000002;
  return sub_41CFD0(self[104], v5);
}
