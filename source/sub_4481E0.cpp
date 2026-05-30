//----- (004481E0) --------------------------------------------------------
int __cdecl sub_4481E0(_DWORD *self)
{
  int result; // eax

  result = self[1];
  if ( result )
    return (self[2] - result) / 260;
  return result;
}
