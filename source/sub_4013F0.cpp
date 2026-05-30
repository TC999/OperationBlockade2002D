//----- (004013F0) --------------------------------------------------------
int __cdecl sub_4013F0(_DWORD *self)
{
  int result; // eax

  *self = &off_49901C;
  result = sub_408F30(dword_520970);
  if ( (_DWORD *)result == self )
    result = sub_408EF0(0);
  *self = &off_499040;
  return result;
}
