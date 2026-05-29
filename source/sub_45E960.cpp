//----- (0045E960) --------------------------------------------------------
int __thiscall sub_45E960(_DWORD *self, int a2)
{
  void *v3; // eax
  int result; // eax

  v3 = (void *)self[127];
  self[126] = 0;
  self[125] = a2;
  self[124] = -1;
  result = sub_488CEE(v3);
  self[127] = 0;
  *(_DWORD *)(*(_DWORD *)(dword_520970 + 236) + 20) = a2;
  return result;
}
