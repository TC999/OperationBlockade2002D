//----- (0043A850) --------------------------------------------------------
_DWORD *__thiscall sub_43A850(_DWORD *self, int a2)
{
  sub_4233C0(self, a2, aOptions);
  *self = &off_4995C0;
  self[12] = sub_424350(self, aParticles);
  self[13] = sub_424350(self, aMousespeed);
  self[14] = sub_424350(self, aVolume);
  self[15] = sub_424350(self, aAnimatedocean);
  self[16] = sub_424350(self, aDoppler);
  self[17] = sub_424350(self, aBlood);
  self[18] = sub_424350(self, aCrosshair);
  self[19] = sub_424350(self, aInvertmouse);
  self[20] = 0;
  self[21] = 0;
  return self;
}
