//----- (004371A0) --------------------------------------------------------
char __thiscall sub_4371A0(int this, char a2)
{
  char v2; // bl
  char v4; // al
  int v5; // eax
  int v6; // ecx
  const char *v7; // eax
  int v8; // eax
  _DWORD *v9; // ecx
  char *v10; // edi
  int v11; // ecx
  const char *v12; // eax
  int v13; // eax
  LPVOID *v14; // eax
  int v16; // [esp+Ch] [ebp-104h]
  char Buffer[256]; // [esp+10h] [ebp-100h] BYREF

  v2 = a2;
  LOBYTE(v16) = a2;
  if ( isupper(a2) )
  {
    v2 = tolower(a2);
    LOBYTE(v16) = v2;
  }
  v4 = *(_BYTE *)(this + 724);
  if ( v4 )
  {
    if ( v2 == 13 )
    {
      *(_BYTE *)(dword_520970 + 296) = 0;
      v9 = *(_DWORD **)(this + 736);
      *(_BYTE *)(this + 724) = 0;
      sub_421280(v9);
      v10 = *(char **)(*(_DWORD *)(this + 736) + 8);
      if ( *(_BYTE *)(dword_4F5CC4 + 936) || *(_BYTE *)(dword_4F5CC4 + 937) )
      {
        sub_463710(*(_DWORD *)(*(_DWORD *)(this + 736) + 8));
      }
      else
      {
        v11 = *(_DWORD *)(dword_520970 + 280);
        v12 = (const char *)(v11 + 472);
        if ( !*(_BYTE *)(v11 + 472) )
        {
          v13 = *(_DWORD *)(v11 + 512);
          if ( v13 <= -1 )
            v12 = AppName;
          else
            v12 = (const char *)(352 * v13 + v11 + 899);
        }
        sprintf(Buffer, "%s: %s", v12, *(const char **)(*(_DWORD *)(this + 736) + 8));
        v14 = (LPVOID *)sub_436A90(this);
        sub_421110(v14, Buffer);
        if ( !*(_BYTE *)(dword_4F5CC4 + 936) && !*(_BYTE *)(dword_4F5CC4 + 937) )
          sub_4375C0(v10);
      }
      return sub_4285C0((_DWORD *)this, v16);
    }
  }
  else if ( v2 == 13 )
  {
    if ( !*(_BYTE *)(dword_520970 + 296) && !(unsigned __int8)sub_450BB0() )
    {
      *(_BYTE *)(this + 724) = 1;
      v5 = dword_520970;
      if ( !*(_BYTE *)(dword_520970 + 296) )
      {
        *(_BYTE *)(dword_520970 + 296) = 1;
        v5 = dword_520970;
      }
      v6 = *(_DWORD *)(v5 + 280);
      v7 = (const char *)(v6 + 472);
      if ( !*(_BYTE *)(v6 + 472) )
      {
        v8 = *(_DWORD *)(v6 + 512);
        if ( v8 <= -1 )
          v7 = AppName;
        else
          v7 = (const char *)(352 * v8 + v6 + 899);
      }
      sub_421190(*(_DWORD *)(this + 732), "%s: ", v7);
      sub_421110(*(LPVOID **)(this + 736), asc_4AA198);
    }
    return sub_4285C0((_DWORD *)this, v16);
  }
  if ( v2 == 27 )
  {
    *(_BYTE *)(this + 724) = 0;
  }
  else if ( v4 )
  {
    if ( isprint(a2) && strlen(*(const char **)(*(_DWORD *)(this + 736) + 8)) < 0x3C )
    {
      sub_421280(*(_DWORD **)(this + 736));
      sub_4211E0(*(const char ***)(this + 736), a2);
      sub_4211E0(*(const char ***)(this + 736), 95);
      if ( *(float *)(*(_DWORD *)(this + 732) + 24) + *(float *)(*(_DWORD *)(this + 732) + 24) < 512.0 )
        return sub_4285C0((_DWORD *)this, v16);
    }
    else if ( v2 != 8 )
    {
      return sub_4285C0((_DWORD *)this, v16);
    }
    sub_421280(*(_DWORD **)(this + 736));
    sub_421280(*(_DWORD **)(this + 736));
    sub_4211E0(*(const char ***)(this + 736), 95);
  }
  return sub_4285C0((_DWORD *)this, v16);
}
