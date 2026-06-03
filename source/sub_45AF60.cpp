//----- (0045AF60) --------------------------------------------------------
char __cdecl sub_45AF60(_DWORD *self)
{
  int v2; // esi
  int v3; // eax
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  int j; // edi
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // edi
  int v19; // eax
  int v20; // ecx
  int v21; // ebx
  int v22; // esi
  int v23; // edi
  int i; // [esp+Ch] [ebp-4h]

  v2 = 0;
  v3 = self[19];
  if ( v3 )
  {
    *((char *)&v3) = byte_520A10;
    if ( !byte_520A10 )
    {
      sub_44E900((_DWORD **)*(int *)(dword_520970 + 240));
      sub_44B470((_DWORD **)*(int *)(dword_520970 + 276));
      v4 = *(_DWORD *)(self[19] + 364);
      if ( v4 )
        (*(void (__cdecl **)(int))(*(_DWORD *)v4 + 8))(v4);
      v5 = *(_DWORD *)(self[19] + 380);
      if ( v5 )
        (*(void (__cdecl **)(int))(*(_DWORD *)v5 + 8))(v5);
      v6 = *(_DWORD *)(self[19] + 392);
      if ( v6 )
        (*(void (__cdecl **)(int))(*(_DWORD *)v6 + 8))(v6);
      v7 = *(_DWORD *)(self[19] + 316);
      if ( v7 )
        (*(void (__cdecl **)(int))(*(_DWORD *)v7 + 8))(v7);
      v8 = *(_DWORD *)(self[19] + 320);
      if ( v8 )
        (*(void (__cdecl **)(int))(*(_DWORD *)v8 + 8))(v8);
      v9 = *(_DWORD *)(self[19] + 352);
      if ( v9 )
        (*(void (__cdecl **)(int))(*(_DWORD *)v9 + 8))(v9);
      v10 = *(_DWORD *)(self[19] + 356);
      if ( v10 )
        (*(void (__cdecl **)(int))(*(_DWORD *)v10 + 8))(v10);
      v11 = *(_DWORD *)(self[19] + 360);
      if ( v11 )
        (*(void (__cdecl **)(int))(*(_DWORD *)v11 + 8))(v11);
      v12 = self[19];
      for ( i = 0; i < *(_DWORD *)(v12 + 412); ++i )
      {
        v13 = *(_DWORD *)(v12 + 408);
        for ( j = 0; j < *(_DWORD *)(*(_DWORD *)(v2 + v13) + 24); v13 = *(_DWORD *)(self[19] + 408) )
        {
          v15 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v2 + v13) + 20) + 4 * j) + 8);
          (*(void (__cdecl **)(int))(*(_DWORD *)v15 + 8))(v15);
          v16 = *(_DWORD *)(self[19] + 408) + v2;
          if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)v16 + 20) + 4 * j) + 8) + 292) == 6 )
          {
            v17 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)v16 + 20) + 4 * j) + 20);
            (*(void (__cdecl **)(int))(*(_DWORD *)v17 + 8))(v17);
          }
          ++j;
        }
        v18 = 0;
        v19 = *(_DWORD *)(*(_DWORD *)(self[19] + 408) + v2);
        if ( *(int *)(v19 + 40) > 0 )
        {
          do
          {
            v20 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v19 + 36) + 4 * v18) + 8);
            (*(void (__cdecl **)(int))(*(_DWORD *)v20 + 8))(v20);
            ++v18;
            v19 = *(_DWORD *)(*(_DWORD *)(self[19] + 408) + v2);
          }
          while ( v18 < *(_DWORD *)(v19 + 40) );
        }
        v12 = self[19];
        v2 += 4;
      }
      sub_41F0F0(*(_DWORD **)(dword_520970 + 120));
      v21 = 0;
      v22 = *(_DWORD *)(dword_520970 + 200);
      v3 = *(_DWORD *)(v22 + 24);
      if ( v3 > 0 )
      {
        do
        {
          v23 = *(_DWORD *)(*(_DWORD *)(v22 + 20) + 4 * v21);
          if ( (unsigned __int8)sub_4696E0(v23, aSoundEffect) )
            (*(void (__cdecl **)(int))(*(_DWORD *)v23 + 8))(v23);
          v3 = *(_DWORD *)(v22 + 24);
          ++v21;
        }
        while ( v21 < v3 );
      }
    }
  }
  return v3;
}
