//----- (00422400) --------------------------------------------------------
extern char aAttemptingToLo[];
extern char aCanTReadHeader[];
extern char aCanTReadTextur[];
extern char aCanTCreatetext[];
extern char aSuccessfullyLo[];
int __cdecl sub_422400(_DWORD *self, char *String1, char a3)
{
  int v4; // esi
  char *v5; // ebx
  int v7; // ebp
  int v8; // ebx
  int v9; // esi
  WPARAM v10; // ecx
  void *v12; // eax
  int v13; // ebp
  int v14; // edx
  int v15; // [esp+1Ch] [ebp-30h] BYREF
  char *v16; // [esp+20h] [ebp-2Ch]
  int Buffer[3]; // [esp+24h] [ebp-28h] BYREF
  __int16 v18; // [esp+32h] [ebp-1Ah]
  __int16 v19; // [esp+34h] [ebp-18h]
  char v20; // [esp+36h] [ebp-16h]
  _DWORD v21[4]; // [esp+38h] [ebp-14h] BYREF
  int v22; // [esp+48h] [ebp-4h]

  v4 = self[5];
  if ( v4 )
  {
    while ( 1 )
    {
      v5 = String1;
      if ( !_strcmpi(String1, *(const char **)(v4 + 12)) )
        break;
      v4 = *(_DWORD *)(v4 + 16);
      if ( !v4 )
        goto LABEL_7;
    }
    ++*(_DWORD *)v4;
    return v4;
  }
  else
  {
    v5 = String1;
LABEL_7:
    sub_4229D0(aAttemptingToLo, v5);
    v7 = 23;
    if ( sub_422080(v5, (_DWORD *)Buffer) < 0 )
    {
      sub_4229D0(aCanTReadHeader, v5);
      sub_4281B0(aCanTReadTextur, v5);
    }
    switch ( v20 )
    {
      case 8:
        v7 = 41;
        break;
      case 16:
      case 24:
        v7 = 23;
        if ( (*(int (__stdcall **)(int, int, int, int, _DWORD, int, int))(*(_DWORD *)dword_520A14 + 40))(
               dword_520A14,
               dword_52089C,
               dword_520898,
               dword_5209E0,
               0,
               3,
               23) )
        {
          v7 = 24;
        }
        break;
      case 32:
        v7 = 21;
        if ( (*(int (__stdcall **)(int, int, int, int, _DWORD, int, int))(*(_DWORD *)dword_520A14 + 40))(
               dword_520A14,
               dword_52089C,
               dword_520898,
               dword_5209E0,
               0,
               3,
               21) )
        {
          v7 = 26;
        }
        break;
    }
    v8 = v19;
    v9 = v18;
    if ( !a3 )
    {
      v10 = wParam - 1;
      if ( wParam )
      {
        do
        {
          if ( v9 <= 128 )
            break;
          if ( v8 <= 128 )
            break;
          v8 /= 2;
          v9 /= 2;
        }
        while ( v10-- );
      }
    }
    if ( sub_46D89A(*(_DWORD *)ArgList, (int)(intptr_t)(String1), v9, v8, -1, 0, v7, 1, 458757, 458757, 0, (int)(intptr_t)v21, 0, &v15, 0) )
    {
      sub_4229D0(aCanTCreatetext, String1);
      return 0;
    }
    else
    {
      v12 = operator new(0x2Cu);
      if ( v12 )
        v13 = (int)sub_4221E0((_DWORD *)v12);
      else
        v13 = 0;
      *(_DWORD *)(v13 + 20) = (uint32)self;
      *(_DWORD *)(v13 + 16) = self[5];
      v14 = v15;
      self[5] = v13;
      *(_DWORD *)(v13 + 8) = v14;
      v16 = (char *)operator new(strlen(String1) + 1);
      *(_DWORD *)(v13 + 12) = (uint32)v16;
      *(_DWORD *)(v13 + 28) = v9;
      *(_DWORD *)(v13 + 32) = v8;
      *(_DWORD *)(v13 + 36) = 2;
      switch ( v22 )
      {
        case 20:
          *(_DWORD *)(v13 + 36) = 3;
          break;
        case 21:
          *(_DWORD *)(v13 + 36) = 4;
          break;
        case 23:
        case 24:
        case 25:
        case 26:
          *(_DWORD *)(v13 + 36) = 2;
          break;
        case 41:
          *(_DWORD *)(v13 + 36) = 1;
          break;
        default:
          break;
      }
      *(_BYTE *)(v13 + 24) = v22 == 21 || v22 == 25 || v22 == 26;
      *(_DWORD *)(v13 + 40) = *(_DWORD *)(v13 + 36) * (__int64)((double)(v8 * v9) * 1.33333);
      strcpy(v16, String1);
      sub_4229D0(aSuccessfullyLo, String1);
      return v13;
    }
  }
}
