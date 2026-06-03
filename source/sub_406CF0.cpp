//----- (00406CF0) --------------------------------------------------------
int __cdecl sub_406CF0(int self, float a2)
{
  int result; // eax
  float v4; // edi
  float v5; // [esp+0h] [ebp-Ch]

  v5 = a2 * *(float *)(self + 36);
  sub_406D30(self, v5);
  result = *(_DWORD *)(self + 20);
  v4 = 0.0;
  if ( result > 0 )
  {
    do
    {
      sub_406DF0((_DWORD *)self, v4);
      result = *(_DWORD *)(self + 20);
      ++LODWORD(v4);
    }
    while ( SLODWORD(v4) < result );
  }
  return result;
}
