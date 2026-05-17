//----- (00425030) --------------------------------------------------------
int __thiscall sub_425030(_DWORD *this, int ArgList, int a3)
{
  int v4; // ecx
  int v5; // eax
  _DWORD *v6; // eax
  int v7; // eax
  int v8; // ecx
  int v10; // eax
  float v11; // [esp+0h] [ebp-Ch]

  if ( this[13] )
  {
    if ( (_BYTE)a3 )
    {
      sub_41CF00(this[22]);
      v11 = (double)*(int *)&dword_4A34C0 * 0.0099999998 * 0.40000001 + 0.60000002;
      sub_41CFD0(this[22], v11);
      sub_41CD90(this[22]);
      v4 = this[17];
      if ( v4 )
      {
        v5 = this[19];
        if ( v5 )
        {
          if ( v4 != v5 )
          {
            v6 = *(_DWORD **)(v5 + 112);
            if ( v6 )
              sub_421280(v6);
            this[19] = 0;
          }
        }
      }
      v7 = this[17];
      if ( !v7 )
      {
LABEL_15:
        this[18] = v7;
        return sub_4285F0(ArgList, a3);
      }
      if ( *(_BYTE *)(v7 + 44) && *(_BYTE *)(v7 + 45) )
      {
        v8 = *(_DWORD *)(v7 + 36);
        if ( v8 == 6 || v8 == 3 )
        {
          sub_426060(v7, ArgList);
          return sub_4285F0(ArgList, a3);
        }
        goto LABEL_15;
      }
    }
    else
    {
      v10 = this[17];
      if ( v10 == this[18] && v10 && *(_BYTE *)(v10 + 44) && *(_BYTE *)(v10 + 45) )
        sub_426060(v10, ArgList);
      this[18] = 0;
    }
  }
  return sub_4285F0(ArgList, a3);
}
