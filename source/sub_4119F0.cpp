//----- (004119F0) --------------------------------------------------------
int __thiscall sub_4119F0(int this)
{
  int i; // edi
  void *v3; // eax
  int j; // edi
  void *v5; // eax
  int k; // edi
  void *v7; // eax
  int result; // eax

  if ( *(_BYTE *)(this + 8304) )
  {
    for ( i = 0; i < *(_DWORD *)(this + 8296); ++i )
      sub_4885A6(*(LPVOID *)(*(_DWORD *)(this + 8292) + 4 * i));
  }
  memset(*(void **)(this + 8292), 0, 4 * *(_DWORD *)(this + 8296));
  v3 = *(void **)(this + 8292);
  *(_DWORD *)(this + 8296) = 0;
  sub_488CEE(v3);
  *(_DWORD *)(this + 8300) = 0;
  *(_DWORD *)(this + 8292) = 0;
  if ( *(_BYTE *)(this + 8288) )
  {
    for ( j = 0; j < *(_DWORD *)(this + 8280); ++j )
      sub_4885A6(*(LPVOID *)(*(_DWORD *)(this + 8276) + 4 * j));
  }
  memset(*(void **)(this + 8276), 0, 4 * *(_DWORD *)(this + 8280));
  v5 = *(void **)(this + 8276);
  *(_DWORD *)(this + 8280) = 0;
  sub_488CEE(v5);
  *(_DWORD *)(this + 8284) = 0;
  *(_DWORD *)(this + 8276) = 0;
  if ( *(_BYTE *)(this + 8260) )
  {
    for ( k = 0; k < *(_DWORD *)(this + 8252); ++k )
      sub_4885A6(*(LPVOID *)(*(_DWORD *)(this + 8248) + 4 * k));
  }
  memset(*(void **)(this + 8248), 0, 4 * *(_DWORD *)(this + 8252));
  v7 = *(void **)(this + 8248);
  *(_DWORD *)(this + 8252) = 0;
  result = sub_488CEE(v7);
  *(_DWORD *)(this + 8256) = 0;
  *(_DWORD *)(this + 8248) = 0;
  return result;
}
