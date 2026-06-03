//----- (00470F91) --------------------------------------------------------
int __cdecl sub_470F91(int self)
{
  int result; // eax
  void *v3; // edi
  void *v4; // esi

  if ( *(_DWORD *)(self + 4) && *(_DWORD *)(self + 32) )
    sub_4885A6(*(LPVOID *)(self + 4));
  result = *(_DWORD *)(self + 28);
  if ( result && *(_DWORD *)(self + 36) )
  {
    sub_4885A6(*(LPVOID *)(self + 28));
    result = 0;
  }
  v3 = *(void **)(self + 40);
  if ( v3 )
  {
    sub_470F91((int)(intptr_t)v3);
    sub_4885A6(v3);
    result = 0;
  }
  v4 = *(void **)(self + 44);
  if ( v4 )
  {
    sub_470F91((int)(intptr_t)v4);
    sub_4885A6(v4);
    result = 0;
  }
  return result;
}
