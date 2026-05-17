//----- (004204A0) --------------------------------------------------------
int sub_4204A0()
{
  int result; // eax

  result = 0;
  if ( dword_520100 > 0 )
    result = sub_4204C0();
  dword_520100 = -1;
  return result;
}
