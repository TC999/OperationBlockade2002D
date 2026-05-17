//----- (0041F2A0) --------------------------------------------------------
int __thiscall sub_41F2A0(int *this)
{
  int v2; // eax
  void *v3; // ecx
  int v4; // eax
  int v5; // ecx
  int v6; // edi

  v2 = this[2];
  v3 = (void *)*this;
  v2 += 8;
  this[2] = v2;
  v4 = sub_488DD7(v3, 4 * v2);
  if ( !v4 )
    return 0;
  v5 = this[2];
  v6 = this[1];
  *this = v4;
  memset((void *)(v4 + 4 * v6), 0, 4 * (v5 - v6));
  return 1;
}
