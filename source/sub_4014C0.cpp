//----- (004014C0) --------------------------------------------------------
void __thiscall sub_4014C0(float *self, float a2, float a3, float a4)
{
  if ( a2 != 0.0 )
  {
    sub_401040((int)(self + 11), a2);
    sub_401040((int)(self + 14), a2);
  }
  if ( a4 != 0.0 )
  {
    sub_401080(self + 11, a4);
    sub_401080(self + 14, a4);
  }
  if ( a3 != 0.0 )
  {
    sub_401000(self + 11, a3);
    sub_401000(self + 14, a3);
  }
}
