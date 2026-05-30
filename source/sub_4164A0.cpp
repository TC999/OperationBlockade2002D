//----- (004164A0) --------------------------------------------------------
int __cdecl sub_4164A0(_DWORD *self, int a2)
{
  int v2; // edx
  int v3; // eax

  v2 = self[1034];
  self[1033] = a2;
  v3 = v2 + a2;
  if ( self[1035] < v2 + a2 )
    v3 = self[1035];
  self[1035] = v3;
  return sub_4164D0(self);
}
