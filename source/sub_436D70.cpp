//----- (00436D70) --------------------------------------------------------
int __cdecl sub_436D70(_DWORD *self)
{
  int i; // esi
  int v3; // ecx
  int result; // eax

  for ( i = 0; i < 160; i += 16 )
  {
    sub_421110(*(LPVOID **)(self[179] + i + 8), AppName);
    *(_DWORD *)(*(_DWORD *)(self[179] + i + 8) + 20) = 1065017672;
    v3 = *(_DWORD *)(self[179] + i + 12);
    result = (*(int (__cdecl **)(int, _DWORD))(*(_DWORD *)v3 + 24))(v3, 0);
  }
  self[180] = 0;
  return result;
}
