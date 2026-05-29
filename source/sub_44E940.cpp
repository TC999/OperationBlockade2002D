//----- (0044E940) --------------------------------------------------------
int __thiscall sub_44E940(int *self)
{
  int v2; // ebx
  int i; // esi
  int result; // eax

  v2 = self[2];
  for ( i = self[1]; i != v2; i += 40 )
    sub_44C220(i);
  sub_4885A6((LPVOID)self[1]);
  result = 0;
  self[1] = 0;
  self[2] = 0;
  self[3] = 0;
  return result;
}
