//----- (00489562) --------------------------------------------------------
LPVOID __cdecl sub_489562(unsigned int a1)
{
  LPVOID result; // eax
  SIZE_T v2; // esi
  int v3; // eax
  SIZE_T v4; // eax
  int v5; // [esp+Ch] [ebp-1Ch]
  void *v6; // [esp+Ch] [ebp-1Ch]

  if ( dword_523A84 == 3 )
  {
    if ( a1 <= dword_523A7C )
    {
      _lock(9);
      v5 = __sbh_alloc_block((void*)a1, 0, 0);
      _unlock(9);
      result = (LPVOID)v5;
      if ( v5 )
        return result;
    }
    goto LABEL_12;
  }
  if ( dword_523A84 != 2 )
  {
LABEL_12:
    v3 = a1;
    if ( !a1 )
      v3 = 1;
    v4 = v3 + 15;
    *(_BYTE*)&(v4) = v4 & 0xF0;
    return HeapAlloc(hHeap, 0, v4);
  }
  if ( a1 )
    v2 = (a1 + 15) & 0xFFFFFFF0;
  else
    v2 = 16;
  if ( v2 > dword_4B498C )
    return HeapAlloc(hHeap, 0, v2);
  _lock(9);
  v6 = (void *)sub_48E4B4(v2 >> 4);
  _unlock(9);
  result = v6;
  if ( !v6 )
    return HeapAlloc(hHeap, 0, v2);
  return result;
}
