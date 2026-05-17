//----- (00443590) --------------------------------------------------------
int __thiscall sub_443590(int this)
{
  int v2; // edi
  int v3; // ebp
  int v5; // [esp+Ch] [ebp-14h]

  *(_DWORD *)this = &off_4999E8;
  if ( *(_DWORD *)(this + 444) )
  {
    sub_415910();
    *(_DWORD *)(this + 444) = 0;
  }
  sub_444030(0);
  sub_4229D0("Deleting Boat: %d %s", *(_DWORD *)(this + 1456), *(const char **)(*(_DWORD *)(this + 408) + 4));
  v2 = *(_DWORD *)(this + 1432);
  v5 = *(_DWORD *)(this + 1436);
  if ( v2 != v5 )
  {
    v3 = v2 + 20;
    do
    {
      nullsub_1(v3);
      v2 += 860;
      v3 += 860;
    }
    while ( v2 != v5 );
  }
  sub_4885A6(*(LPVOID *)(this + 1432));
  *(_DWORD *)(this + 1432) = 0;
  *(_DWORD *)(this + 1436) = 0;
  *(_DWORD *)(this + 1440) = 0;
  sub_4885A6(*(LPVOID *)(this + 1392));
  *(_DWORD *)(this + 1392) = 0;
  *(_DWORD *)(this + 1396) = 0;
  *(_DWORD *)(this + 1400) = 0;
  nullsub_1(this + 552);
  sub_4885A6(*(LPVOID *)(this + 524));
  *(_DWORD *)(this + 524) = 0;
  *(_DWORD *)(this + 528) = 0;
  *(_DWORD *)(this + 532) = 0;
  return sub_4013F0((_DWORD *)this);
}
