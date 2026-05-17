//----- (0041C190) --------------------------------------------------------
void __thiscall sub_41C190(int this)
{
  float v2; // [esp+4h] [ebp-Ch]
  float v3; // [esp+8h] [ebp-8h]
  float v4; // [esp+Ch] [ebp-4h]

  while ( *(int *)(this + 32) < 4 )
  {
    v2 = *(float *)(this + 4);
    v3 = *(float *)(this + 8);
    if ( v2 == v3 )
    {
      sub_41C0B0((_DWORD *)this, *(float *)(this + 4));
    }
    else
    {
      v4 = fabs((double)rand() * 0.000030518509) * (v3 - v2) + v2;
      sub_41C0B0((_DWORD *)this, v4);
    }
  }
}
