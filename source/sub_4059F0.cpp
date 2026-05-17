//----- (004059F0) --------------------------------------------------------
int __thiscall sub_4059F0(_DWORD *this, int a2, int a3)
{
  if ( a3 < sub_4059D0(a2) )
    return *(_DWORD *)(this[1] + 172 * a2 + 24) + 8 * a3;
  else
    return 0;
}
