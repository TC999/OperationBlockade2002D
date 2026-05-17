//----- (0048E300) --------------------------------------------------------
_UNKNOWN **__cdecl sub_48E300(LPVOID *lpMem)
{
  _UNKNOWN **result; // eax

  result = (_UNKNOWN **)VirtualFree(lpMem[4], 0, 0x8000u);
  if ( off_4B4988 == (_UNKNOWN **)lpMem )
  {
    result = (_UNKNOWN **)lpMem[1];
    off_4B4988 = result;
  }
  if ( lpMem == (LPVOID *)&off_4B2968 )
  {
    dword_4B2978 = -1;
  }
  else
  {
    *(_DWORD *)lpMem[1] = *lpMem;
    *((_DWORD *)*lpMem + 1) = lpMem[1];
    return (_UNKNOWN **)HeapFree(hHeap, 0, lpMem);
  }
  return result;
}
