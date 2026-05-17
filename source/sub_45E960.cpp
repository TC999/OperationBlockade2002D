//----- (0045E960) --------------------------------------------------------
int __thiscall sub_45E960(_DWORD *this, int a2)
{
  void *v3; // eax
  int result; // eax

  v3 = (void *)this[127];
  this[126] = 0;
  this[125] = a2;
  this[124] = -1;
  result = sub_488CEE(v3);
  this[127] = 0;
  *(_DWORD *)(*(_DWORD *)(dword_520970 + 236) + 20) = a2;
  return result;
}
