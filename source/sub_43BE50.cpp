//----- (0043BE50) --------------------------------------------------------
int __thiscall sub_43BE50(LPVOID *this)
{
  LPVOID *v2; // esi
  int v3; // edi

  *this = &off_499710;
  v2 = this + 12;
  v3 = 16;
  do
  {
    sub_4885A6(*v2++);
    --v3;
  }
  while ( v3 );
  return sub_4234A0(this);
}
