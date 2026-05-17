//----- (00421110) --------------------------------------------------------
int __thiscall sub_421110(LPVOID *this, const char *a2)
{
  signed int v3; // kr04_4

  v3 = strlen(a2) + 1;
  if ( v3 > (int)this[1] )
  {
    sub_4885A6(this[2]);
    this[2] = operator new(v3);
    this[1] = (LPVOID)v3;
  }
  strcpy((char *)this[2], a2);
  return sub_421AB0(*this, this[2], this + 6, this + 7);
}
