//----- (004334A0) --------------------------------------------------------
char __stdcall sub_4334A0(int a1, char a2)
{
  char result; // al

  result = dword_4F5CC4;
  if ( !*(_BYTE *)(dword_4F5CC4 + 936) && !*(_BYTE *)(dword_4F5CC4 + 937) )
  {
    result = a2;
    if ( a2 )
    {
      if ( a1 == 211 )
        return sub_408F30(dword_520970);
    }
  }
  return result;
}
