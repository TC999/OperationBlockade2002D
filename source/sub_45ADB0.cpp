//----- (0045ADB0) --------------------------------------------------------
void __thiscall sub_45ADB0(_DWORD *self)
{
  int v2; // esi
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  int j; // edi
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  int v17; // edi
  int v18; // eax
  int v19; // ecx
  int i; // [esp+8h] [ebp-4h]

  v2 = 0;
  if ( self[19] && !byte_520A10 )
  {
    sub_44E8F0(*(_DWORD *)(dword_520970 + 240));
    sub_44B460(*(_DWORD *)(dword_520970 + 276));
    v3 = *(_DWORD *)(self[19] + 364);
    if ( v3 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 4))(v3);
    v4 = *(_DWORD *)(self[19] + 380);
    if ( v4 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 4))(v4);
    v5 = *(_DWORD *)(self[19] + 392);
    if ( v5 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 4))(v5);
    v6 = *(_DWORD *)(self[19] + 316);
    if ( v6 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 4))(v6);
    v7 = *(_DWORD *)(self[19] + 320);
    if ( v7 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 4))(v7);
    v8 = *(_DWORD *)(self[19] + 352);
    if ( v8 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 4))(v8);
    v9 = *(_DWORD *)(self[19] + 356);
    if ( v9 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 4))(v9);
    v10 = *(_DWORD *)(self[19] + 360);
    if ( v10 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 4))(v10);
    v11 = self[19];
    for ( i = 0; i < *(_DWORD *)(v11 + 412); ++i )
    {
      v12 = *(_DWORD *)(v11 + 408);
      for ( j = 0; j < *(_DWORD *)(*(_DWORD *)(v2 + v12) + 24); v12 = *(_DWORD *)(self[19] + 408) )
      {
        v14 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v2 + v12) + 20) + 4 * j) + 8);
        (*(void (__thiscall **)(int))(*(_DWORD *)v14 + 4))(v14);
        v15 = *(_DWORD *)(self[19] + 408) + v2;
        if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)v15 + 20) + 4 * j) + 8) + 292) == 6 )
        {
          v16 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)v15 + 20) + 4 * j) + 20);
          (*(void (__thiscall **)(int))(*(_DWORD *)v16 + 4))(v16);
        }
        ++j;
      }
      v17 = 0;
      v18 = *(_DWORD *)(*(_DWORD *)(self[19] + 408) + v2);
      if ( *(int *)(v18 + 40) > 0 )
      {
        do
        {
          v19 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v18 + 36) + 4 * v17) + 8);
          (*(void (__thiscall **)(int))(*(_DWORD *)v19 + 4))(v19);
          ++v17;
          v18 = *(_DWORD *)(*(_DWORD *)(self[19] + 408) + v2);
        }
        while ( v17 < *(_DWORD *)(v18 + 40) );
      }
      v11 = self[19];
      v2 += 4;
    }
  }
}
