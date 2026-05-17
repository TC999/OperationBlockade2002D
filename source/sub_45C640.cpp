//----- (0045C640) --------------------------------------------------------
char __thiscall sub_45C640(int this, int a2)
{
  int v2; // edi
  int v3; // eax
  int v5; // ebx
  int v6; // edx
  LPVOID *v7; // eax
  int v8; // edi
  int v9; // edx
  int v10; // edi

  v2 = *(_DWORD *)(a2 + 16);
  LOWORD(v3) = *(_WORD *)(a2 + 12) - 1281;
  switch ( *(_WORD *)(a2 + 12) )
  {
    case 0x501:
      v5 = *(_DWORD *)(v2 + 6);
      sub_45ABF0(this);
      *(_DWORD *)(this + 20) = *(_DWORD *)(v2 + 18);
      sub_45A920((_DWORD *)this, v5, *(_DWORD *)(v2 + 10), *(_DWORD *)(v2 + 14));
      *(_BYTE *)(dword_520970 + 20) = 1;
      LOBYTE(v3) = dword_520970;
      if ( !*(_BYTE *)(dword_520970 + 296) )
        *(_BYTE *)(dword_520970 + 296) = 1;
      break;
    case 0x502:
      v3 = sub_45E6F0(*(_DWORD *)(a2 + 4));
      if ( v3 > -1 )
      {
        v6 = 11 * v3;
        LOBYTE(v3) = dword_520970;
        *(_BYTE *)(*(_DWORD *)(dword_520970 + 280) + 32 * v6 + 897) = 1;
      }
      break;
    case 0x503:
      *(_DWORD *)(this + 100) = 5;
      break;
    case 0x504:
      LOBYTE(v3) = sub_45B2B0(this, (const char *)(v2 + 6));
      break;
    case 0x505:
      *(_BYTE *)(this + 80) = 1;
      v7 = (LPVOID *)sub_450BF0((_DWORD *)dword_520970, 1, 0.0);
      sub_421110(v7, aMissionComplet_0);
      LOBYTE(v3) = sub_41CD90(*(_DWORD *)(this + 232));
      break;
    case 0x506:
      LOBYTE(v3) = sub_45B200((_DWORD *)this);
      break;
    case 0x507:
      sub_41CD90(*(_DWORD *)(this + 236));
      *(_BYTE *)(this + 81) = 1;
      *(_BYTE *)(*(_DWORD *)(dword_520970 + 280) + 11796) = 1;
      LOBYTE(v3) = sub_4261C0(*(_DWORD **)(dword_520970 + 232), aMissionfailed, 0);
      break;
    case 0x508:
      v8 = *(_DWORD *)(v2 + 6);
      v9 = *(_DWORD *)(this + 76);
      *(_DWORD *)(this + 104) = v8;
      v10 = *(_DWORD *)(*(_DWORD *)(v9 + 408) + 4 * v8);
      v3 = *(_DWORD *)(v10 + 12);
      if ( v3 > -1 )
        LOBYTE(v3) = sub_4030B0(*(_DWORD **)(this + 92), *(_DWORD *)(v10 + 16), aCommanderspeci, *(_DWORD *)(v10 + 12));
      break;
    default:
      return v3;
  }
  return v3;
}
