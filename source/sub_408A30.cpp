//----- (00408A30) --------------------------------------------------------
int __thiscall sub_408A30(_DWORD *this, _DWORD *a2)
{
  int result; // eax

  *this = *a2;
  this[1] = a2[1];
  result = a2[2];
  this[2] = result;
  return result;
}
