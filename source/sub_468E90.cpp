//----- (00468E90) --------------------------------------------------------
int __thiscall sub_468E90(_DWORD **self, int a2)
{
  int i; // esi
  int v4; // eax
  int v5; // ebp
  int j; // esi
  int *v7; // ecx
  int result; // eax
  char Buffer[80]; // [esp+10h] [ebp-154h] BYREF
  char v10[260]; // [esp+60h] [ebp-104h] BYREF

  for ( i = 1; i <= 9; ++i )
  {
    sprintf(Buffer, "island %d", i);
    sprintf(v10, "Sky%02d\\Island %d_Sky%02d.tga", a2, i, a2);
    v4 = sub_405A30(self[5], Buffer, -1, 1);
    sub_403BB0(self[5], v4, v10);
  }
  v5 = 0;
  for ( j = 147; j < 151; self[5][j - 1] = result )
  {
    sprintf(v10, "Sky%02d\\Water%d_Sky%02d.tga", a2, ++v5, a2);
    v7 = (int *)self[5][j];
    if ( v7 )
    {
      sub_422230(v7);
      self[5][j] = 0;
    }
    result = sub_409AF0(v10, 0);
    ++j;
  }
  return result;
}
