//----- (00423340) --------------------------------------------------------
FILE *__cdecl sub_423340(char *FileName, unsigned int a2)
{
  FILE *result; // eax
  int v3; // esi
  int v5; // eax
  unsigned __int8 Buffer[1024]; // [esp+4h] [ebp-400h] BYREF

  result = fopen(FileName, Mode);
  v3 = (int)result;
  if ( result )
  {
    if ( (result->_flag & 0x10) == 0 )
    {
      do
      {
        v5 = sub_4898CA(Buffer, 1u, 0x400u, (FILE *)v3);
        if ( v5 > 0 )
          a2 = sub_423260(Buffer, v5, a2);
      }
      while ( (*(_BYTE *)(v3 + 12) & 0x10) == 0 );
    }
    fclose((FILE *)v3);
    return (FILE *)a2;
  }
  return result;
}
