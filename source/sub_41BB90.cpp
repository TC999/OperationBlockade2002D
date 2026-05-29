//----- (0041BB90) --------------------------------------------------------
int __thiscall sub_41BB90(_DWORD *self)
{
  int v1; // esi
  _DWORD *v2; // edi
  int result; // eax

  *self = -1;
  self[1] = -1;
  self[2] = -1;
  self[4] = -1;
  self[5] = -1;
  self[6] = -1;
  v1 = 0;
  v2 = self + 15;
  do
  {
    *(v2 - 8) = 0;
    (*(void (__stdcall **)(_DWORD, int, _DWORD))(**(_DWORD **)ArgList + 244))(*(_DWORD *)ArgList, v1, 0);
    (*(void (__stdcall **)(_DWORD, int, int, int))(**(_DWORD **)ArgList + 252))(*(_DWORD *)ArgList, v1, 1, 1);
    result = (*(int (__stdcall **)(_DWORD, int, int, int))(**(_DWORD **)ArgList + 252))(*(_DWORD *)ArgList, v1, 4, 1);
    *v2 = -1;
    v2[8] = -1;
    ++v1;
    ++v2;
  }
  while ( v1 < 8 );
  return result;
}
