//----- (0041C0B0) --------------------------------------------------------
int __thiscall sub_41C0B0(_DWORD *self, float a2)
{
  int result; // eax

  *(float *)&self[self[8] + 9] = a2;
  result = self[8] + 1;
  self[8] = result;
  if ( result == 4 )
    return sub_41C0E0();
  return result;
}
