//----- (004793A1) --------------------------------------------------------
int __cdecl sub_4793A1(int a1, int a2, int a3)
{
  if ( a1 && a2 )
    return a3 & *(_DWORD *)(a2 + 8);
  else
    return 0;
}
