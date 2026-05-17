//----- (004164A0) --------------------------------------------------------
int __thiscall sub_4164A0(_DWORD *this, int a2)
{
  int v2; // edx
  int v3; // eax

  v2 = this[1034];
  this[1033] = a2;
  v3 = v2 + a2;
  if ( this[1035] < v2 + a2 )
    v3 = this[1035];
  this[1035] = v3;
  return sub_4164D0(this);
}
