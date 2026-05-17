//----- (0045EA00) --------------------------------------------------------
char __thiscall sub_45EA00(_DWORD *this, int a2)
{
  int v3; // ebx
  int i; // eax
  void *v6; // [esp-8h] [ebp-14h]

  v3 = this[124];
  if ( a2 > v3 )
  {
    v6 = (void *)this[127];
    this[124] = a2;
    this[127] = sub_488DD7(v6, 4 * a2 + 4);
    for ( i = v3 + 1; i <= a2; *(_DWORD *)(this[127] + 4 * i - 4) = 0 )
      ++i;
  }
  return sub_45E880((int)this);
}
