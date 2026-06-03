//----- (00424E30) --------------------------------------------------------
extern const char asc_4A4C9C[];

int __cdecl sub_424E30(_DWORD *self, int a2)
{
  int v3; // eax
  int v4; // ebx
  int v5; // edi
  int v7; // eax
  _DWORD *v8; // ecx
  int v9; // ebp
  int v10; // ebx
  _BYTE *v11; // eax
  int v12; // edi
  float v13; // [esp+0h] [ebp-14h]

  if ( self[13] )
  {
    if ( self[19] )
    {
      if ( isprint((char)a2) && (v3 = self[19], *(_DWORD *)(v3 + 112)) )
      {
        if ( !*(_BYTE *)(v3 + 144) || !strchr(asc_4A4C9C, (char)a2) )
        {
          v4 = self[19];
          if ( (signed int)(strlen(*(const char **)(*(_DWORD *)(v4 + 112) + 8)) - 1) < *(_DWORD *)(v4 + 140) )
          {
            sub_421280(*(_DWORD **)(v4 + 112));
            sub_4211E0(*(const char ***)(self[19] + 112), a2);
            sub_4211E0(*(const char ***)(self[19] + 112), 95);
            v5 = self[19];
            if ( (__int64)*(float *)(*(_DWORD *)(v5 + 112) + 24) > *(int *)(v5 + 92) )
            {
              sub_421280(*(_DWORD **)(v5 + 112));
              sub_421280(*(_DWORD **)(self[19] + 112));
              sub_4211E0(*(const char ***)(self[19] + 112), 95);
              return sub_4285C0(self, a2);
            }
          }
        }
      }
      else if ( (_BYTE)a2 == 8 )
      {
        v7 = self[19];
        if ( v7 )
        {
          v8 = *(_DWORD **)(v7 + 112);
          if ( v8 )
          {
            sub_421280(v8);
            sub_421280(*(_DWORD **)(self[19] + 112));
            sub_4211E0(*(const char ***)(self[19] + 112), 95);
            return sub_4285C0(self, a2);
          }
        }
      }
    }
    else
    {
      if ( isupper((char)a2) )
        a2 = (a2 & 0xFFFFFF00) | (unsigned __int8)tolower((char)a2);
      v9 = 0;
      v10 = *(_DWORD *)(self[13] + 28);
      if ( v10 > 0 )
      {
        while ( 1 )
        {
          v11 = (_BYTE *)sub_424390((_DWORD *)self[13], v9);
          v12 = (int)v11;
          if ( (_BYTE)a2 == v11[180] && v11[44] && v11[45] )
            break;
          if ( ++v9 >= v10 )
            return sub_4285C0(self, a2);
        }
        sub_41CF00(self[22]);
        v13 = (double)*(int *)&dword_4A34C0 * 0.0099999998 * 0.40000001 + 0.60000002;
        sub_41CFD0(self[22], v13);
        sub_41CD90(self[22]);
        sub_426060((int)self, v12, 0);
      }
    }
  }
  return sub_4285C0(self, a2);
}
