//----- (00436A40) --------------------------------------------------------
int __thiscall sub_436A40(int this, int a2)
{
  _DWORD *v3; // eax
  int v4; // ecx

  *(_DWORD *)(this + 492) = a2;
  if ( a2 <= -1 )
    v3 = 0;
  else
    v3 = *(_DWORD **)(this + 4 * a2 + 580);
  sub_4131B0(*(_DWORD **)(this + 472), v3);
  v4 = *(_DWORD *)(this + 472);
  if ( a2 >= 0 )
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 24))(v4, 1);
  else
    return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 24))(v4, 0);
}
