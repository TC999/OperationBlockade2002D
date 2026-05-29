//----- (004624D0) --------------------------------------------------------
int __thiscall sub_4624D0(_DWORD *self, int a2)
{
  int v2; // eax
  int result; // eax

  if ( &self[88 * self[128]] != (_DWORD *)-880 )
  {
    v2 = (int)&self[88 * self[128] + 220];
    *(_DWORD *)(v2 + 348) += a2;
  }
  result = dword_4F5CC4;
  if ( *(_BYTE *)(dword_4F5CC4 + 936) || *(_BYTE *)(dword_4F5CC4 + 937) )
    return sub_463780(self);
  return result;
}
