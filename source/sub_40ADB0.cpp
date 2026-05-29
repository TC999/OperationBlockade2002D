//----- (0040ADB0) --------------------------------------------------------
unsigned int __thiscall sub_40ADB0(_DWORD *self)
{
  unsigned int v1; // edi
  int i; // ebx
  int v3; // esi
  unsigned int result; // eax
  signed int v5; // kr00_4

  v1 = 0;
  for ( i = 0; ; i += 12 )
  {
    v3 = self[1] + 24 * self[70];
    result = *(_DWORD *)(v3 + 8);
    if ( !result )
      break;
    v5 = *(_DWORD *)(v3 + 12) - result;
    result = (unsigned int)((unsigned __int64)(715827883LL * v5) >> 32) >> 31;
    if ( v1 >= v5 / 12 )
      break;
    ++v1;
    *(_BYTE *)(*(_DWORD *)(v3 + 8) + i + 8) = 0;
  }
  return result;
}
