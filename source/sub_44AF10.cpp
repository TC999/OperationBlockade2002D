//----- (0044AF10) --------------------------------------------------------
int __stdcall sub_44AF10(int a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 40);
  if ( *(_BYTE *)(v1 + 9) && *(_DWORD *)(*(_DWORD *)(v1 + 4) + 388) == 1 )
    return sub_44AF40(v1);
  else
    return 0;
}
