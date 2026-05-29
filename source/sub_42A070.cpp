//----- (0042A070) --------------------------------------------------------
void __thiscall sub_42A070(_DWORD *self)
{
  _DWORD *v1; // esi
  char v2; // bl
  int v3; // eax
  char v4; // al
  char v5; // [esp+Bh] [ebp-1h]

  v1 = (_DWORD *)*self;
  if ( !*(_DWORD *)*self )
  {
    v2 = v5;
    while ( !*v1 )
    {
      if ( !*((_BYTE *)v1 + 8) )
      {
        v3 = getc((FILE *)v1[3]);
        if ( v3 == -1 )
        {
          if ( (*(_BYTE *)(v1[3] + 12) & 0x20) != 0 )
            *v1 = 2;
        }
        else
        {
          *((_BYTE *)v1 + 8) = 1;
          *((_BYTE *)v1 + 9) = v3;
        }
      }
      v4 = *((_BYTE *)v1 + 8);
      if ( v4 )
        v2 = *((_BYTE *)v1 + 9);
      *((_BYTE *)v1 + 8) = 0;
      if ( !v4 )
        break;
      if ( v2 == 10 )
      {
        ++v1[1];
        return;
      }
    }
  }
}
