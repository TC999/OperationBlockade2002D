//----- (0040C2B0) --------------------------------------------------------
_DWORD *__thiscall sub_40C2B0(_BYTE *this, _DWORD *a2)
{
  _DWORD *result; // eax
  int v4; // [esp+4h] [ebp-8h] BYREF
  LPVOID lpMem; // [esp+8h] [ebp-4h]

  v4 = 0;
  sub_40C310(&v4);
  sub_488CEE(lpMem);
  sub_40C4C0(&v4);
  sub_488CEE(lpMem);
  result = a2;
  this[292] = 0;
  *a2 = 0;
  a2[1] = 0;
  return result;
}
