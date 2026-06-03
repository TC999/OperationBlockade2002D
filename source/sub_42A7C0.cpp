//----- (0042A7C0) --------------------------------------------------------
int __cdecl sub_42A7C0(int self)
{
  int result; // eax
  char *v3; // eax
  unsigned int i; // edi

  result = *(_DWORD *)(self + 564);
  if ( !result )
  {
    v3 = sub_4069C0(*(_DWORD **)(dword_520970 + 128), (char *)(self + 301));
    *(_DWORD *)(self + 564) = (uint32)(uintptr_t)(v3);
    sub_4282E0(v3 != 0, "failed to load model %s, see file %s", (const char *)(self + 301), (const char *)(self + 16));
    for ( i = 0; ; ++i )
    {
      result = *(_DWORD *)(self + 612);
      if ( !result || i >= (*(_DWORD *)(self + 616) - result) >> 2 )
        break;
      sub_403C80(*(_DWORD **)(result + 4 * i), 1, 0);
    }
  }
  return result;
}
