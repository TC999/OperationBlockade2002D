//----- (00423520) --------------------------------------------------------
char __thiscall sub_423520(int this, char a2)
{
  int v2; // ebp
  int v3; // esi
  int v4; // ecx
  BOOL v5; // eax
  int v6; // ecx
  bool v7; // al
  int v8; // eax
  int v9; // edi
  bool v10; // al
  int v11; // ecx
  char result; // al
  int v13; // [esp+4h] [ebp-8h]
  int v14; // [esp+8h] [ebp-4h]

  v2 = 0;
  v13 = this;
  v14 = *(_DWORD *)(this + 28);
  if ( v14 <= 0 )
  {
    result = a2;
    *(_BYTE *)(this + 16) = a2;
  }
  else
  {
    while ( 1 )
    {
      v3 = *(_DWORD *)(*(_DWORD *)(this + 24) + 4 * v2);
      v4 = *(_DWORD *)(v3 + 176);
      if ( v4 )
      {
        v5 = a2 && *(_BYTE *)(v3 + 44);
        (*(void (__thiscall **)(int, BOOL))(*(_DWORD *)v4 + 24))(v4, v5);
      }
      v6 = *(_DWORD *)(v3 + 112);
      if ( v6 )
      {
        v7 = a2 && *(_BYTE *)(v3 + 44);
        *(_BYTE *)(v6 + 33) = v7;
        sub_421540((void **)v6);
      }
      v8 = *(_DWORD *)(v3 + 120);
      v9 = 0;
      *(_BYTE *)(v3 + 136) = 1;
      if ( v8 > 0 )
      {
        do
        {
          v10 = a2 && *(_BYTE *)(v3 + 44);
          v11 = *(_DWORD *)(*(_DWORD *)(v3 + 116) + 4 * v9);
          *(_BYTE *)(v11 + 33) = v10;
          sub_421540((void **)v11);
          ++v9;
        }
        while ( v9 < *(_DWORD *)(v3 + 120) );
      }
      result = v14;
      if ( ++v2 >= v14 )
        break;
      this = v13;
    }
    *(_BYTE *)(v13 + 16) = a2;
  }
  return result;
}
