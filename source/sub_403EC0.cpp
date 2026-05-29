//----- (00403EC0) --------------------------------------------------------
char __thiscall sub_403EC0(int self, char *FileName)
{
  FILE *v3; // eax
  char result; // al
  char v5; // bl

  v3 = fopen(FileName, Mode);
  *(_DWORD *)(self + 20) = v3;
  if ( !v3 )
    return 0;
  if ( (unsigned __int8)sub_403F50(self) && (unsigned __int8)sub_403FE0(self) && (unsigned __int8)sub_404510(self) )
  {
    v5 = 1;
    if ( !*(_DWORD *)(self + 52) )
    {
      if ( byte_4A1D45 )
        sub_4051C0(self);
    }
  }
  else
  {
    v5 = 0;
  }
  fclose(*(FILE **)(self + 20));
  result = v5;
  *(_DWORD *)(self + 20) = 0;
  return result;
}
