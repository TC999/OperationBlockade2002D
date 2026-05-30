//----- (0046C866) --------------------------------------------------------
int __stdcall sub_46C866(int a1, int a2, int a3, int (__cdecl *a4)(int))
{
  int result; // eax
  int v6; // edi

  result = a3 - 1;
  if ( a3 - 1 >= 0 )
  {
    v6 = a3;
    do
    {
      result = a4(a1);
      a1 += a2;
      --v6;
    }
    while ( v6 );
  }
  return result;
}
