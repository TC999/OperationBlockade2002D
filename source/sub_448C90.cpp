extern char aImpactnone[];
extern char aImpactwater[];
extern char aImpactsand[];
extern char aImpactrock[];
extern char aImpactplayer[];
extern char aImpactairplane[];
extern char aImpactboat[];
extern char aImpactship[];
extern char aImpacttank[];
extern char aImpactflesh[];
extern char aEffect[];

//----- (00448C90) --------------------------------------------------------
_DWORD *__cdecl sub_448C90(_DWORD *self, int a2)
{
  _DWORD *v2; // ebx

  v2 = (_DWORD *)a2;
  sub_468FF0(self, a2);
  *self = (int)&off_499A18;
  memset(self + 73, 0, 0x28u);
  if ( sub_40ABC0((int)v2, aImpactnone, 0) )
  {
    sub_40AFC0(v2, aImpactnone, (_DWORD*)&a2);
    sub_469160((int)(self + 73), (_DWORD *)a2, aEffect, 0);
  }
  if ( sub_40ABC0((int)v2, aImpactwater, 0) )
  {
    sub_40AFC0(v2, aImpactwater, (_DWORD*)&a2);
    sub_469160((int)(self + 74), (_DWORD *)a2, aEffect, 0);
  }
  if ( sub_40ABC0((int)v2, aImpactsand, 0) )
  {
    sub_40AFC0(v2, aImpactsand, (_DWORD*)&a2);
    sub_469160((int)(self + 75), (_DWORD *)a2, aEffect, 0);
  }
  if ( sub_40ABC0((int)v2, aImpactrock, 0) )
  {
    sub_40AFC0(v2, aImpactrock, (_DWORD*)&a2);
    sub_469160((int)(self + 76), (_DWORD *)a2, aEffect, 0);
  }
  if ( sub_40ABC0((int)v2, aImpactplayer, 0) )
  {
    sub_40AFC0(v2, aImpactplayer, (_DWORD*)&a2);
    sub_469160((int)(self + 77), (_DWORD *)a2, aEffect, 0);
  }
  if ( sub_40ABC0((int)v2, aImpactairplane, 0) )
  {
    sub_40AFC0(v2, aImpactairplane, (_DWORD*)&a2);
    sub_469160((int)(self + 78), (_DWORD *)a2, aEffect, 0);
  }
  if ( sub_40ABC0((int)v2, aImpactboat, 0) )
  {
    sub_40AFC0(v2, aImpactboat, (_DWORD*)&a2);
    sub_469160((int)(self + 79), (_DWORD *)a2, aEffect, 0);
  }
  if ( sub_40ABC0((int)v2, aImpactship, 0) )
  {
    sub_40AFC0(v2, aImpactship, (_DWORD*)&a2);
    sub_469160((int)(self + 80), (_DWORD *)a2, aEffect, 0);
  }
  if ( sub_40ABC0((int)v2, aImpacttank, 0) )
  {
    sub_40AFC0(v2, aImpacttank, (_DWORD*)&a2);
    sub_469160((int)(self + 81), (_DWORD *)a2, aEffect, 0);
  }
  if ( sub_40ABC0((int)v2, aImpactflesh, 0) )
  {
    sub_40AFC0(v2, aImpactflesh, (_DWORD*)&a2);
    sub_469160((int)(self + 82), (_DWORD *)a2, aEffect, 0);
  }
  return self;
}
