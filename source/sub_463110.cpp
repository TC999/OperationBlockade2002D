//----- (00463110) --------------------------------------------------------
int __cdecl sub_463110(_DWORD *self)
{
  int result; // eax
  int v2; // edx

  result = 88 * self[128];
  v2 = (int)&self[result + 220];
  if ( &self[result] != (_DWORD *)-880 )
  {
    result = 0;
    *(_DWORD *)(v2 + 348) = 0;
    memset((void *)(v2 + 92), 0, 0x100u);
  }
  return result * 4;
}
