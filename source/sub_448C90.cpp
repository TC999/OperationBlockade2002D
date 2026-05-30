//----- (00448C90) --------------------------------------------------------
_DWORD *__cdecl sub_448C90(_DWORD *self, int a2)
{
  _DWORD *v2; // ebx

  v2 = (_DWORD *)a2;
  sub_468FF0(a2);
  *self = &off_499A18;
  memset(self + 73, 0, 0x28u);
  if ( sub_40ABC0(v2, aImpactnone, 0) )
  {
    sub_40AFC0(aImpactnone, (int)&a2);
    sub_469160(self + 73, a2, aEffect);
  }
  if ( sub_40ABC0(v2, aImpactwater, 0) )
  {
    sub_40AFC0(aImpactwater, (int)&a2);
    sub_469160(self + 74, a2, aEffect);
  }
  if ( sub_40ABC0(v2, aImpactsand, 0) )
  {
    sub_40AFC0(aImpactsand, (int)&a2);
    sub_469160(self + 75, a2, aEffect);
  }
  if ( sub_40ABC0(v2, aImpactrock, 0) )
  {
    sub_40AFC0(aImpactrock, (int)&a2);
    sub_469160(self + 76, a2, aEffect);
  }
  if ( sub_40ABC0(v2, aImpactplayer, 0) )
  {
    sub_40AFC0(aImpactplayer, (int)&a2);
    sub_469160(self + 77, a2, aEffect);
  }
  if ( sub_40ABC0(v2, aImpactairplane, 0) )
  {
    sub_40AFC0(aImpactairplane, (int)&a2);
    sub_469160(self + 78, a2, aEffect);
  }
  if ( sub_40ABC0(v2, aImpactboat, 0) )
  {
    sub_40AFC0(aImpactboat, (int)&a2);
    sub_469160(self + 79, a2, aEffect);
  }
  if ( sub_40ABC0(v2, aImpactship, 0) )
  {
    sub_40AFC0(aImpactship, (int)&a2);
    sub_469160(self + 80, a2, aEffect);
  }
  if ( sub_40ABC0(v2, aImpacttank, 0) )
  {
    sub_40AFC0(aImpacttank, (int)&a2);
    sub_469160(self + 81, a2, aEffect);
  }
  if ( sub_40ABC0(v2, aImpactflesh, 0) )
  {
    sub_40AFC0(aImpactflesh, (int)&a2);
    sub_469160(self + 82, a2, aEffect);
  }
  return self;
}
