//----- (00422950) --------------------------------------------------------
unsigned int __cdecl sub_422950(const char *a1)
{
  unsigned int result; // eax

  result = strcmp(a1, &byte_520534);
  if ( result )
  {
    if ( Stream )
    {
      fclose((FILE *)Stream);
      Stream = 0;
    }
    result = strlen(a1) + 1;
    qmemcpy(&byte_520534, a1, result);
  }
  return result;
}
