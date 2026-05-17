//----- (004285F0) --------------------------------------------------------
char __thiscall sub_4285F0(_DWORD *this, int a2, int a3)
{
  int i; // esi
  char result; // al

  for ( i = this[3]; i; i = *(_DWORD *)(i + 8) )
  {
    result = *(_BYTE *)(i + 16);
    if ( result )
      result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)i + 12))(i, a2, a3);
  }
  return result;
}
