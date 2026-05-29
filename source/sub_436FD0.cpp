//----- (00436FD0) --------------------------------------------------------
int __thiscall sub_436FD0(float *self, float a2, float a3)
{
  float v4; // [esp+8h] [ebp+8h]

  v4 = a2 + a3;
  self[11] = v4;
  return sub_413240(LODWORD(a2), LODWORD(v4), 255, 0);
}
