//----- (0041C150) --------------------------------------------------------
void __cdecl sub_41C150(int self)
{
  int v2; // ecx
  int v3; // eax
  bool v4; // zf
  _DWORD *v5; // eax

  v2 = 0;
  v3 = *(_DWORD *)(self + 32) - 1;
  v4 = *(_DWORD *)(self + 32) == 1;
  *(_DWORD *)(self + 32) = v3;
  if ( v3 >= 0 && !v4 )
  {
    v5 = (_DWORD *)(self + 36);
    do
    {
      ++v2;
      *v5 = v5[1];
      ++v5;
    }
    while ( v2 < *(_DWORD *)(self + 32) );
  }
  sub_41C190(self);
  if ( *(int *)(self + 32) >= 4 )
    sub_41C0E0((float *)self);
}
