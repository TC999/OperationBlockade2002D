//----- (00408A30) --------------------------------------------------------
int __thiscall sub_408A30(_DWORD *self, _DWORD *a2)
{
  int result; // eax

  *self = *a2;
  self[1] = a2[1];
  result = a2[2];
  self[2] = result;
  return result;
}
