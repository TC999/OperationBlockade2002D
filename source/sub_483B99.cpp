//----- (00483B99) --------------------------------------------------------
int __cdecl sub_483B99(int a1)
{
  int v2; // edi
  int result; // eax
  int v4; // edx
  int v5; // ebx
  int v6; // [esp+10h] [ebp+8h]

  v2 = (**(int (__cdecl ***)(int, int, int))(a1 + 4))(a1, 1, 44);
  *(_DWORD *)(a1 + 420) = v2;
  *(_DWORD *)(v2 + 32) = 0;
  *(_DWORD *)(v2 + 40) = 0;
  *(_DWORD *)v2 = (int)sub_483A85;
  *(_DWORD *)(v2 + 12) = (int)sub_483B87;
  if ( *(_DWORD *)(a1 + 100) != 3 )
  {
    *(_DWORD *)(*(_DWORD *)a1 + 20) = 46;
    (**(void (__cdecl ***)(int))a1)(a1);
  }
  v6 = 0;
  *(_DWORD *)(v2 + 24) = (**(int (__cdecl ***)(int, int, int))(a1 + 4))(a1, 1, 128);
  do
  {
    result = (*(int (__cdecl **)(int, int, int))(*(_DWORD *)(a1 + 4) + 4))(a1, 1, 4096);
    v4 = v6;
    v6 += 4;
    *(_DWORD *)(v4 + *(_DWORD *)(v2 + 24)) = result;
  }
  while ( v6 < 128 );
  *(_BYTE *)(v2 + 28) = 1;
  if ( *(_BYTE *)(a1 + 90) )
  {
    v5 = *(_DWORD *)(a1 + 84);
    if ( v5 < 8 )
    {
      *(_DWORD *)(*(_DWORD *)a1 + 20) = 55;
      *(_DWORD *)(*(_DWORD *)a1 + 24) = 8;
      (**(void (__cdecl ***)(int))a1)(a1);
    }
    if ( v5 > 256 )
    {
      *(_DWORD *)(*(_DWORD *)a1 + 20) = 56;
      *(_DWORD *)(*(_DWORD *)a1 + 24) = 256;
      (**(void (__cdecl ***)(int))a1)(a1);
    }
    result = (*(int (__cdecl **)(int, int, int, int))(*(_DWORD *)(a1 + 4) + 8))(a1, 1, v5, 3);
    *(_DWORD *)(v2 + 16) = result;
    *(_DWORD *)(v2 + 20) = v5;
  }
  else
  {
    *(_DWORD *)(v2 + 16) = 0;
  }
  if ( *(_DWORD *)(a1 + 76) )
    *(_DWORD *)(a1 + 76) = 2;
  if ( *(_DWORD *)(a1 + 76) == 2 )
  {
    *(_DWORD *)(v2 + 32) = (*(int (__cdecl **)(int, int, int))(*(_DWORD *)(a1 + 4) + 4))(
                             a1,
                             1,
                             6 * (*(_DWORD *)(a1 + 92) + 2));
    return sub_4839D0(a1);
  }
  return result;
}
