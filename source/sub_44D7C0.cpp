//----- (0044D7C0) --------------------------------------------------------
int __stdcall sub_44D7C0(int a1, _DWORD *a2, _DWORD *a3)
{
  unsigned int i; // edi
  int result; // eax
  _DWORD *v5; // eax

  for ( i = 0; ; ++i )
  {
    result = *(_DWORD *)(a1 + 296);
    if ( !result || i >= (*(_DWORD *)(a1 + 300) - result) >> 2 )
      break;
    if ( a3 )
      *a3 = 0;
    v5 = sub_413870(*(_DWORD **)(dword_520970 + 116), *(_DWORD *)(*(_DWORD *)(a1 + 296) + 4 * i));
    if ( a3 )
      *a3 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 296) + 4 * i) + 368);
    if ( v5 )
      sub_46BE02(v5 + 29, *a2, a2[1], a2[2]);
  }
  return result;
}
