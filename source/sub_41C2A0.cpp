//----- (0041C2A0) --------------------------------------------------------
double __stdcall sub_41C2A0(float a1)
{
  double result; // st7

  for ( result = a1; result < 0.0; result = result + 6.2831855 )
    ;
  for ( ; result > 6.2831855; result = result - 6.2831855 )
    ;
  return result;
}
