//----- (004215C0) --------------------------------------------------------
_DWORD *__thiscall sub_4215C0(_DWORD *this)
{
  _DWORD *v2; // ebp
  int v3; // ecx
  char *v5; // [esp+30h] [ebp-28h]
  int v6; // [esp+30h] [ebp-28h]
  _DWORD v7[2]; // [esp+44h] [ebp-14h] BYREF
  int v8; // [esp+54h] [ebp-4h]

  v7[1] = this;
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  *((_BYTE *)this + 16) = 1;
  v8 = 0;
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  *((_BYTE *)this + 32) = 1;
  this[9] = 0;
  this[10] = 0;
  this[11] = 0;
  *((_BYTE *)this + 48) = 1;
  v2 = this + 14;
  *this = &off_499314;
  v5 = (char *)(this + 14);
  v3 = **(_DWORD **)ArgList;
  LOBYTE(v8) = 2;
  if ( !(*(int (__stdcall **)(_DWORD, int, int, int, int, char *))(v3 + 96))(*(_DWORD *)ArgList, 12, 8, 101, 1, v5)
    && !(*(int (__stdcall **)(_DWORD, int, int, int, int, _DWORD *))(**(_DWORD **)ArgList + 92))(
          *(_DWORD *)ArgList,
          112,
          8,
          324,
          1,
          this + 13) )
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
  return this;
}
