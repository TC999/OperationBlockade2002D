//----- (0040B800) --------------------------------------------------------
int __thiscall sub_40B800(int *this)
{
  int v2; // ebx
  int i; // esi
  int result; // eax

  v2 = this[2];
  for ( i = this[1]; i != v2; i += 24 )
    sub_40A800(i);
  sub_4885A6((LPVOID)this[1]);
  result = 0;
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  return result;
}
