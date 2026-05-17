//----- (0047FF6B) --------------------------------------------------------
void __cdecl sub_47FF6B(int a1)
{
  int v1; // edi

  v1 = *(_DWORD *)(a1 + 388);
  if ( *(_DWORD *)(v1 + 16) )
  {
    if ( *(_BYTE *)(a1 + 73) && sub_47F95E(a1) )
      *(_DWORD *)(v1 + 12) = sub_47FA41;
    else
      *(_DWORD *)(v1 + 12) = sub_47F7F8;
  }
  *(_DWORD *)(a1 + 136) = 0;
}
