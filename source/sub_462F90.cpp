//----- (00462F90) --------------------------------------------------------
_DWORD *__thiscall sub_462F90(_DWORD *this)
{
  _DWORD *v1; // esi
  int v2; // ebp
  int v3; // edx
  int v4; // ebx
  int v5; // edx
  _DWORD *result; // eax
  _DWORD *v7; // ecx

  v1 = this + 586;
  v2 = 4;
  do
  {
    v3 = *v1;
    v4 = v1[1];
    memset(v1 - 1, 0, 0x34u);
    *v1 = v3;
    v1[1] = v4;
    (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*v1 + 24))(*v1, 0);
    (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)v1[1] + 24))(v1[1], 0);
    v1 += 13;
    --v2;
  }
  while ( v2 );
  v5 = 4;
  this[131] = 0;
  result = this + 585;
  v7 = this + 220;
  do
  {
    *v7 = -1;
    *result = -1;
    result += 13;
    v7 += 88;
    --v5;
  }
  while ( v5 );
  this[129] = -1;
  return result;
}
