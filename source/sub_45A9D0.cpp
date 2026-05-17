//----- (0045A9D0) --------------------------------------------------------
int __thiscall sub_45A9D0(_DWORD *this)
{
  int result; // eax
  int v3; // ebx
  int v4; // edi
  int v5; // eax
  int v6; // edi
  int v7; // eax

  result = dword_4F5CC4;
  if ( *(_BYTE *)(dword_4F5CC4 + 936) )
  {
    v3 = this[18] + 1;
    if ( v3 >= this[4 * this[5] + 7] )
      LOBYTE(v3) = this[4 * this[5] + 7];
    v4 = rand() % 10;
    v5 = rand();
    return sub_45B150(v3, v5 % 10, v4);
  }
  else if ( !*(_BYTE *)(dword_4F5CC4 + 937) )
  {
    if ( dword_4AD1B0 <= -1 )
    {
      sub_45ABF0(this);
      v6 = rand() % 10;
      v7 = rand();
      return sub_45A920(this, this[18] + 1, v7 % 10, v6);
    }
    else
    {
      return sub_45B4B0(dword_4AD1B0 + 1);
    }
  }
  return result;
}
