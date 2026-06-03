//----- (004476E0) --------------------------------------------------------
int __cdecl sub_4476E0(_DWORD *self, int a2, int a3)
{
  int v3; // esi
  int result; // eax

  v3 = a2;
  if ( a2 > 0 )
  {
    do
    {
      result = sub_465E00(self, a3, self[364]);
      --v3;
    }
    while ( v3 );
  }
  return result;
}
