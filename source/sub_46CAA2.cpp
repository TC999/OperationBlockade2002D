//----- (0046CAA2) --------------------------------------------------------
_DWORD *__cdecl sub_46CAA2(int a1)
{
  _DWORD *result; // eax

  result = &unk_4AE9F0;
  if ( off_4AEFB8 <= &unk_4AE9F0 )
    return &unk_4AEF90;
  while ( a1 != *result )
  {
    result += 10;
    if ( result >= (_DWORD *)off_4AEFB8 )
      return &unk_4AEF90;
  }
  return result;
}
