//----- (0040A980) --------------------------------------------------------
int __cdecl sub_40A980(_DWORD *self)
{
  int result; // eax

  result = self[1];
  if ( result )
    return (self[2] - result) / 24;
  return result;
}
