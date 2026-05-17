//----- (00423230) --------------------------------------------------------
int sub_423230()
{
  int result; // eax
  int v1; // esi

  if ( !dword_52073C )
    return -1;
  v1 = dword_52073C - 1;
  result = *(_DWORD *)(dword_520530 + 4 * (rand() % (v1 + 1)));
  dword_52073C = 0;
  return result;
}
