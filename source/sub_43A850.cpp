//----- (0043A850) --------------------------------------------------------
_DWORD *__thiscall sub_43A850(_DWORD *this, int a2)
{
  sub_4233C0(this, a2, aOptions);
  *this = &off_4995C0;
  this[12] = sub_424350(this, aParticles);
  this[13] = sub_424350(this, aMousespeed);
  this[14] = sub_424350(this, aVolume);
  this[15] = sub_424350(this, aAnimatedocean);
  this[16] = sub_424350(this, aDoppler);
  this[17] = sub_424350(this, aBlood);
  this[18] = sub_424350(this, aCrosshair);
  this[19] = sub_424350(this, aInvertmouse);
  this[20] = 0;
  this[21] = 0;
  return this;
}
