//----- (0045E760) --------------------------------------------------------
char __cdecl sub_45E760(int self)
{
  FILE *v2; // eax
  FILE *v3; // esi
  void *v5; // eax
  size_t v6; // ecx
  char ArgList[4]; // [esp+8h] [ebp-108h] BYREF
  char Buffer[260]; // [esp+Ch] [ebp-104h] BYREF

  sub_45E960(1);
  sprintf(Buffer, "Saved\\%s.sps", (const char *)(self + 472));
  v2 = fopen(Buffer, Mode);
  v3 = v2;
  if ( v2 )
  {
    sub_4898CA(ArgList, 4u, 1u, v2);
    if ( *(_DWORD *)ArgList == 305397761 )
    {
      sub_4898CA((void *)(self + 496), 4u, 1u, v3);
      sub_4898CA((void *)(self + 500), 4u, 1u, v3);
      sub_4898CA((void *)(self + 504), 4u, 1u, v3);
      v5 = malloc(4 * *(_DWORD *)(self + 496) + 4);
      v6 = *(_DWORD *)(self + 496) + 1;
      *(_DWORD *)(self + 508) = v5;
      sub_4898CA(v5, 4u, v6, v3);
      fclose(v3);
      *(_DWORD *)(*(_DWORD *)(dword_520970 + 236) + 20) = *(_DWORD *)(self + 500);
      return 1;
    }
    else
    {
      sub_4229D0("Bad saved game version 0x%04x, need 0x%04x", *(_DWORD *)ArgList, 305397761);
      return 0;
    }
  }
  else
  {
    sub_4229D0("Unable to open saved game file %s", Buffer);
    return 0;
  }
}
