//----- (004013F0) --------------------------------------------------------
int __cdecl sub_4013F0(_DWORD *self)
{
  int result; // eax

  *self = (uint32)(INT_PTR)&off_49901C;
  result = sub_408F30((_DWORD*)dword_520970);
  if ( (_DWORD *)result == self )
    result = sub_408EF0(dword_520970, 0);
  *self = (uint32)(INT_PTR)&off_499040;
  return result;
}
