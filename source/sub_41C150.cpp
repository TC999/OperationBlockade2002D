//----- (0041C150) --------------------------------------------------------
void __thiscall sub_41C150(int this)
{
  int v2; // ecx
  int v3; // eax
  bool v4; // zf
  _DWORD *v5; // eax

  v2 = 0;
  v3 = *(_DWORD *)(this + 32) - 1;
  v4 = *(_DWORD *)(this + 32) == 1;
  *(_DWORD *)(this + 32) = v3;
  if ( v3 >= 0 && !v4 )
  {
    v5 = (_DWORD *)(this + 36);
    do
    {
      ++v2;
      *v5 = v5[1];
      ++v5;
    }
    while ( v2 < *(_DWORD *)(this + 32) );
  }
  sub_41C190(this);
  if ( *(int *)(this + 32) >= 4 )
    sub_41C0E0((float *)this);
}
