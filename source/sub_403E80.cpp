//----- (00403E80) --------------------------------------------------------
int __thiscall sub_403E80(_DWORD *this, char *ArgList)
{
  int result; // eax

  if ( !(unsigned __int8)sub_403EC0(ArgList) )
    sub_4281B0(aFailedToLoadAn, (char)ArgList);
  result = this[13];
  this[13] = result + 1;
  return result;
}
