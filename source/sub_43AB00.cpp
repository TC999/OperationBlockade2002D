//----- (0043AB00) --------------------------------------------------------
int __thiscall sub_43AB00(_DWORD *this)
{
  int v2; // esi
  int v3; // edi
  int result; // eax

  byte_520974 = *(_BYTE *)(this[15] + 172);
  sub_422DC0((HKEY)AppName, aAnimatedocean, byte_520974 != 0);
  byte_4A34BC = *(_BYTE *)(this[16] + 172);
  sub_422BA0(AppName, aDoppler, byte_4A34BC != 0);
  byte_4A9F14 = *(_BYTE *)(this[18] + 172);
  sub_422DC0((HKEY)AppName, aShowcrosshair, byte_4A9F14 != 0);
  byte_520884 = *(_BYTE *)(this[19] + 172);
  sub_422DC0((HKEY)AppName, aInvertmouse, byte_520884 != 0);
  byte_4AC684 = *(_BYTE *)(this[17] + 172);
  sub_422DC0((HKEY)AppName, aGore, byte_4AC684 != 0);
  v2 = this[11];
  v3 = 64;
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      v3 = 128;
    }
    else if ( v2 == 2 )
    {
      v3 = 256;
    }
  }
  result = sub_422DC0((HKEY)AppName, aMaxparticles, v3);
  *(_DWORD *)&dword_520A44 = v3;
  return result;
}
