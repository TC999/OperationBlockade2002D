//----- (0045ECD0) --------------------------------------------------------
int __thiscall sub_45ECD0(int *this)
{
  int result; // eax
  int v3; // eax
  int *v4; // ecx
  int *v5; // edx

  result = dword_4F5CC4;
  if ( *(_BYTE *)(dword_4F5CC4 + 936) )
  {
    if ( this[131] != this[130] )
      sub_45EA80((int)this, this[130]);
    v3 = 0;
    v4 = this + 585;
    v5 = this + 220;
    do
    {
      if ( v3 >= this[130] )
      {
        *v5 = -1;
        *v4 = -1;
      }
      else
      {
        *v5 = v3;
        *v4 = v3;
      }
      ++v3;
      v4 += 13;
      v5 += 88;
    }
    while ( v3 < 4 );
    this[128] = 0;
    this[129] = this[220];
    return sub_463180(this);
  }
  return result;
}
