//----- (00436DD0) --------------------------------------------------------
int __thiscall sub_436DD0(_DWORD *this)
{
  int v2; // eax
  int v4; // ecx

  v2 = this[180];
  if ( v2 >= 10 )
    return 0;
  v4 = *(_DWORD *)(16 * v2 + this[179] + 12);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 24))(v4, 1);
  return *(_DWORD *)(16 * this[180]++ + this[179] + 8);
}
