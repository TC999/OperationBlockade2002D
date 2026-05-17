//----- (0040A0F0) --------------------------------------------------------
char sub_40A0F0()
{
  char result; // al

  result = byte_4F5B00;
  if ( byte_4F5B00 )
  {
    ShellExecuteA(0, Operation, File, 0, 0, 10);
    sub_4281B0(aIniFileErrorsS);
  }
  return result;
}
