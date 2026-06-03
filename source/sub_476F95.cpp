//----- (00476F95) --------------------------------------------------------
int __cdecl sub_476F95(_DWORD *a1, char a2)
{
  int v2; // eax
  int result; // eax

  v2 = a1[4];
  if ( v2 != 200 && v2 != 201 )
  {
    *(_DWORD *)(*a1 + 20) = 18;
    *(_DWORD *)(*a1 + 24) = a1[4];
    (*(void (__cdecl **)(_DWORD *))*a1)(a1);
  }
  result = sub_476E4E(a1);
  if ( result == 1 )
    return 1;
  if ( result == 2 )
  {
    if ( a2 )
    {
      *(_DWORD *)(*a1 + 20) = 50;
      (*(void (__cdecl **)(_DWORD *))*a1)(a1);
    }
    sub_47CD3C((int)a1);
    return 2;
  }
  return result;
}
