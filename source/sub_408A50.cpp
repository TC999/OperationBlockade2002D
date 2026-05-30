//----- (00408A50) --------------------------------------------------------
_DWORD *__cdecl sub_408A50(_DWORD *self)
{
  int v2; // eax
  _DWORD *result; // eax

  self[1] = 0;
  self[2] = 0;
  self[3] = 0;
  *((_BYTE *)self + 16) = 1;
  self[7] = 0;
  self[8] = 0;
  self[9] = 0;
  *((_BYTE *)self + 40) = 1;
  self[11] = 0;
  self[12] = 0;
  self[13] = 0;
  *((_BYTE *)self + 56) = 1;
  self[22] = 0;
  self[23] = 0;
  self[24] = 0;
  self[26] = 0;
  self[27] = 0;
  self[28] = 0;
  self[34] = 0;
  self[35] = 0;
  self[36] = 0;
  *((_BYTE *)self + 148) = 1;
  self[38] = 0;
  self[39] = 0;
  self[40] = 0;
  *((_BYTE *)self + 164) = 1;
  *self = &off_499114;
  v2 = sub_422BA0(AppName, aMousespeed, 100);
  *(_DWORD *)&dword_4A1EC4 = v2;
  if ( v2 < 100 )
  {
    if ( v2 <= 10 )
      *(_DWORD *)&dword_4A1EC4 = 10;
    return self;
  }
  else
  {
    result = self;
    *(_DWORD *)&dword_4A1EC4 = 100;
  }
  return result;
}
