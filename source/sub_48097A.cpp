//----- (0048097A) --------------------------------------------------------
_DWORD *__cdecl sub_48097A(int a1)
{
  _DWORD *v1; // eax
  int v2; // ecx
  _DWORD *result; // eax

  v1 = (_DWORD *)(**(int (__cdecl ***)(int, int, int))(a1 + 4))(a1, 1, 88);
  *(_DWORD *)(a1 + 404) = (uint32)(size_t)v1;
  v2 = 4;
  *v1 = (uint32)(size_t)sub_48084B;
  v1[1] = (uint32)(size_t)sub_48047E;
  result = v1 + 13;
  do
  {
    result[4] = 0;
    *result++ = 0;
    --v2;
  }
  while ( v2 );
  return result;
}
