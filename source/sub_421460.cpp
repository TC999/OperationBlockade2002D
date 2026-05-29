//----- (00421460) --------------------------------------------------------
void __thiscall sub_421460(int self, int a2)
{
  double v2; // st7
  double v3; // st7
  double v4; // st7
  float v5; // [esp+4h] [ebp-4h]

  v5 = *(float *)(dword_520970 + 68) + *(float *)(self + 60);
  v2 = *(float *)(self + 64);
  *(float *)(self + 60) = v5;
  if ( v2 >= 0.0 )
  {
    if ( v5 > (double)*(float *)(self + 64) )
    {
      if ( v5 >= (double)*(float *)(self + 68) )
      {
        sub_4212C0(self, *(_DWORD *)(self + 76));
      }
      else
      {
        v3 = *(float *)(self + 68) - *(float *)(self + 64);
        if ( v3 == 0.0 )
          v4 = 0.0;
        else
          v4 = (v5 - *(float *)(self + 64)) / v3;
        sub_4212C0(
          self,
          (__int64)(((double)*(int *)(self + 76) - (double)*(int *)(self + 72)) * v4 + (double)*(int *)(self + 72)));
      }
    }
    else
    {
      sub_4212C0(self, *(_DWORD *)(self + 72));
    }
  }
}
