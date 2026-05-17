//----- (00463110) --------------------------------------------------------
int __thiscall sub_463110(_DWORD *this)
{
  int result; // eax
  int v2; // edx

  result = 88 * this[128];
  v2 = (int)&this[result + 220];
  if ( &this[result] != (_DWORD *)-880 )
  {
    result = 0;
    *(_DWORD *)(v2 + 348) = 0;
    memset((void *)(v2 + 92), 0, 0x100u);
  }
  return result * 4;
}
