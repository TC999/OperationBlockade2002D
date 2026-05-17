//----- (00403E30) --------------------------------------------------------
char __thiscall sub_403E30(int this)
{
  sub_403CE0((_DWORD *)this);
  sub_4229D0(aLoadingS, this + 60);
  if ( !(unsigned __int8)sub_403EC0((char *)(this + 60)) )
    sub_4281B0(aFailedToLoadMo, this + 60);
  ++*(_DWORD *)(this + 52);
  return 1;
}
