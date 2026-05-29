//----- (004697A0) --------------------------------------------------------
char __thiscall sub_4697A0(int self)
{
  void *v2; // ebp
  int i; // edi
  int j; // eax
  int k; // edi
  int v6; // ecx
  int v8[5]; // [esp+150h] [ebp-124h] BYREF
  char v9[260]; // [esp+164h] [ebp-110h] BYREF
  int v10; // [esp+270h] [ebp-4h]

  sub_46A280(aExtradataDat);
  v10 = 0;
  v2 = (void *)_findfirst(aIni, (int)v8);
  if ( v2 != (void *)-1 )
  {
    do
    {
      if ( strcmp(v9, File) )
      {
        sub_46A570(0, 1, v8);
        sub_46A3A0(v9);
      }
    }
    while ( _findnext(v2, (int)v8) != -1 );
  }
  for ( i = 0; i < *(_DWORD *)(self + 24); ++i )
    sub_469370(*(_DWORD *)(*(_DWORD *)(self + 20) + 4 * i), self);
  qsort(*(void **)(self + 20), *(_DWORD *)(self + 24), 4u, sub_46A230);
  for ( j = 0; j < *(_DWORD *)(self + 24); ++j )
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(self + 20) + 4 * j) + 8) = j;
  sub_46A340(self);
  if ( byte_520A10 )
  {
    for ( k = 0; k < *(_DWORD *)(self + 24); ++k )
    {
      v6 = *(_DWORD *)(*(_DWORD *)(self + 20) + 4 * k);
      (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 4))(v6);
    }
  }
  sub_4885A6(0);
  return 1;
}
