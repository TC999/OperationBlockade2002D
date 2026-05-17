//----- (00424300) --------------------------------------------------------
int __stdcall sub_424300(int a1, int a2, char *String2, char a4)
{
  int result; // eax

  result = sub_4242F0(String2);
  *(_DWORD *)(a1 + 4 * a2 + 148) = result;
  if ( a4 )
  {
    if ( result )
    {
      *(_DWORD *)(a1 + 56) = *(_DWORD *)(result + 308);
      result = *(_DWORD *)(*(_DWORD *)(a1 + 4 * a2 + 148) + 312);
      *(_DWORD *)(a1 + 60) = result;
    }
  }
  return result;
}
