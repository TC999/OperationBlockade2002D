//----- (00422740) --------------------------------------------------------
int __thiscall sub_422740(_DWORD *self, int a2)
{
  int result; // eax

  for ( result = self[5]; result; result = *(_DWORD *)(result + 16) )
    *(_BYTE *)(result + 4) = 0;
  return result;
}
