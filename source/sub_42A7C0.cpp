//----- (0042A7C0) --------------------------------------------------------
int __thiscall sub_42A7C0(int this)
{
  int result; // eax
  char *v3; // eax
  unsigned int i; // edi

  result = *(_DWORD *)(this + 564);
  if ( !result )
  {
    v3 = sub_4069C0(*(_DWORD **)(dword_520970 + 128), (char *)(this + 301));
    *(_DWORD *)(this + 564) = v3;
    sub_4282E0(v3 != 0, "failed to load model %s, see file %s", (const char *)(this + 301), (const char *)(this + 16));
    for ( i = 0; ; ++i )
    {
      result = *(_DWORD *)(this + 612);
      if ( !result || i >= (*(_DWORD *)(this + 616) - result) >> 2 )
        break;
      sub_403C80(*(_DWORD *)(result + 4 * i), 1);
    }
  }
  return result;
}
