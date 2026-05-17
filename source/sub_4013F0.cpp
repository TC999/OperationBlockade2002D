//----- (004013F0) --------------------------------------------------------
int __thiscall sub_4013F0(_DWORD *this)
{
  int result; // eax

  *this = &off_49901C;
  result = sub_408F30(dword_520970);
  if ( (_DWORD *)result == this )
    result = sub_408EF0(0);
  *this = &off_499040;
  return result;
}
