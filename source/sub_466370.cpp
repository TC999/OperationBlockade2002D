//----- (00466370) --------------------------------------------------------
int __thiscall sub_466370(_DWORD *self)
{
  int v2; // ecx
  int v3; // ecx

  *self = &off_499C98;
  if ( self[113] )
  {
    sub_415910();
    self[113] = 0;
  }
  v2 = self[338];
  if ( v2 )
  {
    sub_41D9A0(v2);
    self[338] = 0;
  }
  v3 = self[339];
  if ( v3 )
  {
    sub_41D9A0(v3);
    self[339] = 0;
  }
  nullsub_1(self + 129);
  return sub_4013F0(self);
}
