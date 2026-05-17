//----- (0047CD7F) --------------------------------------------------------
int __cdecl sub_47CD7F(int a1)
{
  int result; // eax

  result = (**(int (__cdecl ***)(int, _DWORD, int))(a1 + 4))(a1, 0, 130);
  *(_BYTE *)(result + 128) = 0;
  return result;
}
