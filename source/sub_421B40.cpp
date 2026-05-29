//----- (00421B40) --------------------------------------------------------
void __thiscall sub_421B40(_DWORD *self, int a2)
{
  int v3; // esi
  int v4; // ebx

  v3 = 0;
  v4 = self[10];
  if ( v4 > 0 )
  {
    do
      sub_421460(*(_DWORD *)(self[9] + 4 * v3++), a2);
    while ( v3 < v4 );
  }
}
