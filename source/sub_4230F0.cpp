//----- (004230F0) --------------------------------------------------------
double __thiscall sub_4230F0(_DWORD *this)
{
  int v1; // eax
  double result; // st7
  int v3; // edx
  float *v4; // ecx

  v1 = this[1];
  result = 0.0;
  if ( v1 > 1 )
  {
    v3 = v1 - 1;
    v4 = (float *)(*this + 8);
    do
    {
      if ( result <= *v4 )
        result = *v4;
      v4 += 2;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
