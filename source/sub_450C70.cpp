//----- (00450C70) --------------------------------------------------------
void __thiscall sub_450C70(_DWORD *this, int a2)
{
  unsigned int v2; // eax
  int v3; // ecx
  int v4; // esi
  LPVOID *v5; // eax
  int v6; // esi
  int v7; // eax
  int v8; // eax
  const char *v9; // [esp-4h] [ebp-8h]

  v2 = *(unsigned __int16 *)(a2 + 12);
  if ( v2 > 2 )
  {
    if ( *(unsigned __int16 *)(a2 + 12) >= 0xFF01u && *(unsigned __int16 *)(a2 + 12) <= 0xFF03u )
    {
      v6 = *(_DWORD *)(a2 + 16);
      if ( *(_WORD *)(a2 + 12) == 0xFF02 && !*(_DWORD *)(this[58] + 52) )
      {
        v9 = (const char *)(*(_DWORD *)(v6 + 6) + 12);
        v7 = sub_436A90(this[56]);
        sub_421190(v7, "%s left the game", v9);
      }
      v8 = *(_DWORD *)(v6 + 6);
      if ( v8 )
      {
        sub_411BB0(dword_4F5CC4, *(_DWORD *)(v8 + 8));
        *(_DWORD *)(v6 + 6) = 0;
      }
    }
  }
  else if ( v2 == 2 )
  {
    v3 = this[56];
    v4 = *(_DWORD *)(a2 + 16);
    if ( v3 )
    {
      v5 = (LPVOID *)sub_436A90(v3);
      sub_421110(v5, (const char *)(v4 + 6));
    }
  }
  else if ( v2 == 1 )
  {
    this[6] = *(_DWORD *)(*(_DWORD *)(a2 + 16) + 6);
  }
}
