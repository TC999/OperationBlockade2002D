//----- (00419CC0) --------------------------------------------------------
int __cdecl sub_419CC0(_DWORD *self)
{
  int result; // eax

  result = self[1];
  if ( result )
    return (self[2] - result) / 60;
  return result;
}
