//----- (00468A00) --------------------------------------------------------
int __cdecl sub_468A00(int self)
{
  void *v2; // eax
  int v3; // eax
  int v4; // eax
  void *v5; // edi
  int v6; // eax
  int i; // edi
  int *v8; // edi
  int v9; // eax
  int v10; // edi
  void *v11; // eax
  void *v12; // eax

  *(_DWORD *)(self + 4) = 0;
  *(_DWORD *)(self + 8) = 0;
  *(_DWORD *)(self + 12) = 0;
  *(_BYTE *)(self + 16) = 1;
  *(_DWORD *)self = &off_499CF8;
  *(_DWORD *)(self + 20) = 0;
  *(_DWORD *)(self + 24) = 0;
  *(_DWORD *)(self + 44) = 0;
  v2 = operator new(0x278u);
  if ( v2 )
    v3 = sub_468000((int)v2);
  else
    v3 = 0;
  *(_DWORD *)(self + 20) = v3;
  v4 = sub_406A90(v3, 1);
  *(_DWORD *)(self + 24) = v4;
  if ( v4 )
  {
    sub_428680((_DWORD *)self, v4);
    v6 = *(_DWORD *)(self + 20);
    for ( i = 0; i < *(_DWORD *)(v6 + 620); ++i )
    {
      sub_408580(*(_DWORD **)(self + 24), *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v6 + 616) + 4 * i) + 4), 3);
      v6 = *(_DWORD *)(self + 20);
    }
  }
  else
  {
    v5 = *(void **)(self + 20);
    if ( v5 )
    {
      sub_468370(*(void **)(self + 20));
      sub_4885A6(v5);
    }
    *(_DWORD *)(self + 20) = 0;
  }
  if ( *(_DWORD *)(self + 20) && dword_4AE740 != -1 )
  {
    v8 = (int *)&unk_4AE748;
    do
    {
      *v8 = sub_405A30(*(_DWORD **)(self + 20), (char *)*(v8 - 1), -1, 1);
      v9 = v8[1];
      v8 += 3;
    }
    while ( v9 != -1 );
  }
  v10 = sub_405A30(*(_DWORD **)(self + 20), aIsland, -1, 1);
  v11 = operator new(0x28u);
  if ( v11 )
    v12 = sub_450FB0(v11, 64, *(_DWORD *)(self + 24), v10);
  else
    v12 = 0;
  *(_DWORD *)(self + 44) = v12;
  return self;
}
