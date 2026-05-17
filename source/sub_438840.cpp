//----- (00438840) --------------------------------------------------------
BOOL __thiscall sub_438840(_DWORD *this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // eax
  int v4; // eax
  _DWORD *v5; // ecx
  int v6; // eax
  _DWORD *v7; // ecx
  int v8; // eax
  _DWORD *v9; // ecx
  int v10; // eax
  int v11; // edx

  if ( !this[101] )
  {
    v2 = operator new(0x988u);
    if ( v2 )
      v3 = sub_4376B0(v2, (int)this);
    else
      v3 = 0;
    this[101] = v3;
    sub_4282E0(v3 != 0, aCanTLoadWorldM);
    v4 = sub_405A30((_DWORD *)this[101], aIntrocamera, -1, 1);
    v5 = (_DWORD *)this[101];
    this[107] = v4;
    v6 = sub_405A30(v5, aCameratrack, -1, 1);
    v7 = (_DWORD *)this[101];
    this[118] = v6;
    v8 = sub_405A30(v7, aPlayeremblem, -1, 1);
    v9 = (_DWORD *)this[101];
    this[119] = v8;
    this[120] = sub_405A30(v9, aEnemyInsignia, -1, 1);
  }
  if ( !this[102] )
  {
    v10 = sub_406A90(this[101], 0);
    v11 = this[101];
    this[102] = v10;
    *(_DWORD *)(v11 + 588) = v10;
    (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)this[102] + 24))(this[102], 0);
    sub_428680(this, this[102]);
  }
  return this[101] && this[102];
}
