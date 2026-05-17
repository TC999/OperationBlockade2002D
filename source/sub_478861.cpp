//----- (00478861) --------------------------------------------------------
int __cdecl sub_478861(int a1)
{
  _DWORD *v1; // eax
  int i; // ecx

  v1 = (_DWORD *)(**(int (__cdecl ***)(int, _DWORD, int))(a1 + 4))(a1, 0, 92);
  *(_DWORD *)(a1 + 400) = v1;
  *v1 = sub_478834;
  *(_DWORD *)(*(_DWORD *)(a1 + 400) + 4) = sub_4784D6;
  *(_DWORD *)(*(_DWORD *)(a1 + 400) + 8) = sub_4786C6;
  *(_DWORD *)(*(_DWORD *)(a1 + 400) + 12) = sub_4782CC;
  for ( i = 16; i < 80; i += 4 )
    *(_DWORD *)(i + *(_DWORD *)(a1 + 400)) = sub_4782CC;
  *(_DWORD *)(*(_DWORD *)(a1 + 400) + 16) = sub_47782B;
  *(_DWORD *)(*(_DWORD *)(a1 + 400) + 72) = sub_477A67;
  return sub_478834((_DWORD *)a1);
}
