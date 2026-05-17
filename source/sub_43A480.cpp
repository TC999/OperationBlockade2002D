//----- (0043A480) --------------------------------------------------------
char __thiscall sub_43A480(int this, int a2, char a3)
{
  char result; // al

  result = a3;
  if ( a3 )
  {
    result = *(_BYTE *)(this + 16);
    if ( result )
    {
      if ( *(_DWORD *)(this + 44) == 1 )
        return sub_43A4A0((_DWORD *)this);
    }
  }
  return result;
}
