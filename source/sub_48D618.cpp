//----- (0048D618) --------------------------------------------------------
int __cdecl sub_48D618(int a1)
{
  int v1; // eax
  int v2; // eax

  hHeap = HeapCreate(a1 == 0, 0x1000u, 0);
  if ( !hHeap )
    return 0;
  v1 = sub_48D4D0();
  dword_523A84 = v1;
  if ( v1 == 3 )
  {
    v2 = ((int (__cdecl *)(int))__sbh_heap_init)(1016);
  }
  else
  {
    if ( v1 != 2 )
      return 1;
    v2 = sub_48E1BC();
  }
  if ( !v2 )
  {
    HeapDestroy(hHeap);
    return 0;
  }
  return 1;
}
