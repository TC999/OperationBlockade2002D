//----- (0042FCC0) --------------------------------------------------------
int __thiscall sub_42FCC0(_DWORD *self, int a2, int a3, int a4)
{
  int v5; // eax
  int v7; // [esp-Ch] [ebp-34h]
  int v8; // [esp-4h] [ebp-2Ch]
  int v9; // [esp+8h] [ebp-20h] BYREF
  void *v10; // [esp+Ch] [ebp-1Ch]
  __int16 v11[3]; // [esp+10h] [ebp-18h] BYREF
  int v12; // [esp+16h] [ebp-12h]
  int v13; // [esp+24h] [ebp-4h]

  v10 = operator new(0x900u);
  v13 = 0;
  if ( v10 )
    v5 = sub_42FEB0(a2, a3);
  else
    v5 = 0;
  v9 = v5;
  v7 = self[7];
  v13 = -1;
  sub_44F190(v7, 1, &v9);
  *(_DWORD *)(v9 + 392) = self[13];
  v8 = v9;
  ++self[13];
  sub_428680(self, v8);
  *(_BYTE *)(v9 + 460) = a4 <= -1;
  if ( *(_BYTE *)(dword_4F5CC4 + 936) )
  {
    v12 = *(_DWORD *)(a2 + 8);
    sub_4117A0((_DWORD *)dword_4F5CC4, (_DWORD *)0x101, v11, 10, 15, 0);
  }
  else if ( *(_BYTE *)(dword_4F5CC4 + 937) )
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v9 + 24))(v9, 0);
  }
  return v9;
}
