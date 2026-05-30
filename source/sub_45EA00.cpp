//----- (0045EA00) --------------------------------------------------------
char __cdecl sub_45EA00(_DWORD *self, int a2)
{
  int v3; // ebx
  int i; // eax
  void *v6; // [esp-8h] [ebp-14h]

  v3 = self[124];
  if ( a2 > v3 )
  {
    v6 = (void *)self[127];
    self[124] = a2;
    self[127] = sub_488DD7(v6, 4 * a2 + 4);
    for ( i = v3 + 1; i <= a2; *(_DWORD *)(self[127] + 4 * i - 4) = 0 )
      ++i;
  }
  return sub_45E880((int)self);
}
