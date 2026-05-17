//----- (0043BDB0) --------------------------------------------------------
_DWORD *__thiscall sub_43BDB0(_DWORD *this, int a2)
{
  _DWORD *v3; // esi
  int v4; // edi
  _BYTE *v5; // eax

  sub_4233C0(this, a2, aIpx);
  v3 = this + 12;
  *this = &off_499710;
  memset(this + 12, 0, 0x40u);
  v4 = 16;
  do
  {
    v5 = operator new(0x104u);
    *v3++ = v5;
    --v4;
    *v5 = 0;
  }
  while ( v4 );
  return this;
}
