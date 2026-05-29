//----- (0040F460) --------------------------------------------------------
char __thiscall sub_40F460(_BYTE *self, int a2, char a3)
{
  char result; // al

  result = dword_520970;
  if ( !*(_BYTE *)(dword_520970 + 296) )
  {
    result = a3;
    if ( a3 )
    {
      if ( a2 == 23 )
      {
        result = self[416];
        self[416] = result == 0;
      }
    }
  }
  return result;
}
