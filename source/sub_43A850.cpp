extern char aOptions[];
extern char aParticles[];
extern char aVolume[];
extern char aDoppler[];
extern char aBlood[];
extern char aCrosshair[];

//----- (0043A850) --------------------------------------------------------
_DWORD *__cdecl sub_43A850(_DWORD *self, int a2)
{
  sub_4233C0(self, a2, aOptions);
  *self = (int)&off_4995C0;
  self[12] = (int)sub_424350(self, aParticles);
  self[13] = (int)sub_424350(self, aMousespeed);
  self[14] = (int)sub_424350(self, aVolume);
  self[15] = (int)sub_424350(self, aAnimatedocean);
  self[16] = (int)sub_424350(self, aDoppler);
  self[17] = (int)sub_424350(self, aBlood);
  self[18] = (int)sub_424350(self, aCrosshair);
  self[19] = (int)sub_424350(self, aInvertmouse);
  self[20] = 0;
  self[21] = 0;
  return self;
}
