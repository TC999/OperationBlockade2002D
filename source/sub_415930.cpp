//----- (00415930) --------------------------------------------------------
void __thiscall sub_415930(int this, int a2, float a3)
{
  double v3; // st7

  *(_DWORD *)(this + 20) = 1065353216;
  v3 = (double)a2 + a3 - ((double)*(int *)(this + 4136) + *(float *)(this + 16));
  if ( v3 >= 0.0000099999997 || v3 <= -0.0000099999997 )
    *(float *)(this + 20) = v3 + 1.0;
  else
    *(_DWORD *)(this + 20) = 1065353216;
  if ( *(float *)(this + 20) <= 1.5 )
  {
    if ( *(float *)(this + 20) < 0.5 )
      *(_DWORD *)(this + 20) = 1056964608;
  }
  else
  {
    *(_DWORD *)(this + 20) = 1069547520;
  }
}
