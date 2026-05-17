//----- (00466370) --------------------------------------------------------
int __thiscall sub_466370(_DWORD *this)
{
  int v2; // ecx
  int v3; // ecx

  *this = &off_499C98;
  if ( this[113] )
  {
    sub_415910();
    this[113] = 0;
  }
  v2 = this[338];
  if ( v2 )
  {
    sub_41D9A0(v2);
    this[338] = 0;
  }
  v3 = this[339];
  if ( v3 )
  {
    sub_41D9A0(v3);
    this[339] = 0;
  }
  nullsub_1(this + 129);
  return sub_4013F0(this);
}
