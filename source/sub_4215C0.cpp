//----- (004215C0) --------------------------------------------------------
_DWORD *__cdecl sub_4215C0(_DWORD *self)
{
  _DWORD *v2; // ebp
  int v3; // ecx
  char *v5; // [esp+30h] [ebp-28h]
  int v6; // [esp+30h] [ebp-28h]
  _DWORD v7[2]; // [esp+44h] [ebp-14h] BYREF
  int v8; // [esp+54h] [ebp-4h]

  v7[1] = (uint32)self;
  self[1] = 0;
  self[2] = 0;
  self[3] = 0;
  *((_BYTE *)self + 16) = 1;
  v8 = 0;
  self[5] = 0;
  self[6] = 0;
  self[7] = 0;
  *((_BYTE *)self + 32) = 1;
  self[9] = 0;
  self[10] = 0;
  self[11] = 0;
  *((_BYTE *)self + 48) = 1;
  v2 = self + 14;
  *self = (uint32)&off_499314;
  v5 = (char *)(self + 14);
  v3 = **(_DWORD **)ArgList;
  *((_BYTE *)&v8) = 2;
  if ( !(*(int (__stdcall **)(_DWORD, int, int, int, int, char *))(v3 + 96))(*(_DWORD *)ArgList, 12, 8, 101, 1, v5)
    && !(*(int (__stdcall **)(_DWORD, int, int, int, int, _DWORD *))(**(_DWORD **)ArgList + 92))(
          *(_DWORD *)ArgList,
          112,
          8,
          324,
          1,
          self + 13) )
  {
    (*(void (__stdcall **)(_DWORD, _DWORD, int, _DWORD *, _DWORD))(*(_DWORD *)*v2 + 44))(*v2, 0, 12, v7, 0);
    *(_WORD *)v7[0] = 0;
    *(_WORD *)(v7[0] + 2) = 1;
    *(_WORD *)(v7[0] + 4) = 2;
    *(_WORD *)(v7[0] + 6) = 3;
    *(_WORD *)(v7[0] + 8) = 2;
    *(_WORD *)(v7[0] + 10) = 1;
    (*(void (__stdcall **)(int))(*(_DWORD *)*v2 + 48))(v6);
  }
  return self;
}
