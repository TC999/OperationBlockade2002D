//----- (0048B813) --------------------------------------------------------
int __cdecl sub_48B813(int a1, int a2)
{
  SIZE_T v2; // esi
  int result; // eax
  LPVOID v4; // [esp+14h] [ebp-20h]
  size_t v5; // [esp+18h] [ebp-1Ch]

  v2 = a2 * a1;
  v5 = a2 * a1;
  if ( (unsigned int)(a2 * a1) <= 0xFFFFFFE0 )
  {
    if ( !v2 )
      v2 = 1;
    v2 = (v2 + 15) & 0xFFFFFFF0;
  }
  while ( 1 )
  {
    v4 = 0;
    if ( v2 <= 0xFFFFFFE0 )
    {
      if ( dword_523A84 == 3 )
      {
        if ( v5 > dword_523A7C )
          goto LABEL_14;
        _lock(9);
        v4 = (LPVOID)__sbh_alloc_block(v5);
        _unlock(9);
        if ( v4 )
        {
          memset(v4, 0, v5);
          goto LABEL_14;
        }
LABEL_15:
        v4 = HeapAlloc(hHeap, 8u, v2);
        goto LABEL_16;
      }
      if ( dword_523A84 == 2 && v2 <= dword_4B498C )
      {
        _lock(9);
        v4 = (LPVOID)sub_48E4B4(v2 >> 4);
        _unlock(9);
        if ( !v4 )
          goto LABEL_15;
        memset(v4, 0, v2);
      }
LABEL_14:
      if ( v4 )
        return (int)v4;
      goto LABEL_15;
    }
LABEL_16:
    if ( v4 || !dword_522424 )
      return (int)v4;
    result = _callnewh(v2);
    if ( !result )
      return result;
  }
}
