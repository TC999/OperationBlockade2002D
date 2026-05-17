//----- (00470F91) --------------------------------------------------------
int __thiscall sub_470F91(int this)
{
  int result; // eax
  void *v3; // edi
  void *v4; // esi

  if ( *(_DWORD *)(this + 4) && *(_DWORD *)(this + 32) )
    sub_4885A6(*(LPVOID *)(this + 4));
  result = *(_DWORD *)(this + 28);
  if ( result && *(_DWORD *)(this + 36) )
    result = sub_4885A6(*(LPVOID *)(this + 28));
  v3 = *(void **)(this + 40);
  if ( v3 )
  {
    sub_470F91(*(_DWORD *)(this + 40));
    result = sub_4885A6(v3);
  }
  v4 = *(void **)(this + 44);
  if ( v4 )
  {
    sub_470F91(v4);
    return sub_4885A6(v4);
  }
  return result;
}
