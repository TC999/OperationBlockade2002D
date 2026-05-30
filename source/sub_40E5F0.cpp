//----- (0040E5F0) --------------------------------------------------------
void __cdecl sub_40E5F0(_DWORD *self)
{
  _DWORD *v2; // eax

  *self = 1;
  v2 = malloc(8u);
  self[1] = v2;
  *v2 = 0;
  *(_DWORD *)(self[1] + 4) = 0;
  *((_BYTE *)self + 8) = 1;
}
