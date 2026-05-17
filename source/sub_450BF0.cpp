//----- (00450BF0) --------------------------------------------------------
int __thiscall sub_450BF0(_DWORD *this, int a2, float a3)
{
  float v5; // [esp+0h] [ebp-14h]

  if ( a3 <= 0.0 )
  {
    *(_DWORD *)(this[a2 + 75] + 64) = -1082130432;
    sub_4212C0(this[a2 + 75], 255);
  }
  else
  {
    v5 = a3 + 0.5;
    sub_421430(LODWORD(a3), LODWORD(v5), 255, 0);
  }
  return this[a2 + 75];
}
