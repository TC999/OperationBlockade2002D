//----- (00436DD0) --------------------------------------------------------
int __thiscall sub_436DD0(_DWORD *self)
{
  int v2; // eax
  int v4; // ecx

  v2 = self[180];
  if ( v2 >= 10 )
    return 0;
  v4 = *(_DWORD *)(16 * v2 + self[179] + 12);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 24))(v4, 1);
  return *(_DWORD *)(16 * self[180]++ + self[179] + 8);
}
