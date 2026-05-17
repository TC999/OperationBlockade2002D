//----- (0040C310) --------------------------------------------------------
_DWORD *__thiscall sub_40C310(_DWORD *this, _DWORD *a2)
{
  int v3; // eax
  void *v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // esi
  _DWORD *result; // eax
  int v9; // eax
  int *v10; // edi
  int v11; // esi
  int v12; // ebx
  bool v13; // zf
  char v14; // [esp+10h] [ebp-11Ch]
  char v15; // [esp+10h] [ebp-11Ch]
  unsigned int v16; // [esp+20h] [ebp-10Ch] BYREF
  unsigned int v17; // [esp+24h] [ebp-108h]
  int v18; // [esp+28h] [ebp-104h]
  _BYTE v19[256]; // [esp+2Ch] [ebp-100h] BYREF

  v3 = this[3];
  v18 = 0;
  if ( v3 )
  {
    v4 = this + 5;
    while ( 1 )
    {
      v5 = (*(int (__stdcall **)(_DWORD, int, _DWORD *))(*(_DWORD *)this[3] + 36))(this[3], 256, this + 5);
      if ( v5 < 0 )
        break;
      if ( !v5 )
      {
        v6 = this[3];
        v16 = 16;
        if ( (*(int (__stdcall **)(int, int, _BYTE *, unsigned int *, _DWORD))(*(_DWORD *)v6 + 40))(
               v6,
               16,
               v19,
               &v16,
               0) )
        {
          sub_4229D0(aKeyboardLost, v14);
          memset(v4, 0, 0x100u);
          v7 = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)this[3] + 28))(this[3]);
          if ( v7 < 0 )
          {
            sub_4229D0(aCouldnTAcquire, v15);
            sub_403A30(a2, v7, aCouldnTAcquire);
            return a2;
          }
          sub_4229D0(aRecquiredKeybo, v15);
        }
        else if ( *((_BYTE *)this + 292) )
        {
          memset(v4, 0, 0x100u);
        }
        else
        {
          v17 = 0;
          if ( v16 )
          {
            v10 = (int *)v19;
            do
            {
              v11 = *this;
              v12 = *v10;
              v13 = *this == 0;
              LOBYTE(v18) = (v10[1] & 0x80) != 0;
              if ( !v13 )
              {
                do
                {
                  if ( !(*(int (__cdecl **)(_DWORD, int, int))v11)(*(_DWORD *)(v11 + 4), v12, v18) )
                    break;
                  v11 = *(_DWORD *)(v11 + 8);
                }
                while ( v11 );
              }
              v10 += 4;
              ++v17;
            }
            while ( v17 < v16 );
          }
        }
        goto LABEL_20;
      }
    }
    memset(v4, 0, 0x100u);
    v9 = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)this[3] + 28))(this[3]);
    if ( v9 < 0 )
    {
      sub_403A30(a2, v9, aCouldnTAcquire);
      return a2;
    }
    sub_4229D0(aReacquiredKeyb, v14);
  }
LABEL_20:
  result = a2;
  *a2 = 0;
  a2[1] = 0;
  return result;
}
