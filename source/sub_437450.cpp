//----- (00437450) --------------------------------------------------------
_DWORD *__thiscall sub_437450(int this, char a2)
{
  int v3; // eax
  int v4; // eax
  _DWORD *v5; // esi
  _DWORD *v6; // eax

  v3 = *(_DWORD *)(this + 28);
  if ( v3 <= 0 )
  {
    v6 = operator new(0x80u);
    if ( v6 )
      v5 = sub_412AB0(v6);
    else
      v5 = 0;
    *((_BYTE *)v5 + 104) = 1;
    sub_413120(1065017672);
    sub_4131B0(v5, *(_DWORD **)(this + 20));
    if ( a2 )
      sub_413130(1056964608, 0, 1065353216, 1056964608);
    else
      sub_413130(0, 0, 1056964608, 1056964608);
    sub_428680((_DWORD *)this, (int)v5);
  }
  else
  {
    v4 = v3 - 1;
    v5 = *(_DWORD **)(*(_DWORD *)(this + 24) + 4 * v4);
    *(_DWORD *)(this + 28) = v4;
    (*(void (__thiscall **)(_DWORD *, int))(*v5 + 24))(v5, 1);
  }
  return v5;
}
