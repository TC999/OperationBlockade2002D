//----- (00428620) --------------------------------------------------------
char __thiscall sub_428620(_DWORD *self, int a2)
{
  int i; // esi
  char result; // al

  for ( i = self[3]; i; i = *(_DWORD *)(i + 8) )
  {
    result = *(_BYTE *)(i + 16);
    if ( result )
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)i + 16))(i, a2);
  }
  return result;
}
