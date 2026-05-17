//----- (0045AA80) --------------------------------------------------------
int __thiscall sub_45AA80(_DWORD *this)
{
  int result; // eax
  int v3; // edi
  int v4; // eax
  int v5; // edi
  int v6; // eax

  sub_41CF50(this[59]);
  result = dword_4F5CC4;
  if ( *(_BYTE *)(dword_4F5CC4 + 936) )
  {
    v3 = rand() % 10;
    v4 = rand();
    return sub_45B150(this[18], v4 % 10, v3);
  }
  else if ( !*(_BYTE *)(dword_4F5CC4 + 937) )
  {
    sub_45ABF0(this);
    v5 = rand() % 10;
    v6 = rand();
    return sub_45A920(this, this[18], v6 % 10, v5);
  }
  return result;
}
