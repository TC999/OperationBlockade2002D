//----- (0045EA60) --------------------------------------------------------
int __thiscall sub_45EA60(_DWORD *this)
{
  int v1; // edx
  int result; // eax
  int *v3; // ecx
  int v4; // edx
  int v5; // esi

  v1 = this[124];
  result = 0;
  if ( v1 >= 0 )
  {
    v3 = (int *)this[127];
    v4 = v1 + 1;
    do
    {
      v5 = *v3++;
      result += v5;
      --v4;
    }
    while ( v4 );
  }
  return result;
}
