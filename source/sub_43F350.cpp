//----- (0043F350) --------------------------------------------------------
unsigned int __cdecl sub_43F350(int self)
{
  unsigned int result; // eax
  char *v3; // eax
  unsigned int v4; // edi
  int i; // ebx
  signed int v6; // ecx

  result = *(_DWORD *)(self + 564);
  if ( !result )
  {
    v3 = sub_4069C0(*(_DWORD **)(dword_520970 + 128), (char *)(self + 304));
    *(_DWORD *)(self + 564) = (uint32)(uintptr_t)(v3);
    sub_4282E0(v3 != 0, "failed to load model %s, see file %s", (const char *)(self + 304), (const char *)(self + 16));
    v4 = 0;
    for ( i = 0; ; i += 260 )
    {
      result = *(_DWORD *)(self + 644);
      if ( !result )
        break;
      v6 = *(_DWORD *)(self + 648) - result;
      result = (unsigned int)((unsigned __int64)(2114445439LL * v6) >> 32) >> 31;
      if ( v4 >= v6 / 260 )
        break;
      sub_403E80(*(_DWORD **)(self + 564), (char *)(i + *(_DWORD *)(self + 644)));
      ++v4;
    }
  }
  return result;
}
