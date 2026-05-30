//----- (004262D0) --------------------------------------------------------
int __cdecl sub_4262D0(int self)
{
  int v2; // esi
  int result; // eax

  sub_4229D0(aUiHiding);
  sub_4246F0((LPVOID **)self);
  v2 = *(_DWORD *)(self + 52);
  if ( v2 )
  {
    *(_DWORD *)(self + 52) = 0;
    (*(void (__cdecl **)(int))(*(_DWORD *)v2 + 40))(v2);
    (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v2 + 24))(v2, 0);
    result = dword_520970;
    *(_BYTE *)(dword_520970 + 20) = 0;
  }
  else
  {
    *(_BYTE *)(dword_520970 + 20) = 0;
    result = dword_520970;
  }
  *(_BYTE *)(dword_520970 + 296) = 0;
  return result;
}
