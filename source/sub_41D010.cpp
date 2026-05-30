//----- (0041D010) --------------------------------------------------------
char __cdecl sub_41D010(_DWORD *self, float a2)
{
  int v2; // esi
  double v4; // st7
  char v5; // [esp+0h] [ebp-4h]

  v2 = self[8];
  if ( !v2 )
    return 0;
  v4 = a2;
  if ( a2 >= -1.0 )
  {
    if ( v4 > 1.0 )
      v4 = 1.0;
  }
  else
  {
    v4 = -1.0;
  }
  if ( !(*(int (__stdcall **)(int, _DWORD))(*(_DWORD *)v2 + 64))(v2, (__int64)(v4 * 10000.0)) )
    return 1;
  sub_4229D0(aSoundCouldnTPa, v5);
  return 0;
}
