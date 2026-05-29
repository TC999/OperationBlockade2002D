//----- (004246F0) --------------------------------------------------------
int __thiscall sub_4246F0(LPVOID **self)
{
  int v2; // ecx
  int result; // eax
  LPVOID *v4; // edi

  v2 = (int)self[20];
  if ( v2 )
  {
    result = sub_41CF50(v2);
    v4 = self[20];
    if ( v4 )
    {
      sub_41C700(self[20]);
      result = sub_4885A6(v4);
    }
    self[20] = 0;
  }
  return result;
}
