//----- (004630D0) --------------------------------------------------------
int __thiscall sub_4630D0(char *self)
{
  int v1; // edx
  int result; // eax
  char *v3; // esi

  v1 = 0;
  result = *((_DWORD *)self + 130);
  if ( result > 0 )
  {
    v3 = self + 972;
    do
    {
      ++v1;
      memset(v3, 0, 0x100u);
      result = *((_DWORD *)self + 130);
      v3 += 352;
    }
    while ( v1 < result );
  }
  return result;
}
