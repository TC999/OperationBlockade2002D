//----- (004263E0) --------------------------------------------------------
_DWORD *__thiscall sub_4263E0(_DWORD *self, int a2)
{
  int v4; // ebx
  _DWORD *result; // eax
  char v6; // cl
  int v7; // [esp+10h] [ebp+4h]

  *self = a2;
  v4 = 12;
  if ( (a2 & 0x10) == 0x10 )
  {
    self[1] = 12;
    v4 = 24;
  }
  else
  {
    self[1] = -1;
  }
  if ( (a2 & 0x40) == 0x40 )
  {
    self[2] = v4;
    v4 += 4;
  }
  else
  {
    self[2] = -1;
  }
  if ( (a2 & 0x80) == 0x80 )
  {
    self[3] = v4;
    v4 += 4;
  }
  else
  {
    self[3] = -1;
  }
  result = 0;
  self[4] = 0;
  if ( (a2 & 0x800) == 0x800 )
  {
    self[4] = 8;
  }
  else if ( (a2 & 0x700) == 0x700 )
  {
    self[4] = 7;
  }
  else if ( (a2 & 0x600) == 0x600 )
  {
    self[4] = 6;
  }
  else if ( (a2 & 0x500) == 0x500 )
  {
    self[4] = 5;
  }
  else if ( (a2 & 0x400) == 0x400 )
  {
    self[4] = 4;
  }
  else if ( (a2 & 0x300) == 0x300 )
  {
    self[4] = 3;
  }
  else if ( (a2 & 0x200) == 0x200 )
  {
    self[4] = 2;
  }
  else if ( (a2 & 0x100) == 0x100 )
  {
    self[4] = 1;
  }
  v7 = 0;
  if ( (int)self[4] <= 0 )
  {
    self[21] = v4;
  }
  else
  {
    v6 = 16;
    result = self + 13;
    do
    {
      if ( (a2 & (2 << v6)) == 2 << v6 )
        *result = 4;
      else
        *result = 3 - (1 << v6 != (a2 & (1 << v6)));
      *(result - 8) = v4;
      v6 += 2;
      v4 += 4 * *result++;
      ++v7;
    }
    while ( v7 < self[4] );
    self[21] = v4;
  }
  return result;
}
