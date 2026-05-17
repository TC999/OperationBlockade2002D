//----- (00451770) --------------------------------------------------------
void __thiscall sub_451770(_DWORD *this)
{
  char *v2; // eax
  char *v3; // edi

  v2 = (char *)this[2];
  *this = &off_499ADC;
  if ( v2 )
  {
    v3 = v2 - 4;
    `eh vector destructor iterator'(v2, 0xCu, *((_DWORD *)v2 - 1), (void (__thiscall *)(void *))sub_451710);
    sub_4885A6(v3);
    this[2] = 0;
  }
  sub_451820(this);
  if ( this[4] )
  {
    sub_4885A6((LPVOID)this[4]);
    this[4] = 0;
  }
}
