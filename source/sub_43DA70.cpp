//----- (0043DA70) --------------------------------------------------------
int __thiscall sub_43DA70(_DWORD *self)
{
  _DWORD *v2; // esi
  int v3; // ebp
  _DWORD *v4; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // edi
  int result; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // [esp+10h] [ebp-10h]
  float v12; // [esp+10h] [ebp-10h]
  int v13; // [esp+14h] [ebp-Ch]
  char ArgList[4]; // [esp+18h] [ebp-8h]
  int v15; // [esp+1Ch] [ebp-4h]

  v2 = self + 21;
  v3 = 0;
  v4 = self + 21;
  v5 = 4;
  do
  {
    v6 = *(v4 - 4);
    ++v4;
    --v5;
    *(_BYTE *)(v6 + 44) = 0;
    *(_BYTE *)(*(v4 - 1) + 44) = 0;
    *(_BYTE *)(v4[3] + 44) = 0;
  }
  while ( v5 );
  v13 = self[12];
  v11 = 0;
  v15 = *(_DWORD *)(*(_DWORD *)(dword_520970 + 280) + 11784);
  if ( v15 > 0 )
  {
    do
    {
      v7 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(dword_520970 + 280) + 11780) + 4 * v11);
      if ( _strcmpi((const char *)v7, aNone) )
      {
        *(_DWORD *)ArgList = *(_DWORD *)(*(_DWORD *)(dword_520970 + 280)
                                       + 4 * (v11 + 88 * *(_DWORD *)(*(_DWORD *)(dword_520970 + 280) + 512))
                                       + 972);
        if ( *(int *)ArgList > 0 )
        {
          if ( v13 )
          {
            --v13;
          }
          else
          {
            *(_BYTE *)(*(v2 - 4) + 44) = 1;
            *(_BYTE *)(*v2 + 44) = 1;
            *(_BYTE *)(v2[4] + 44) = 1;
            sub_424300(*(v2 - 4), 0, (char *)(v7 + 33), 1);
            sub_421110(*(LPVOID **)(*v2 + 112), (const char *)v7);
            result = sub_421190(*(_DWORD *)(v2[4] + 112), "%d x %d", *(_DWORD *)ArgList, *(_DWORD *)(v7 + 296));
            ++v3;
            ++v2;
            if ( v3 >= 4 )
              return result;
          }
        }
      }
      ++v11;
    }
    while ( v11 < v15 );
  }
  v9 = *(_DWORD *)(dword_520970 + 280);
  v10 = *(_DWORD *)(v9 + 512);
  if ( v10 >= 0 )
    v12 = *(float *)(352 * v10 + v9 + 924);
  else
    v12 = 0.0;
  result = v13;
  if ( !v13 )
  {
    *(_BYTE *)(self[v3 + 17] + 44) = 1;
    *(_BYTE *)(self[v3 + 21] + 44) = 1;
    *(_BYTE *)(self[v3 + 25] + 44) = 1;
    sub_424300(self[v3 + 17], 0, aHealth_0, 1);
    sub_421110(*(LPVOID **)(self[v3 + 21] + 112), aHealth_0);
    return sub_421190(*(_DWORD *)(self[v3 + 25] + 112), "%d", (unsigned int)(__int64)v12);
  }
  return result;
}
