//----- (00408860) --------------------------------------------------------
int __thiscall sub_408860(_DWORD *this, int a2)
{
  int v2; // edx
  int result; // eax

  v2 = this[7];
  this[11] = a2;
  result = *(_DWORD *)(*(_DWORD *)(v2 + 44) + 4 * a2);
  this[8] = result;
  return result;
}
