//----- (0041D9C0) --------------------------------------------------------
_DWORD *__thiscall sub_41D9C0(_DWORD *this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // ecx
  int v4; // edx
  void *v5; // edi
  int v6; // eax

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  *((_BYTE *)this + 16) = 1;
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  *((_BYTE *)this + 32) = 1;
  this[10] = 0;
  this[11] = 0;
  this[12] = 0;
  *((_BYTE *)this + 52) = 0;
  this[14] = 0;
  this[15] = 0;
  this[16] = 0;
  this[17] = 0;
  this[18] = 0;
  this[19] = 0;
  this[20] = 0;
  this[21] = 0;
  this[22] = 0;
  this[23] = 0;
  this[24] = 0;
  this[25] = 0;
  *this = &off_4992B4;
  dword_5200E8 = (int)this;
  byte_4A34BC = sub_422BA0(AppName, aDoppler, 1) != 0;
  *(_DWORD *)&dword_4A34C0 = sub_422BA0(AppName, aVolume, 100);
  v2 = operator new(0x4600u);
  if ( v2 )
  {
    v3 = v2 + 9;
    v4 = 128;
    do
    {
      *(v3 - 2) = 0;
      *(v3 - 1) = 0;
      *v3 = 0;
      v3[1] = 0;
      v3[2] = 0;
      v3[3] = 0;
      v3 += 35;
      --v4;
    }
    while ( v4 );
    v5 = v2;
  }
  else
  {
    v5 = 0;
  }
  v6 = 0;
  this[9] = v5;
  memset(v5, 0, 0x4600u);
  do
  {
    v6 += 140;
    *(_DWORD *)(this[9] + v6 - 140) = 0;
  }
  while ( v6 < 17920 );
  this[26] = 0;
  return this;
}
