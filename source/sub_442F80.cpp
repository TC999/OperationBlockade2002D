//----- (00442F80) --------------------------------------------------------
_WORD *__thiscall sub_442F80(_DWORD *self, _WORD *a2)
{
  int v3; // ebx
  int v4; // edi
  int v5; // eax
  int v6; // edx
  void *v8; // [esp+8h] [ebp-18h]
  _WORD v9[4]; // [esp+Ch] [ebp-14h] BYREF
  int v10; // [esp+1Ch] [ebp-4h]

  v3 = (int)a2;
  if ( *(_BYTE *)(dword_4F5CC4 + 936) )
  {
    v9[3] = a2[4];
    sub_4117A0((_DWORD *)dword_4F5CC4, (_DWORD *)0x201, v9, 8, 15, 0);
  }
  v8 = operator new(0x5B4u);
  v10 = 0;
  if ( v8 )
  {
    v4 = self[6];
    if ( v4 )
      v5 = sub_443250(v3, (self[7] - v4) >> 2);
    else
      v5 = sub_443250(v3, 0);
  }
  else
  {
    v5 = 0;
  }
  v6 = self[7];
  a2 = (_WORD *)v5;
  v10 = -1;
  sub_44F190(v6, 1, &a2);
  sub_4442A0(a2);
  sub_428680(self, (int)a2);
  if ( *(_BYTE *)(dword_4F5CC4 + 937) )
    (*(void (__thiscall **)(_WORD *, _DWORD))(*(_DWORD *)a2 + 24))(a2, 0);
  return a2;
}
