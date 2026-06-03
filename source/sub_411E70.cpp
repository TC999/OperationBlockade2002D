//----- (00411E70) --------------------------------------------------------
void __cdecl sub_411E70()
{
  signed int i; // esi

  if ( byte_4F5CB4 )
  {
    for ( i = 0; i < (int)NumOfElements; ++i )
      sub_4885A6(*((LPVOID *)Base + i));
  }
  memset(Base, 0, 4 * NumOfElements);
  NumOfElements = 0;
  sub_488CEE(Base);
  dword_4F5CB0 = 0;
  *(char **)&Base = 0;
}
