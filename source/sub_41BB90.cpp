//----- (0041BB90) --------------------------------------------------------
int __thiscall sub_41BB90(_DWORD *this)
{
  int v1; // esi
  _DWORD *v2; // edi
  int result; // eax

  *this = -1;
  this[1] = -1;
  this[2] = -1;
  this[4] = -1;
  this[5] = -1;
  this[6] = -1;
  v1 = 0;
  v2 = this + 15;
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
