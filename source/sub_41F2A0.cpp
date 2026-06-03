//----- (0041F2A0) --------------------------------------------------------
int __cdecl sub_41F2A0(int *self)
{
  int v2; // eax
  void *v3; // ecx
  int v4; // eax
  int v5; // ecx
  int v6; // edi

  v2 = self[2];
  v3 = (void *)*self;
  v2 += 8;
  self[2] = v2;
  v4 = (int)sub_488DD7(v3, 4 * v2);
  if ( !v4 )
    return 0;
  v5 = self[2];
  v6 = self[1];
  *self = v4;
  memset((void *)(v4 + 4 * v6), 0, 4 * (v5 - v6));
  return 1;
}
