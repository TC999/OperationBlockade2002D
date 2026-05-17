//----- (0040E5F0) --------------------------------------------------------
void __thiscall sub_40E5F0(_DWORD *this)
{
  _DWORD *v2; // eax

  *this = 1;
  v2 = malloc(8u);
  this[1] = v2;
  *v2 = 0;
  *(_DWORD *)(this[1] + 4) = 0;
  *((_BYTE *)this + 8) = 1;
}
