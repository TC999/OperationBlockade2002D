//----- (00443590) --------------------------------------------------------
int __cdecl sub_443590(int self)
{
  int v2; // edi
  int v3; // ebp
  int v5; // [esp+Ch] [ebp-14h]

  *(_DWORD *)self = (uint32)(uintptr_t)&off_4999E8;
  if ( *(_DWORD *)(self + 444) )
  {
    sub_415910((void *)self);
    *(_DWORD *)(self + 444) = 0;
  }
  sub_444030((_DWORD *)self, 0);
  sub_4229D0("Deleting Boat: %d %s", *(_DWORD *)(self + 1456), *(const char **)(*(_DWORD *)(self + 408) + 4));
  v2 = *(_DWORD *)(self + 1432);
  v5 = *(_DWORD *)(self + 1436);
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
  sub_4885A6(*(LPVOID *)(self + 1432));
  *(_DWORD *)(self + 1432) = 0;
  *(_DWORD *)(self + 1436) = 0;
  *(_DWORD *)(self + 1440) = 0;
  sub_4885A6(*(LPVOID *)(self + 1392));
  *(_DWORD *)(self + 1392) = 0;
  *(_DWORD *)(self + 1396) = 0;
  *(_DWORD *)(self + 1400) = 0;
  nullsub_1(self + 552);
  sub_4885A6(*(LPVOID *)(self + 524));
  *(_DWORD *)(self + 524) = 0;
  *(_DWORD *)(self + 528) = 0;
  *(_DWORD *)(self + 532) = 0;
  return sub_4013F0((_DWORD *)self);
}
