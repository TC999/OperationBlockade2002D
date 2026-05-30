//----- (0045E880) --------------------------------------------------------
char __cdecl sub_45E880(int self)
{
  FILE *v2; // eax
  FILE *v3; // esi
  int v5; // [esp+8h] [ebp-108h] BYREF
  char Buffer[260]; // [esp+Ch] [ebp-104h] BYREF

  sub_422EF0(aSaved);
  sprintf(Buffer, "Saved\\%s.sps", (const char *)(self + 472));
  v2 = fopen(Buffer, aWb);
  v3 = v2;
  if ( v2 )
  {
    v5 = 305397761;
    sub_48A21D(&v5, 4u, 1u, v2);
    sub_48A21D((void *)(self + 496), 4u, 1u, v3);
    sub_48A21D((void *)(self + 500), 4u, 1u, v3);
    sub_48A21D((void *)(self + 504), 4u, 1u, v3);
    sub_48A21D(*(void **)(self + 508), 4u, *(_DWORD *)(self + 496) + 1, v3);
    fclose(v3);
    return 1;
  }
  else
  {
    sub_4229D0("Unable to create saved game file %s", Buffer);
    return 0;
  }
}
