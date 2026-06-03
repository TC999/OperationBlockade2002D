//----- (0043C820) --------------------------------------------------------
int __cdecl sub_43C820(LPVOID **self)
{
  int v2; // ecx
  int result; // eax
  LPVOID *v4; // edi

  v2 = (int)self[11];
  if ( v2 )
  {
    result = sub_41CF50(v2);
    v4 = self[11];
    if ( v4 )
    {
      sub_41C700(self[11]);
      result = 0;
    }
    self[11] = 0;
  }
  return result;
}
