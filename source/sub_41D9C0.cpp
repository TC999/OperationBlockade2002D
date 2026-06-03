extern char aDoppler[];
extern char aVolume[];

//----- (0041D9C0) --------------------------------------------------------
_DWORD *__cdecl sub_41D9C0(_DWORD *self)
{
  _DWORD *v2; // eax
  _DWORD *v3; // ecx
  int v4; // edx
  void *v5; // edi
  int v6; // eax

  self[1] = 0;
  self[2] = 0;
  self[3] = 0;
  *((_BYTE *)self + 16) = 1;
  self[5] = 0;
  self[6] = 0;
  self[7] = 0;
  *((_BYTE *)self + 32) = 1;
  self[10] = 0;
  self[11] = 0;
  self[12] = 0;
  *((_BYTE *)self + 52) = 0;
  self[14] = 0;
  self[15] = 0;
  self[16] = 0;
  self[17] = 0;
  self[18] = 0;
  self[19] = 0;
  self[20] = 0;
  self[21] = 0;
  self[22] = 0;
  self[23] = 0;
  self[24] = 0;
  self[25] = 0;
  *self = (uint32)(uintptr_t)&off_4992B4;
  dword_5200E8 = (int)self;
  byte_4A34BC = sub_422BA0(AppName, aDoppler, 1) != 0;
  *(_DWORD *)&dword_4A34C0 = sub_422BA0(AppName, aVolume, 100);
  v2 = (_DWORD *)operator new(0x4600u);
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
  self[9] = (uint32)(uintptr_t)v5;
  memset(v5, 0, 0x4600u);
  do
  {
    v6 += 140;
    *(_DWORD *)(self[9] + v6 - 140) = 0;
  }
  while ( v6 < 17920 );
  self[26] = 0;
  return self;
}
