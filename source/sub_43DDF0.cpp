//----- (0043DDF0) --------------------------------------------------------
char __thiscall sub_43DDF0(_DWORD *self, char *String1, int a3)
{
  char result; // al
  int v5; // eax
  bool v6; // sf
  int v7; // eax

  if ( !String1 )
    return 1;
  if ( !_strcmpi(String1, aOkbutton) )
  {
    sub_4262D0(self[10]);
    result = 1;
    *(_BYTE *)(*(_DWORD *)(dword_520970 + 224) + 40) = 0;
    return result;
  }
  if ( _strcmpi(String1, aIconup) )
  {
    if ( _strcmpi(String1, aIcondown) )
      return 1;
    v7 = self[12] + 4;
    if ( v7 > self[13] )
      return 1;
  }
  else
  {
    v5 = self[12];
    v6 = v5 - 4 < 0;
    v5 -= 4;
    self[12] = v5;
    v7 = v6 ? 0 : v5;
  }
  self[12] = v7;
  sub_43DA70(self);
  sub_43DC50(self);
  return 1;
}
