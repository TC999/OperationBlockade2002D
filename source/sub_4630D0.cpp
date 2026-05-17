//----- (004630D0) --------------------------------------------------------
int __thiscall sub_4630D0(char *this)
{
  int v1; // edx
  int result; // eax
  char *v3; // esi

  v1 = 0;
  result = *((_DWORD *)this + 130);
  if ( result > 0 )
  {
    v3 = this + 972;
    do
    {
      ++v1;
      memset(v3, 0, 0x100u);
      result = *((_DWORD *)this + 130);
      v3 += 352;
    }
    while ( v1 < result );
  }
  return result;
}
