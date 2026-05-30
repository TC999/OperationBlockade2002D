//----- (00462520) --------------------------------------------------------
char __cdecl sub_462520(_DWORD *self, int a2, int a3)
{
  int v3; // eax
  int v5; // ebx
  int v6; // ecx
  _DWORD *v7; // edx
  int v8; // edi
  int v9; // ecx
  int v10; // eax
  _DWORD *v11; // edx
  int v12; // eax
  _WORD v14[3]; // [esp+10h] [ebp-8h] BYREF
  char v15; // [esp+16h] [ebp-2h]

  v3 = 0;
  v5 = -1;
  v6 = self[2946];
  if ( v6 > 0 )
  {
    v7 = (_DWORD *)self[2945];
    while ( *v7 != a2 )
    {
      ++v3;
      ++v7;
      if ( v3 >= v6 )
        goto LABEL_7;
    }
    v5 = v3;
  }
LABEL_7:
  v8 = (int)&self[88 * self[128] + 220];
  if ( a3 )
  {
    v9 = self[130];
    v8 = 0;
    v10 = 0;
    if ( v9 > 0 )
    {
      v11 = self + 222;
      while ( *v11 != a3 )
      {
        ++v10;
        v11 += 88;
        if ( v10 >= v9 )
          goto LABEL_14;
      }
      v8 = (int)&self[88 * v10 + 220];
    }
  }
LABEL_14:
  LOBYTE(v12) = *(_BYTE *)(dword_4F5CC4 + 936);
  if ( (_BYTE)v12 && a3 )
  {
    v15 = v5;
    LOBYTE(v12) = sub_411480((_DWORD *)dword_4F5CC4, (_DWORD *)0x605, a3, v14, 7, 11, 5000);
  }
  if ( v8 )
  {
    ++*(_DWORD *)(v8 + 4 * v5 + 92);
    *(_DWORD *)(v8 + 348) += *(_DWORD *)(a2 + 296);
    v12 = self[129];
    if ( v12 > -1 )
    {
      v12 = 352 * self[128];
      if ( (_DWORD *)v8 == (_DWORD *)((char *)self + v12 + 880) && *(int *)(a2 + 296) > 200 )
      {
        sub_402FC0(self[649]);
        LOBYTE(v12) = sub_4030B0((_DWORD *)self[649], 0, aChatterenemyki, -1);
      }
    }
  }
  return v12;
}
