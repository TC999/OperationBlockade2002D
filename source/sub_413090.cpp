//----- (00413090) --------------------------------------------------------
void __thiscall sub_413090(int this, float a2, float a3, float a4, float a5)
{
  double v6; // st7

  *(float *)(this + 20) = floor(a2) - 0.5;
  *(float *)(this + 24) = floor(a3) - 0.5;
  *(float *)(this + 28) = floor(a4) - 0.5;
  v6 = floor(a5);
  *(_DWORD *)(this + 64) = 0;
  *(_BYTE *)(this + 112) = 1;
  *(float *)(this + 32) = v6 - 0.5;
}
