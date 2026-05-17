//----- (00408EF0) --------------------------------------------------------
int __thiscall sub_408EF0(int this, int a2)
{
  int v3; // ecx
  int result; // eax

  v3 = *(_DWORD *)(this + 84);
  if ( v3 )
    result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 32))(v3, 0);
  *(_DWORD *)(this + 84) = a2;
  if ( a2 )
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)a2 + 32))(a2, 1);
  *(_BYTE *)(this + 100) = 0;
  *(_DWORD *)(this + 104) = 0;
  *(_DWORD *)(this + 108) = 0;
  *(_DWORD *)(this + 112) = 0;
  return result;
}
