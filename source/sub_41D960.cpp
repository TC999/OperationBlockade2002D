//----- (0041D960) --------------------------------------------------------
int __thiscall sub_41D960(_DWORD *this, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // eax
  _DWORD *v4; // ecx
  int result; // eax

  v3 = this + 7;
  v4 = this + 10;
  *v3 = *a2;
  v3[1] = a2[1];
  v3[2] = a2[2];
  *v4 = *a3;
  v4[1] = a3[1];
  result = a3[2];
  v4[2] = result;
  return result;
}
