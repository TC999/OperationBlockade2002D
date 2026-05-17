//----- (0047D8C7) --------------------------------------------------------
void *__cdecl sub_47D8C7(int a1)
{
  size_t v1; // esi
  void *v2; // edx

  if ( a1 == 2 )
  {
    v1 = 64;
  }
  else
  {
    if ( a1 != 1 )
      return 0;
    v1 = 412;
  }
  v2 = malloc(v1);
  if ( v2 )
    memset(v2, 0, v1);
  return v2;
}
