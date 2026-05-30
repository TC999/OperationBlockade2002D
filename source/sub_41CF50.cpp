//----- (0041CF50) --------------------------------------------------------
int __cdecl sub_41CF50(int self)
{
  int result; // eax

  result = *(_DWORD *)(self + 32);
  if ( result )
    result = (*(int (__stdcall **)(int))(*(_DWORD *)result + 72))(result);
  *(_BYTE *)(self + 1) = 0;
  *(_DWORD *)(self + 28) = 0;
  *(_DWORD *)(self + 340) = 0;
  return result;
}
