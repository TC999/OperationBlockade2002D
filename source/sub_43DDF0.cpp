//----- (0043DDF0) --------------------------------------------------------
char __thiscall sub_43DDF0(_DWORD *this, char *String1, int a3)
{
  char result; // al
  int v5; // eax
  bool v6; // sf
  int v7; // eax

  if ( !String1 )
    return 1;
  if ( !_strcmpi(String1, aOkbutton) )
  {
    sub_4262D0(this[10]);
    result = 1;
    *(_BYTE *)(*(_DWORD *)(dword_520970 + 224) + 40) = 0;
    return result;
  }
  if ( _strcmpi(String1, aIconup) )
  {
    if ( _strcmpi(String1, aIcondown) )
      return 1;
    v7 = this[12] + 4;
    if ( v7 > this[13] )
      return 1;
  }
  else
  {
    v5 = this[12];
    v6 = v5 - 4 < 0;
    v5 -= 4;
    this[12] = v5;
    v7 = v6 ? 0 : v5;
  }
  this[12] = v7;
  sub_43DA70(this);
  sub_43DC50(this);
  return 1;
}
