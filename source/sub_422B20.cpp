//----- (00422B20) --------------------------------------------------------
char __cdecl sub_422B20(char *FileName)
{
  char result; // al
  FILE *v2; // eax

  result = sub_422AE0(FileName);
  if ( result )
  {
    v2 = fopen(FileName, (const char *)Mode);
    if ( v2 )
    {
      fclose(v2);
      return 1;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
