//----- (0041C4E0) --------------------------------------------------------
void __thiscall sub_41C4E0(float *self)
{
  float v2; // ecx
  float v3; // [esp+8h] [ebp-8h]
  float v4; // [esp+8h] [ebp-8h]

  v2 = *self;
  v3 = self[1];
  if ( v2 == v3 )
  {
    sub_41C2A0(v2);
  }
  else
  {
    v4 = fabs((double)rand() * 0.000030518509) * (v3 - v2) + v2;
    sub_41C2A0(v4);
  }
}
