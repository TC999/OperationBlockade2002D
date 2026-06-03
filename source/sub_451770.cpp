//----- (00451770) --------------------------------------------------------
void __cdecl sub_451770(_DWORD *self)
{
  char *v2; // eax
  char *v3; // edi

  v2 = (char *)self[2];
  *self = (uint32)(uintptr_t)&off_499ADC;
  if ( v2 )
  {
    v3 = v2 - 4;
    sub_451820(self);
    sub_4885A6(v3);
    self[2] = 0;
  }
  sub_451820(self);
  if ( self[4] )
  {
    sub_4885A6((LPVOID)self[4]);
    self[4] = 0;
  }
}
