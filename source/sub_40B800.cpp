//----- (0040B800) --------------------------------------------------------
int __thiscall sub_40B800(int *self)
{
  int v2; // ebx
  int i; // esi
  int result; // eax

  v2 = self[2];
  for ( i = self[1]; i != v2; i += 24 )
    sub_40A800(i);
  sub_4885A6((LPVOID)self[1]);
  result = 0;
  self[1] = 0;
  self[2] = 0;
  self[3] = 0;
  return result;
}
