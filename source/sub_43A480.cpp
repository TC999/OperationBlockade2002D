//----- (0043A480) --------------------------------------------------------
char __cdecl sub_43A480(int self, int a2, char a3)
{
  char result; // al

  result = a3;
  if ( a3 )
  {
    result = *(_BYTE *)(self + 16);
    if ( result )
    {
      if ( *(_DWORD *)(self + 44) == 1 )
        return sub_43A4A0((_DWORD *)self);
    }
  }
  return result;
}
