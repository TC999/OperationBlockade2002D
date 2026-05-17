//----- (0045E9B0) --------------------------------------------------------
int __thiscall sub_45E9B0(_DWORD *this, int a2, int a3)
{
  int v4; // eax
  int v5; // edx
  _DWORD *v6; // eax

  v4 = this[127];
  v5 = *(_DWORD *)(v4 + 4 * a2);
  v6 = (_DWORD *)(v4 + 4 * a2);
  if ( a3 > v5 )
  {
    *v6 = a3;
    sub_45E880((int)this);
  }
  return *(_DWORD *)(this[127] + 4 * a2);
}
