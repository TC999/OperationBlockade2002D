//----- (00408A50) --------------------------------------------------------
_DWORD *__thiscall sub_408A50(_DWORD *this)
{
  int v2; // eax
  _DWORD *result; // eax

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  *((_BYTE *)this + 16) = 1;
  this[7] = 0;
  this[8] = 0;
  this[9] = 0;
  *((_BYTE *)this + 40) = 1;
  this[11] = 0;
  this[12] = 0;
  this[13] = 0;
  *((_BYTE *)this + 56) = 1;
  this[22] = 0;
  this[23] = 0;
  this[24] = 0;
  this[26] = 0;
  this[27] = 0;
  this[28] = 0;
  this[34] = 0;
  this[35] = 0;
  this[36] = 0;
  *((_BYTE *)this + 148) = 1;
  this[38] = 0;
  this[39] = 0;
  this[40] = 0;
  *((_BYTE *)this + 164) = 1;
  *this = &off_499114;
  v2 = sub_422BA0(AppName, aMousespeed, 100);
  *(_DWORD *)&dword_4A1EC4 = v2;
  if ( v2 < 100 )
  {
    if ( v2 <= 10 )
      *(_DWORD *)&dword_4A1EC4 = 10;
    return this;
  }
  else
  {
    result = this;
    *(_DWORD *)&dword_4A1EC4 = 100;
  }
  return result;
}
