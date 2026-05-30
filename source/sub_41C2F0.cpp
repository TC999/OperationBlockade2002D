//----- (0041C2F0) --------------------------------------------------------
double __cdecl sub_41C2F0(float *self, float a2)
{
  double result; // st7

  result = sub_41C2A0(a2);
  if ( result < *self )
    return result + 6.2831855;
  return result;
}
