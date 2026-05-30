//----- (0041C190) --------------------------------------------------------
void __cdecl sub_41C190(int self)
{
  float v2; // [esp+4h] [ebp-Ch]
  float v3; // [esp+8h] [ebp-8h]
  float v4; // [esp+Ch] [ebp-4h]

  while ( *(int *)(self + 32) < 4 )
  {
    v2 = *(float *)(self + 4);
    v3 = *(float *)(self + 8);
    if ( v2 == v3 )
    {
      sub_41C0B0((_DWORD *)self, *(float *)(self + 4));
    }
    else
    {
      v4 = fabs((double)rand() * 0.000030518509) * (v3 - v2) + v2;
      sub_41C0B0((_DWORD *)self, v4);
    }
  }
}
