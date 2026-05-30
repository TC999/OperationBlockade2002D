//----- (00429E40) --------------------------------------------------------
int __cdecl sub_429E40(FILE ***self)
{
  FILE **v1; // esi
  int result; // eax

  v1 = *self;
  if ( *self )
  {
    if ( v1[3] )
    {
      fclose(v1[3]);
      v1[3] = 0;
    }
    return sub_4885A6(v1);
  }
  return result;
}
