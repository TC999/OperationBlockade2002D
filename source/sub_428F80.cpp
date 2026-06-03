//----- (00428F80) --------------------------------------------------------
int __cdecl sub_428F80(void *self, int a2)
{
  int v2; // ebp
  int v4; // edi
  int v5; // esi
  int v6; // esi
  int v7; // esi
  int v8; // eax
  int v9; // ebp
  int v10; // esi
  int v11; // esi
  int v13; // [esp+10h] [ebp-118h]
  int v14; // [esp+14h] [ebp-114h]
  _BYTE v15[272]; // [esp+18h] [ebp-110h] BYREF

  v2 = 0;
  v13 = 0;
  if ( sub_428F00(self) <= 0 )
    return -1;
  while ( 1 )
  {
    v4 = sub_428EC0(self, v2);
    v14 = sub_429AD0((void*)v4);
    v5 = sub_429AD0((void*)v4) << 12;
    v6 = sub_429AE0((_DWORD*)v4) + v5;
    v7 = sub_428EB0(self) + v6;
    v8 = v7 + sub_429AF0((_DWORD*)v4);
    if ( a2 < v7 || a2 >= v8 )
      goto LABEL_9;
    v9 = sub_428F10(self) - 1;
    if ( v9 >= 0 )
      break;
LABEL_8:
    v2 = v13;
LABEL_9:
    v13 = ++v2;
    if ( v2 >= sub_428F00(self) )
      return -1;
  }
  while ( 1 )
  {
    qmemcpy(v15, (const void *)sub_428EE0(self, v9), sizeof(v15));
    if ( sub_429AD0(v15) == v14 )
    {
      v10 = sub_429AD0(v15) << 12;
      v11 = sub_428EB0(self) + v10;
      if ( sub_429AE0((_DWORD*)v15) + v11 <= a2 )
        return v9;
    }
    if ( --v9 < 0 )
      goto LABEL_8;
  }
}
